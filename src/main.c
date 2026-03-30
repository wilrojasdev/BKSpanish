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
RECOMP_IMPORT("bk_recomp_asset_expansion_pak", void bk_recomp_aep_unregister_replacement(enum asset_e asset_id));

// String buffers for dynamic text
static char new_str[2][0x40];

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

    // Register all tables with AEP
    DialogDefTable *tables[] = { &sm_table, &core_table, &mumbo_table, &mm_table, &ttc_table, &cc_table, &bgs_table, &fp_table, &gv_table, &mmm_table, &rbb_table, &ccw_table, &misc_table, &taunts_table, &brentilda_table, &parade_table, &puzzleboard_table, &quiz1_table, &quiz2_table, &quiz3_table, &lair_table };
    s32 total = 0;
    for (s32 t = 0; t < 21; t++) {
        for (s32 i = 0; i < tables[t]->count; i++) {
            if (tables[t]->defs[i].built_data != NULL) {
                bk_recomp_aep_register_replacement(
                    tables[t]->defs[i].asset_id,
                    (void *)tables[t]->defs[i].built_data
                );
                total++;
            }
        }
    }

    recomp_printf("[BK-ES] %d dialogos registrados\n", total);

    // === TOTALS PAGE LEVEL NAMES ===
    // Bold font is separate from dialog font - use plain ASCII here
    D_8036C58C[0].string  = (u8 *)"TOTAL DEL JUEGO";
    D_8036C58C[1].string  = (u8 *)"MONTANA ESPIRAL";
    D_8036C58C[2].string  = (u8 *)"GUARIDA DE GRUNTILDA";
    D_8036C58C[3].string  = (u8 *)"MONTANA DE MUMBO";
    D_8036C58C[4].string  = (u8 *)"CALA DEL TESORO";
    D_8036C58C[5].string  = (u8 *)"CAVERNA DE CLANKER";
    D_8036C58C[6].string  = (u8 *)"PANTANO BUBBLEGLOOP";
    D_8036C58C[7].string  = (u8 *)"PICO FREEZEEZY";
    D_8036C58C[8].string  = (u8 *)"VALLE DE GOBI";
    D_8036C58C[9].string  = (u8 *)"MANSION MONSTRUOSA";
    D_8036C58C[10].string = (u8 *)"BAHIA OXIDADA";
    D_8036C58C[11].string = (u8 *)"BOSQUE DEL RELOJ";
    D_8036C58C[12].string = (u8 *)"STOP 'N' SWOP";

    // === GAME SELECT MENU ===
    CONTROL_STICK_INSTRUCTIONS = "USA EL STICK PARA ELEGIR UNA PARTIDA.";
    ERASE_INSTRUCTIONS = "A PARA JUGAR, Z PARA BORRAR!";
    ERASE_CONFIRMATION = "A PARA CONFIRMAR, B PARA CANCELAR.";

    // === PAUSE MENU ===
    D_8036C4E0[0].str = "VOLVER AL JUEGO";
    D_8036C4E0[2].str = "VER TOTALES";
    D_8036C4E0[3].str = "GUARDAR Y SALIR";
}

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

// Map: base letter index for each Spanish char position
// ¡→!(0), ¿→?(30), Á→A(32), É→E(36), Í→I(40), Ñ→N(45), Ó→O(46), Ú→U(52)
static const struct { u8 target_idx; u8 source_idx; } glyph_copy_map[] = {
    { 2,  0  }, // # → copy ! glyph (for ¡)
    { 3,  30 }, // $ → copy ? glyph (for ¿)
    { 5,  32 }, // & → copy A glyph (for Á)
    { 9,  36 }, // * → copy E glyph (for É)
    { 10, 40 }, // + → copy I glyph (for Í)
    { 58, 45 }, // [ → copy N glyph (for Ñ)
    { 59, 46 }, // \ → copy O glyph (for Ó)
    { 60, 52 }, // ] → copy U glyph (for Ú)
};

RECOMP_HOOK_RETURN("func_802F51B8")
void injectSpanishGlyphs(void) {
    if (print_sFonts[0] == NULL) return;

    // Copy existing glyphs to the replacement positions
    // This ensures the format is 100% compatible (same CI8 data)
    for (s32 i = 0; i < 8; i++) {
        s32 tidx = glyph_copy_map[i].target_idx;
        s32 sidx = glyph_copy_map[i].source_idx;
        print_sFonts[0][tidx] = print_sFonts[0][sidx];
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
