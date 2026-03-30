#include "translation.h"

/*
 * Clanker's Cavern (World 3) - CC
 * Portraits: 0x89=Clanker, 0x8A=Mutie-Snippets, 0xAD=Gloop
 * Faithful to German structure - only text changed
 */

#define CLANKER   0x89
#define MUTIESNIP 0x8A
#define GLOOP     0xAD

// ============================================================
// CLANKER (portrait 0x89)
// ============================================================

// 0xD2B - Clanker meet (B:2, T:1)
static DialogLine d2b_b[] = {
    { CLANKER,         "BZZZ... SOY CLANKER, EL TRITURADOR DE BASURA DE LA VIEJA BRUJA. NECESITO AIRE FRESCO URGENTEMENTE." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d2b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD2C - Clanker fresh air thanks (B:5, T:1)
static DialogLine d2c_b[] = {
    { CLANKER,         "\xA1" "GRACIAS POR EL AIRE" },
    { CLANKER,         "FRESCO! UNA RECOMPENSA" },
    { CLANKER,         "LES ESPERA EN" },
    { CLANKER,         "MI ESPALDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d2c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD2D - Clanker toothache (B:5, T:1)
static DialogLine d2d_b[] = {
    { CLANKER,         "BZZZ... \xA1" "MIS DIENTES ME" },
    { CLANKER,         "DUELEN! \xA1" "HE COMIDO" },
    { CLANKER,         "DEMASIADA BASURA!" },
    { CLANKER,         "\xA1" "POR FAVOR AYUDEN A CLANKER...!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d2d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD2E - Clanker one side better (B:4, T:1)
static DialogLine d2e_b[] = {
    { CLANKER,         "\xA1" "DE ESTE LADO YA EST\xC1" },
    { CLANKER,         "MUCHO MEJOR!" },
    { CLANKER,         "\xA1" "CLANKER SE TRAG\xD3 LA RECOMPENSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d2e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD2F - Clanker both sides done (B:3, T:1)
static DialogLine d2f_b[] = {
    { CLANKER,         "\xA1" "DE ESTE LADO YA EST\xC1 MUCHO MEJOR! \xA1" "ME TRAG\xC9 LA RECOMPENSA!" },
    { CLANKER,         "\xA1" "EL DOLOR DE MUELAS SE FUE! \xA1" "GRACIAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d2f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD30 - Clanker tooth removed (B:3, T:1)
static DialogLine d30_b[] = {
    { CLANKER,         "AHH... \xA1" "ESTE DIENTE YA" },
    { CLANKER,         "NO DUELE M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d30_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD31 - Clanker tooth healed (B:4, T:1)
static DialogLine d31_b[] = {
    { CLANKER,         "AHH... \xA1" "ESTE DIENTE YA" },
    { CLANKER,         "NO DUELE M\xC1S!" },
    { CLANKER,         "\xA1" "TODO EST\xC1 BIEN DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d31_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// MUTIE-SNIPPETS (portrait 0x8A)
// ============================================================

// 0xD32 - Mutie-Snippets meet (B:4, T:1)
static DialogLine d32_b[] = {
    { MUTIESNIP,       "\xA1" "SOMOS CANGREJOS" },
    { MUTIESNIP,       "MUTANTES! \xA1" "LA PIEZA DEL" },
    { MUTIESNIP,       "PUZZLE ES NUESTRA! \xA1" "SOLO PELEANDO NOS LA QUITAR\xC1N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d32_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD33 - Mutie-Snippets defeat (B:2, T:1)
static DialogLine d33_b[] = {
    { MUTIESNIP,       "\xA1" "LOS CANGREJOS HEMOS PERDIDO! \xA1" "ESTA PIEZA DEL PUZZLE ES SU RECOMPENSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d33_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GLOOP (portrait 0xAD)
// ============================================================

// 0xD34 - Gloop meet (B:6, T:1)
static DialogLine d34_b[] = {
    { GLOOP,           "GLUB-GLUB! \xA1" "ME LLAMO" },
    { GLOOP,           "GLOOP! \xA1" "ATRAPEN MIS" },
    { GLOOP,           "BURBUJAS CUANDO" },
    { GLOOP,           "LES FALTE EL AIRE!" },
    { GLOOP,           "GLUB-GLUB..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d34_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES CC MOVES
// ============================================================

// 0xF6A - Bottles CC entrance (B:2, T:1)
static DialogLine f6a_b[] = {
    { BOTTLES,         "PUEDEN ENCONTRAR UN SOLO MOVIMIENTO NUEVO EN ESTE MUNDO. \xA1" "PERO EST\xC1 MUY BIEN ESCONDIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD35 - Wonderwing learn (B:11, T:4)
static DialogLine d35_b[] = {
    { BOTTLES,         "\xA1" "CON ESTE MOVIMIENTO LAS ALAS DE KAZOOIE TE PROTEGER\xC1N COMO UN ESCUDO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "\xA1" "CLARO! MANT\xC9N EL" },
    { BOTTLES,         "GATILLO Z Y PULSA EL" },
    { BOTTLES,         "BOT\xD3N C DERECHO." },
    { BOTTLES,         "MANT\xC9N EL GATILLO" },
    { BOTTLES,         "PULSADO. PERO USA" },
    { BOTTLES,         "ESTE MOVIMIENTO CON CUIDADO, PORQUE CUESTA UNA PLUMA DORADA CADA VEZ. \xA1" "Y SOLO PUEDES CARGAR DIEZ!" },
    { BOTTLES,         "\xA1" "AQU\xCD TIENES CINCO DE ESTAS VALIOSAS PLUMAS!" },
    { DIALOG_TRIGGER,  "\x07" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine d35_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "GENIAL... \xBF" "ESO ME HACE" },
    { BANJO,           "INVENCIBLE?" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD36 - Wonderwing refresher (B:5, T:1)
static DialogLine d36_b[] = {
    { BOTTLES,         "USA LAS ALAS MARAVILLA" },
    { BOTTLES,         "PARA HACERTE INVENCIBLE!" },
    { BOTTLES,         "MANT\xC9N EL GATILLO Z" },
    { BOTTLES,         "Y PULSA EL BOT\xD3N C DERECHO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d36_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD37 - All CC moves learned (B:4, T:1)
static DialogLine d37_b[] = {
    { BOTTLES,         "\xA1" "YA HAN APRENDIDO TODOS" },
    { BOTTLES,         "LOS NUEVOS MOVIMIENTOS" },
    { BOTTLES,         "DE ESTE MUNDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d37_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef cc_defs[] = {
    // Clanker
    DIALOG(0xD2B, d2b_b, d2b_t),
    DIALOG(0xD2C, d2c_b, d2c_t),
    DIALOG(0xD2D, d2d_b, d2d_t),
    DIALOG(0xD2E, d2e_b, d2e_t),
    DIALOG(0xD2F, d2f_b, d2f_t),
    DIALOG(0xD30, d30_b, d30_t),
    DIALOG(0xD31, d31_b, d31_t),
    // Mutie-Snippets
    DIALOG(0xD32, d32_b, d32_t),
    DIALOG(0xD33, d33_b, d33_t),
    // Gloop
    DIALOG(0xD34, d34_b, d34_t),
    // Bottles CC
    DIALOG(0xF6A, f6a_b, f6a_t),
    DIALOG(0xD35, d35_b, d35_t),
    DIALOG(0xD36, d36_b, d36_t),
    DIALOG(0xD37, d37_b, d37_t),
};

DialogDefTable cc_table = {
    cc_defs,
    sizeof(cc_defs) / sizeof(cc_defs[0])
};
