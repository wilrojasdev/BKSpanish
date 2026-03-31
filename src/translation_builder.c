#include "recomputils.h"
#include "translation.h"

// Simple strlen (no libc available)
static s32 tr_strlen(const char *s) {
    s32 len = 0;
    while (s[len] != '\0') len++;
    return len;
}

// Convert Latin-1 byte to a glyph position within 0x21-0x5E range.
// We repurpose unused ASCII positions (#,$,&,*,+,[,\,]) for Spanish chars.
// The font init hook replaces those glyph textures with Spanish character images.
static u8 latin1_to_glyph(u8 c) {
    if (c < 0x80) return c; // ASCII passthrough
    switch (c) {
        case 0xA1: return 0x23; // ¡ → # position
        case 0xBF: return 0x24; // ¿ → $ position
        case 0xC0: case 0xC1: return 0x26; // À,Á → & position
        case 0xC9: return 0x2A; // É → * position
        case 0xCD: return 0x2B; // Í → + position
        case 0xD1: return 0x5B; // Ñ → [ position
        case 0xD3: return 0x5C; // Ó → \ position
        case 0xDA: return 0x5D; // Ú → ] position
        // Fallback: map other accented chars to base letter
        case 0xC2: case 0xC3: case 0xC4: case 0xC5: return 'A';
        case 0xC7: return 'C';
        case 0xC8: case 0xCA: case 0xCB: return 'E';
        case 0xCC: case 0xCE: case 0xCF: return 'I';
        case 0xD2: case 0xD4: case 0xD5: case 0xD6: return 'O';
        case 0xD9: case 0xDB: case 0xDC: return 'U';
        case 0xDD: return 'Y';
        default: return c; // pass through (\xFD escape etc.)
    }
}

/*
 * Build the full asset binary for a dialog definition.
 *
 * DIALOG format (top != NULL):
 *   [0x03] [0x03] [0x00]   <- 3-byte header
 *   [bottom_count] { [cmd] [len] [text...] [0x00] }*
 *   [top_count]    { [cmd] [len] [text...] [0x00] }*
 *
 * QUIZ format (top == NULL, top_count used as metadata):
 *   [num_questions] [num_answers] [num_wrong_only]  <- 3-byte quiz header
 *   { [cmd] [len] [text...] [0x00] }*               <- flat entries (no CLOSE_ALT)
 *
 * Where len = strlen(text) + 1 (includes null terminator)
 */

// Write a single entry (portrait + len + text + null) and return new pointer
// Applies Latin-1 to ASCII conversion on text bytes
static u8 *write_entry(u8 *p, DialogLine *line) {
    s32 slen = tr_strlen(line->text);
    *p++ = line->portrait;
    *p++ = (u8)(slen + 1);
    for (s32 j = 0; j < slen; j++) {
        u8 ch = (u8)line->text[j];
        // Don't convert bytes that are part of \xFD escape sequences
        *p++ = latin1_to_glyph(ch);
    }
    *p++ = 0x00;
    return p;
}

static void build_dialog(DialogDef *def) {
    s32 i, size, slen;
    u8 *p;

    // Quiz assets (0x1213-0x1276) use quiz format (no dialog header)
    s32 is_quiz = (def->asset_id >= 0x1213 && def->asset_id <= 0x1276);

    if (!is_quiz) {
        // ===== STANDARD DIALOG FORMAT =====
        size = 3; // header
        size += 1; // bottom count
        for (i = 0; i < def->bottom_count; i++) {
            slen = tr_strlen(def->bottom[i].text);
            size += 2 + slen + 1;
        }
        size += 1; // top count
        for (i = 0; i < def->top_count; i++) {
            slen = tr_strlen(def->top[i].text);
            size += 2 + slen + 1;
        }

        def->built_data = recomp_alloc(size);
        def->built_size = size;
        p = def->built_data;

        *p++ = 0x03;
        *p++ = 0x03;
        *p++ = 0x00;

        *p++ = (u8)def->bottom_count;
        for (i = 0; i < def->bottom_count; i++) {
            p = write_entry(p, &def->bottom[i]);
        }

        *p++ = (u8)def->top_count;
        for (i = 0; i < def->top_count; i++) {
            p = write_entry(p, &def->top[i]);
        }
    } else {
        // ===== QUIZ FORMAT (top == NULL) =====
        // top_count encodes: (num_answers << 8) | num_wrong_only
        // bottom entries = question lines + answer lines (skip CLOSE_ALT at end)
        s32 num_questions = 0;
        s32 num_answers = 0;
        s32 entry_count = def->bottom_count;

        // Count actual entries (skip CLOSE_ALT/control at end)
        while (entry_count > 0 && def->bottom[entry_count - 1].portrait <= 0x1F) {
            entry_count--;
        }

        // Count questions (portrait 0x80) and answers (0x81-0x83)
        for (i = 0; i < entry_count; i++) {
            u8 port = def->bottom[i].portrait;
            if (port == 0x80) {
                num_questions++;
            } else if (port >= 0x81 && port <= 0x83) {
                num_answers++;
            }
        }

        // Calculate size: 3 dialog header + 3 quiz metadata + entries
        size = 3 + 3;
        for (i = 0; i < entry_count; i++) {
            slen = tr_strlen(def->bottom[i].text);
            size += 2 + slen + 1;
        }

        def->built_data = recomp_alloc(size);
        def->built_size = size;
        p = def->built_data;

        // Dialog header (AEP skips these 3 bytes via offset mechanism)
        *p++ = 0x03;  // num_versions
        *p++ = 0x03;  // offset_v0 low byte = 3
        *p++ = 0x00;  // offset_v0 high byte = 0

        // Quiz metadata (this is what the quiz parser actually reads)
        *p++ = (u8)num_questions;
        *p++ = (u8)num_answers;
        *p++ = 0x00; // num_wrong_only = 0

        // Write all entries (flat, no count bytes)
        for (i = 0; i < entry_count; i++) {
            p = write_entry(p, &def->bottom[i]);
        }
    }
}

void translation_build_table(DialogDefTable *table) {
    for (s32 i = 0; i < table->count; i++) {
        build_dialog(&table->defs[i]);
    }
}
