#include "modding.h"
#include "functions.h"
#include "variables.h"
#include "recomputils.h"
#include "structs.h"
#include "translation.h"
#include "strhelper.h"
#include "string.h"

// Pause menu item structure
typedef struct {
    f32 delay;
    f32 unk4;
    char *str;
    s16 y;
    u8 portrait;
    u8 unkF;
} PauseMenuItem;

extern PauseMenuItem D_8036C4E0[4];

// Totals page level names
typedef struct {
    s16 level_id;
    s16 x;
    u8 *string;
} TotalsEntry;

extern TotalsEntry D_8036C58C[13];

// Game select menu strings
extern char *CONTROL_STICK_INSTRUCTIONS;
extern char *ERASE_INSTRUCTIONS;
extern char *ERASE_CONFIRMATION;

// Game select zoombox
extern u8 *chGameSelectBottomZoombox;

// Imports from Asset Expansion Pak
RECOMP_IMPORT("bk_recomp_asset_expansion_pak", void bk_recomp_aep_register_replacement(enum asset_e asset_id, void *asset_data));
RECOMP_IMPORT("bk_recomp_asset_expansion_pak", void bk_recomp_aep_register_replacement_with_size(enum asset_e asset_id, void *asset_data, s32 size));
RECOMP_IMPORT("bk_recomp_asset_expansion_pak", void bk_recomp_aep_unregister_replacement(enum asset_e asset_id));

// String buffers for dynamic text
static char new_str[2][0x40];

// Hash display buffer for pause menu
static char hash_display_str[256];

// ============================================================
// Rice CRC32 - from rt64 texture_hasher (GPL licensed tool)
// Computes the same hash used by HD texture packs
// Parameters: src=pixel data, width/height in pixels,
//   size=CI8 size value (2), rowStride=bytes per row
// ============================================================
static u32 rice_crc32(const u8 *src, s32 width, s32 height, s32 size, s32 rowStride) {
    u32 crc32Ret = 0;
    u32 bytesPerLine = (u32)(width << size) >> 1;
    s32 y = height - 1;
    while (y >= 0) {
        u32 esi = 0;
        s32 x = (s32)bytesPerLine - 4;
        while (x >= 0) {
            esi = ((u32)src[x]) | ((u32)src[x+1] << 8) | ((u32)src[x+2] << 16) | ((u32)src[x+3] << 24);
            esi ^= (u32)x;
            crc32Ret = (crc32Ret << 4) + ((crc32Ret >> 28) & 15);
            crc32Ret += esi;
            x -= 4;
        }
        esi ^= (u32)y;
        crc32Ret += esi;
        src += rowStride;
        --y;
    }
    return crc32Ret;
}

// Convert u32 to 8-char hex string
static void u32_to_hex(u32 val, char *out) {
    static const char hex[] = "0123456789ABCDEF";
    for (s32 i = 7; i >= 0; i--) {
        out[i] = hex[val & 0xF];
        val >>= 4;
    }
    out[8] = '\0';
}

// QuizRawAsset type (defined in quiz_raw.c)
typedef struct { s32 asset_id; const u8 *data; s32 size; } QuizRawAsset;

// Run after AEP is initialised
RECOMP_HOOK_RETURN("assetCache_init")
void onInit()
{
    recomp_printf("[BK-ES] Inicializando...\n");

    // Build translation binaries
    translation_build_table(&sm_table);
    translation_build_table(&core_table);
    translation_build_table(&mumbo_table);
    translation_build_table(&mm_table);
    translation_build_table(&ttc_table);
    translation_build_table(&cc_table);
    translation_build_table(&bgs_table);
    translation_build_table(&fp_table);
    translation_build_table(&gv_table);
    translation_build_table(&mmm_table);
    translation_build_table(&rbb_table);
    translation_build_table(&ccw_table);
    translation_build_table(&misc_table);
    translation_build_table(&taunts_table);
    translation_build_table(&brentilda_table);
    translation_build_table(&parade_table);
    translation_build_table(&puzzleboard_table);
    translation_build_table(&quiz1_table);
    translation_build_table(&quiz2_table);
    translation_build_table(&quiz3_table);
    translation_build_table(&lair_table);

    // Register raw quiz assets FIRST (with_size must be called before register_replacement)
    s32 total = 0;
    {
        extern QuizRawAsset quiz_raw_assets[];
        extern s32 quiz_raw_count;
        for (s32 qi = 0; qi < quiz_raw_count; qi++) {
            bk_recomp_aep_register_replacement_with_size(
                quiz_raw_assets[qi].asset_id,
                (void *)quiz_raw_assets[qi].data,
                quiz_raw_assets[qi].size
            );
            total++;
        }
        recomp_printf("[BK-ES] %d quiz assets raw\n", quiz_raw_count);
    }

    // Then register all dialog tables with AEP (without size)
    DialogDefTable *tables[] = { &sm_table, &core_table, &mumbo_table, &mm_table, &ttc_table, &cc_table, &bgs_table, &fp_table, &gv_table, &mmm_table, &rbb_table, &ccw_table, &misc_table, &taunts_table, &brentilda_table, &parade_table, &puzzleboard_table, &quiz1_table, &quiz2_table, &quiz3_table, &lair_table };
    for (s32 t = 0; t < 21; t++) {
        for (s32 i = 0; i < tables[t]->count; i++) {
            if (tables[t]->defs[i].built_data != NULL) {
                s32 aid = tables[t]->defs[i].asset_id;
                // Skip quiz question types handled by quiz_raw.c
                if ((aid >= 0x1213 && aid <= 0x1276) ||
                    (aid >= 0x12DB && aid <= 0x12ED) ||
                    (aid >= 0x13A3 && aid <= 0x13D5)) continue;
                // Grunty personal questions (0x1407-0x1424) need with_size
                if (aid >= 0x1407 && aid <= 0x1424) {
                    bk_recomp_aep_register_replacement_with_size(
                        aid,
                        (void *)tables[t]->defs[i].built_data,
                        tables[t]->defs[i].built_size
                    );
                } else {
                    bk_recomp_aep_register_replacement(
                        aid,
                        (void *)tables[t]->defs[i].built_data
                    );
                }
                total++;
            }
        }
    }

    recomp_printf("[BK-ES] %d assets totales registrados\n", total);

    // === TOTALS PAGE LEVEL NAMES ===
    // Bold font doesn't support remapped glyphs - use plain ASCII
    // Adjust X position for centering based on string length
    D_8036C58C[0].x  = 0x40; D_8036C58C[0].string  = (u8 *)"TOTAL DEL JUEGO";
    D_8036C58C[1].x  = 0x40; D_8036C58C[1].string  = (u8 *)"MONTANA ESPIRAL";
    D_8036C58C[2].x  = 0x1B; D_8036C58C[2].string  = (u8 *)"GUARIDA DE GRUNTILDA";
    D_8036C58C[3].x  = 0x24; D_8036C58C[3].string  = (u8 *)"MONTANA DE MUMBO";
    D_8036C58C[4].x  = 0x3C; D_8036C58C[4].string  = (u8 *)"CALA DEL TESORO";
    D_8036C58C[5].x  = 0x28; D_8036C58C[5].string  = (u8 *)"CAVERNA DE CLANKER";
    D_8036C58C[6].x  = 0x20; D_8036C58C[6].string  = (u8 *)"PANTANO BUBBLEGLOOP";
    D_8036C58C[7].x  = 0x48; D_8036C58C[7].string  = (u8 *)"PICO FREEZEEZY";
    D_8036C58C[8].x  = 0x48; D_8036C58C[8].string  = (u8 *)"VALLE DE GOBI";
    D_8036C58C[9].x  = 0x1A; D_8036C58C[9].string  = (u8 *)"MANSION MONSTRUOSA";
    D_8036C58C[10].x = 0x44; D_8036C58C[10].string = (u8 *)"BAHIA OXIDADA";
    D_8036C58C[11].x = 0x38; D_8036C58C[11].string = (u8 *)"BOSQUE DEL RELOJ";
    D_8036C58C[12].x = 0x48; D_8036C58C[12].string = (u8 *)"STOP 'N' SWOP";

    // === GAME SELECT MENU ===
    CONTROL_STICK_INSTRUCTIONS = "USA EL STICK PARA ELEGIR UNA PARTIDA.";
    ERASE_INSTRUCTIONS = "A PARA JUGAR, Z PARA BORRAR!";
    ERASE_CONFIRMATION = "A PARA CONFIRMAR, B PARA CANCELAR.";

    // === PAUSE MENU ===
    D_8036C4E0[0].str = "VOLVER AL JUEGO";
    D_8036C4E0[2].str = "VER TOTALES";
    D_8036C4E0[3].str = "GUARDAR Y SALIR";
}

// Hook zoombox string display to translate confirmation prompts

// Translate pause menu confirmation strings
// We can't use HOOK to modify args, so we replace the strings
// in D_8036C520 (the source array for pause menu zoombox text)
extern struct { f32 delay; f32 unk4; char *str; s16 y; u8 portrait; u8 unkF; } D_8036C520[4];

// ============================================================
// CUSTOM LATIN-1 FONT RENDERER
// Extends case 0 of _printbuffer_draw_letter to handle Latin-1
// bytes (0x80+) using the expanded font atlas.
// The atlas maps byte values directly to glyph indices (like case 2).
// ============================================================

// ============================================================
// SPANISH FONT GLYPH INJECTION
// Replace unused font positions (#,$,&,*,+,[,\,]) with ¡¿ÁÉÍÑÓÚ
// ============================================================
#include "spanish_glyphs.h"

typedef struct { void *unk0; void *unk4; } FontLetter;
extern FontLetter *print_sFonts[4];

// Map replacement byte to print_sFonts index: byte - 0x21
// 0x23(#)=2, 0x24($)=3, 0x26(&)=5, 0x2A(*)=9, 0x2B(+)=10,
// 0x5B([)=58, 0x5C(\)=59, 0x5D(])=60
static const struct { u8 font_idx; u8 glyph_idx; } spanish_map[] = {
    { 2,  0 }, // # → ¡
    { 3,  1 }, // $ → ¿
    { 5,  2 }, // & → Á
    { 9,  3 }, // * → É
    { 10, 4 }, // + → Í
    { 58, 5 }, // [ → Ñ
    { 59, 6 }, // \ → Ó
    { 60, 7 }, // ] → Ú
};

// Map: target font index → source glyph to copy
static const struct { u8 target_idx; u8 source_idx; } glyph_copy_map[] = {
    { 2,  0  }, // # pos → ! glyph (for ¡)
    { 3,  30 }, // $ pos → ? glyph (for ¿)
    { 5,  32 }, // & pos → A glyph (for Á)
    { 9,  36 }, // * pos → E glyph (for É)
    { 10, 40 }, // + pos → I glyph (for Í)
    { 58, 45 }, // [ pos → N glyph (for Ñ)
    { 59, 46 }, // \ pos → O glyph (for Ó)
    { 60, 52 }, // ] pos → U glyph (for Ú)
};

// For CI8, the renderer reads:
//   unk0 -> BKSpriteTextureBlock header (8 bytes: x, y, w, h as s16)
//   pixel data at (unk0 + 1) aligned to 8
//   unk4 -> shared palette (256 * 2 bytes RGBA16)
//
// We allocate new buffers with recomp_alloc (game-accessible memory),
// copy the full chunk (header + pixel data) from the source glyph,
// then modify pixels in-place to add accent marks.

// Static pointers to our allocated glyph buffers (so they persist)
static u8 *glyph_bufs[8];

// Find the most common non-zero palette index in CI8 pixel data
static u8 findForegroundIndex(u8 *pixels, s32 size) {
    // Count occurrences of each non-zero index
    s32 counts[256];
    for (s32 i = 0; i < 256; i++) counts[i] = 0;
    for (s32 i = 0; i < size; i++) {
        if (pixels[i] != 0) counts[pixels[i]]++;
    }
    // Find the index with the highest count
    u8 best = 1;
    s32 bestCount = 0;
    for (s32 i = 1; i < 256; i++) {
        if (counts[i] > bestCount) {
            bestCount = counts[i];
            best = (u8)i;
        }
    }
    return best;
}

// Find a semi-transparent palette index (for anti-aliasing edges)
static u8 findSemiIndex(u8 *pixels, s32 size, u8 fg) {
    // Look for a palette index that appears less often than fg (likely semi-transparent)
    s32 counts[256];
    for (s32 i = 0; i < 256; i++) counts[i] = 0;
    for (s32 i = 0; i < size; i++) {
        if (pixels[i] != 0 && pixels[i] != fg) counts[pixels[i]]++;
    }
    // Find the most common non-fg, non-zero index
    u8 semi = fg;
    s32 best = 0;
    for (s32 i = 1; i < 256; i++) {
        if (counts[i] > best) { best = counts[i]; semi = (u8)i; }
    }
    return semi;
}

// Safe pixel set (bounds check)
static void px(u8 *pixels, s32 w, s32 h, s32 x, s32 y, u8 val) {
    if (x >= 0 && x < w && y >= 0 && y < h) pixels[y * w + x] = val;
}

// Draw acute accent - 2 rows, thick diagonal
static void drawAcuteAccent(u8 *pixels, s32 w, s32 new_h, u8 fg, u8 semi) {
    s32 cx = w / 2;
    // Row 0: top
    px(pixels, w, new_h, cx,     0, fg);
    px(pixels, w, new_h, cx + 1, 0, fg);
    // Row 1: bottom
    px(pixels, w, new_h, cx - 1, 1, fg);
    px(pixels, w, new_h, cx,     1, fg);
}

// Draw tilde - 2 rows, centered wide wave
static void drawTilde(u8 *pixels, s32 w, s32 new_h, u8 fg, u8 semi) {
    s32 cx = (w - 1) / 2;  // center properly for odd/even widths
    // Row 0: left hump
    px(pixels, w, new_h, cx - 3, 0, semi);
    px(pixels, w, new_h, cx - 2, 0, fg);
    px(pixels, w, new_h, cx - 1, 0, fg);
    px(pixels, w, new_h, cx,     0, fg);
    px(pixels, w, new_h, cx + 1, 0, semi);
    // Row 1: right hump
    px(pixels, w, new_h, cx - 1, 1, semi);
    px(pixels, w, new_h, cx,     1, fg);
    px(pixels, w, new_h, cx + 1, 1, fg);
    px(pixels, w, new_h, cx + 2, 1, fg);
    px(pixels, w, new_h, cx + 3, 1, semi);
}

RECOMP_HOOK_RETURN("func_802F51B8")
void injectSpanishGlyphs(void) {
    if (print_sFonts[0] == NULL) return;

    // First, copy base FontLetter entries to replacement positions
    for (s32 i = 0; i < 8; i++) {
        s32 tidx = glyph_copy_map[i].target_idx;
        s32 sidx = glyph_copy_map[i].source_idx;
        print_sFonts[0][tidx] = print_sFonts[0][sidx];
    }

    // Create vertically flipped versions for ¡ (i=0) and ¿ (i=1)
    for (s32 i = 0; i < 2; i++) {
        s32 tidx = glyph_copy_map[i].target_idx;
        BKSpriteTextureBlock *src_block = (BKSpriteTextureBlock *)print_sFonts[0][tidx].unk0;
        s32 w = src_block->w;
        s32 h = src_block->h;
        s32 pixel_size = w * h;

        u8 *src_pixels = (u8 *)(src_block + 1);
        while ((u64)src_pixels % 8) src_pixels++;

        // Allocate buffer for flipped glyph
        s32 total_size = 8 + pixel_size;
        u8 *buf = (u8 *)recomp_alloc((unsigned long)(total_size + 16));
        if (buf == NULL) continue;
        glyph_bufs[i] = buf;

        // Copy header (same dimensions)
        BKSpriteTextureBlock *new_block = (BKSpriteTextureBlock *)buf;
        new_block->x = src_block->x;
        new_block->y = src_block->y;
        new_block->w = (s16)w;
        new_block->h = (s16)h;

        // ¡ (i=0): vertical flip only. ¿ (i=1): 180° rotation (vertical + horizontal)
        u8 *dst_pixels = buf + 8;
        for (s32 y = 0; y < h; y++) {
            for (s32 x = 0; x < w; x++) {
                if (i == 0) {
                    // ¡: just flip vertically
                    dst_pixels[y * w + x] = src_pixels[(h - 1 - y) * w + x];
                } else {
                    // ¿: flip both vertically AND horizontally (180° rotation)
                    dst_pixels[y * w + x] = src_pixels[(h - 1 - y) * w + (w - 1 - x)];
                }
            }
        }

        print_sFonts[0][tidx].unk0 = (void *)buf;
    }

    // Create same-size glyph copies with accent marks for Á É Í Ó Ú Ñ
    // Overwrites top 2 rows of letter - no height change = stays in line
    // Skip ¡(i=0) and ¿(i=1) - they use ! and ? glyphs as-is
    for (s32 i = 2; i < 8; i++) {
        s32 tidx = glyph_copy_map[i].target_idx;
        BKSpriteTextureBlock *src_block = (BKSpriteTextureBlock *)print_sFonts[0][tidx].unk0;
        s32 w = src_block->w;
        s32 h = src_block->h;
        s32 pixel_size = w * h;

        // Find source pixel data (after header, aligned to 8)
        u8 *src_pixels = (u8 *)(src_block + 1);
        while ((u64)src_pixels % 8) src_pixels++;

        // Find foreground color
        u8 fg = findForegroundIndex(src_pixels, pixel_size);
        u8 semi = findSemiIndex(src_pixels, pixel_size, fg);

        // Allocate same size: header (8 bytes) + pixel data
        s32 total_size = 8 + pixel_size;
        u8 *buf = (u8 *)recomp_alloc((unsigned long)(total_size + 16));
        if (buf == NULL) continue;
        glyph_bufs[i] = buf;

        // Copy header (same dimensions)
        BKSpriteTextureBlock *new_block = (BKSpriteTextureBlock *)buf;
        new_block->x = src_block->x;
        new_block->y = src_block->y;
        new_block->w = (s16)w;
        new_block->h = (s16)h;

        // Copy pixel data
        u8 *dst_pixels = buf + 8;
        for (s32 j = 0; j < pixel_size; j++) {
            dst_pixels[j] = src_pixels[j];
        }

        // Draw accent customized per letter
        // i=2:Á(A), i=3:É(E), i=4:Í(I), i=5:Ñ(N), i=6:Ó(O), i=7:Ú(U)
        s32 cx = (w - 1) / 2;

        if (i == 5) {
            // Ñ: clear top 2 rows, tilde shifted more left + wider
            for (s32 x = 0; x < w; x++) { dst_pixels[x] = 0; dst_pixels[w + x] = 0; }
            s32 nc = cx - 2;  // shift more left
            px(dst_pixels, w, h, nc - 3, 0, semi);
            px(dst_pixels, w, h, nc - 2, 0, fg);
            px(dst_pixels, w, h, nc - 1, 0, fg);
            px(dst_pixels, w, h, nc,     0, fg);
            px(dst_pixels, w, h, nc + 1, 0, fg);
            px(dst_pixels, w, h, nc + 2, 0, semi);
            px(dst_pixels, w, h, nc - 1, 1, semi);
            px(dst_pixels, w, h, nc,     1, fg);
            px(dst_pixels, w, h, nc + 1, 1, fg);
            px(dst_pixels, w, h, nc + 2, 1, fg);
            px(dst_pixels, w, h, nc + 3, 1, fg);
            px(dst_pixels, w, h, nc + 4, 1, semi);
        } else if (i == 2) {
            // Á: A has peak at top - clear top 2 rows, accent shifted more left
            for (s32 x = 0; x < w; x++) { dst_pixels[x] = 0; dst_pixels[w + x] = 0; }
            px(dst_pixels, w, h, cx - 1, 0, fg);
            px(dst_pixels, w, h, cx,     0, fg);
            px(dst_pixels, w, h, cx - 2, 1, fg);
            px(dst_pixels, w, h, cx - 1, 1, fg);
        } else if (i == 3) {
            // É: E has top bar - DON'T clear, draw accent ABOVE letter (row 0 only)
            // Just overwrite row 0 pixels, keep E's top bar intact
            for (s32 x = 0; x < w; x++) { dst_pixels[x] = 0; }
            px(dst_pixels, w, h, cx + 1, 0, fg);
            px(dst_pixels, w, h, cx,     0, fg);
            px(dst_pixels, w, h, cx - 1, 0, semi);
        } else if (i == 4) {
            // Í: I is very narrow (~3-4px) - draw accent using full width
            // Row 0: right side of accent (full width line)
            for (s32 x2 = w/2; x2 < w; x2++) px(dst_pixels, w, h, x2, 0, fg);
            // Row 1: left side of accent
            for (s32 x2 = 0; x2 <= w/2; x2++) px(dst_pixels, w, h, x2, 1, fg);
            // Row 2: clear separator between accent and I stroke
            for (s32 x2 = 0; x2 < w; x2++) dst_pixels[2 * w + x2] = 0;
        } else {
            // Ó, Ú: these looked perfect before - keep exact same logic
            s32 ocx = w / 2;  // original center calculation
            for (s32 x = 0; x < w; x++) { dst_pixels[x] = 0; dst_pixels[w + x] = 0; }
            px(dst_pixels, w, h, ocx,     0, fg);
            px(dst_pixels, w, h, ocx + 1, 0, fg);
            px(dst_pixels, w, h, ocx - 1, 1, fg);
            px(dst_pixels, w, h, ocx,     1, fg);
        }

        // Point FontLetter to our buffer (same size, stays in line)
        print_sFonts[0][tidx].unk0 = (void *)buf;
    }

    // Also inject into bold font (print_sFonts[1] for indices < 10)
    if (print_sFonts[1] != NULL) {
        // Indices in bold numbers font: #=2, $=3, &=5, *=9
        for (s32 i = 0; i < 4; i++) {
            s32 tidx = glyph_copy_map[i].target_idx;  // 2, 3, 5, 9
            s32 sidx = glyph_copy_map[i].source_idx;
            // Copy base glyph from bold font (same index mapping)
            print_sFonts[1][tidx] = print_sFonts[1][sidx];
        }
    }

    // Rice CRC hash computation for HD texture pack compatibility
    // CI8 format: size=2 (G_IM_SIZ_8b), rowStride = width bytes
    {
        char *out = hash_display_str;
        out[0] = '\0';
        s32 slen = 0;

        for (s32 i = 0; i < 8; i++) {
            s32 tidx = glyph_copy_map[i].target_idx;
            void *ptr = print_sFonts[0][tidx].unk0;
            if (ptr == NULL) continue;

            BKSpriteTextureBlock *blk = (BKSpriteTextureBlock *)ptr;
            s32 w = blk->w;
            s32 h = blk->h;
            if (w <= 0 || h <= 0 || w > 64 || h > 64) continue;

            // CI8: pixel data starts after header, aligned to 8
            u8 *pixels = (u8 *)(blk + 1);
            while ((u64)pixels % 8) pixels++;

            // Rice CRC: size=2 (CI8/8b), rowStride=w (1 byte per pixel for CI8)
            u32 hash = rice_crc32(pixels, w, h, 2, w);
            char hexbuf[9];
            u32_to_hex(hash, hexbuf);

            // Format: X:HASH#3#2
            static const char labels[] = "!$AEINOU";
            if (slen > 0) out[slen++] = ' ';
            out[slen++] = labels[i];
            out[slen++] = ':';
            for (s32 j = 0; j < 8; j++) out[slen++] = hexbuf[j];
            out[slen] = '\0';
        }

        // Hash display removed - was for debug only
    }

    recomp_printf("[BK-ES] Glifos inyectados\n");
}

// Hook for bold letters font (lazy loaded via func_802F5494)
// When print_sFonts[3] is loaded, we need to inject there too
// Indices in bold letters: +=0(10-10), [=48(58-10), \=49(59-10), ]=50(60-10)
RECOMP_HOOK_RETURN("func_802F5494")
void injectBoldGlyphs(s32 letterId, s32 *fontType) {
    static s32 bold_injected = 0;
    if (print_sFonts[3] != NULL && !bold_injected) {
        // + (index 10) → I (index 40): bold letters idx 0 → idx 30
        print_sFonts[3][0] = print_sFonts[3][30];   // + → copy of I
        // [ (index 58) → N (index 45): bold letters idx 48 → idx 35
        print_sFonts[3][48] = print_sFonts[3][35];  // [ → copy of N
        // \ (index 59) → O (index 46): bold letters idx 49 → idx 36
        print_sFonts[3][49] = print_sFonts[3][36];  // \ → copy of O
        // ] (index 60) → U (index 52): bold letters idx 50 → idx 42
        print_sFonts[3][50] = print_sFonts[3][42];  // ] → copy of U
        bold_injected = 1;
    }
}

// Overwrite game select zoombox text (GAME X: TIME/EMPTY → PARTIDA X: TIEMPO/VACIA)
RECOMP_HOOK_RETURN("setGameInformationZoombox")
void overwriteGKZoombox()
{
    u8 *ptr = chGameSelectBottomZoombox;
    ptr += 0x13C;

    char *old0 = *(char **)ptr;
    ptr += sizeof(char *);
    char *old1 = *(char **)ptr;

    // old0 = "GAME X: TIME HH:MM:SS," or "GAME X: EMPTY"
    old0 += 5; // Skip "GAME "

    strcpy(new_str[0], "PARTIDA ");
    old0 = strcat_till(new_str[0], old0, ' '); // Copy game number + ":"
    strcat(new_str[0], " ");

    old0++;
    if (old0[0] == 'E') {
        // EMPTY → VACIA
        strcat(new_str[0], "VACIA");
        new_str[1][0] = '\0';
    } else {
        // TIME → TIEMPO
        old0 += 5; // Skip "TIME "
        strcat(new_str[0], "TIEMPO ");
        strcat_till(new_str[0], old0, ',');
        strcat(new_str[0], ",");

        // old1 = "X JIGSAW[S], X NOTE[S]."
        // → "X PUZZLE[S], X NOTA[S]."
        old1 = strcpy_till(new_str[1], old1, ' ');
        strcat(new_str[1], " PUZZLE");
        if (new_str[1][0] != '1')
            strcat(new_str[1], "S");

        // Find notes part after comma
        old1 = strstrc(old1, ',');
        if (old1) {
            // old1 = ", X NOTE[S]."
            strcat(new_str[1], ", ");
            old1 += 2; // skip ", "
            // Copy the number
            old1 = strcat_till(new_str[1], old1, ' ');
            old1++; // skip space
            // Replace NOTE/NOTES with NOTA/NOTAS
            strcat(new_str[1], " NOTA");
            if (old1[4] == 'S')
                strcat(new_str[1], "S");
            strcat(new_str[1], ".");
        }
    }

    // Set new strings
    *(char **)ptr = new_str[1];
    ptr -= sizeof(char *);
    *(char **)ptr = new_str[0];
}

// Cleanup on game exit
RECOMP_HOOK_RETURN("mainThread_entry")
void onExit()
{
    DialogDefTable *tables[] = { &sm_table, &core_table, &mumbo_table, &mm_table, &ttc_table, &cc_table, &bgs_table, &fp_table, &gv_table, &mmm_table, &rbb_table, &ccw_table, &misc_table, &taunts_table, &brentilda_table, &parade_table, &puzzleboard_table, &quiz1_table, &quiz2_table, &quiz3_table, &lair_table };
    for (s32 t = 0; t < 21; t++) {
        for (s32 i = 0; i < tables[t]->count; i++) {
            bk_recomp_aep_unregister_replacement(tables[t]->defs[i].asset_id);
        }
    }
}
