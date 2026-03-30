#include "translation.h"

/*
 * Rusty Bucket Bay (World 8) - RBB
 * Portraits: 0xB2=Snorkel, 0xC2=Boss Boom Box, 0xB5=Grunty
 * Faithful to German structure
 */

#define SNORKEL   0xB2
#define BOSS_BOOM 0xC2
#define GRUNTY_P  0xB5

// ============================================================
// SNORKEL - Trapped dolphin (portrait 0xB2)
// ============================================================

// 0xB9B - Snorkel meet/trapped (B:2 T:1)
static DialogLine b9b_b[] = {
    { SNORKEL,         "\xA1" "SOCORRO! \xA1" "ESTOY ATRAPADO! \xA1" "LIBEREN A SNORKEL DE ESTA COSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b9b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB9C - Snorkel freed (B:4 T:1)
static DialogLine b9c_b[] = {
    { SNORKEL,         "\xA1" "GRACIAS, AMIGOS! TOMEN," },
    { SNORKEL,         "\xA1" "ENCONTR\xC9 ESTO! \xA1" "ES" },
    { SNORKEL,         "SUYO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b9c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOSS BOOM BOX (portrait 0xC2)
// ============================================================

// 0xB9E - Boss Boom Box meet (B:8 T:1)
static DialogLine b9e_b[] = {
    { BOSS_BOOM,       "\xBF" "QUI\xC9N SE ATREVE A" },
    { BOSS_BOOM,       "MOLESTARME? \xA1" "SE LES" },
    { BOSS_BOOM,       "VAN A QUITAR LAS GANAS!" },
    { DIALOG_TRIGGER,  "\x01" },
    { BOSS_BOOM,       "\xA1" "LA PIEZA DEL PUZZLE" },
    { BOSS_BOOM,       "EST\xC1 BIEN ESCONDIDA," },
    { BOSS_BOOM,       "NUNCA LA ENCONTRAR\xC1N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b9e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB9F - Boss Boom Box defeated (B:5 T:1)
static DialogLine b9f_b[] = {
    { BOSS_BOOM,       "\xA1" "ARRG! \xA1" "ME HAN PARTIDO" },
    { BOSS_BOOM,       "EN DOS! \xA1" "AHORA S\xCD" },
    { BOSS_BOOM,       "PUEDEN QUEDARSE CON" },
    { BOSS_BOOM,       "LA PIEZA DEL PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b9f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GRUNTY RBB TAUNTS
// ============================================================

// 0xB9D - Grunty machines restart (B:3 T:1)
static DialogLine b9d_b[] = {
    { GRUNTY_P,        "\xBF" "PENSABAN QUE ME DERROTAR\xCD" "AN?" },
    { GRUNTY_P,        "\xA1" "LAS M\xC1QUINAS ARRANCAN DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b9d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xBA0 - Grunty red hot ovens (B:3 T:1)
static DialogLine ba0_b[] = {
    { GRUNTY_P,        "\xA1" "OSO TONTO, VAS A LLORAR," },
    { GRUNTY_P,        "CUANDO LAS PLANCHAS CALIENTES TE QUEMEN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ba0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xBA1 - Grunty water swim (B:3 T:1)
static DialogLine ba1_b[] = {
    { GRUNTY_P,        "SI TE METES EN ESTA SALSA," },
    { GRUNTY_P,        "\xA1" "PERDER\xC1S EL AIRE MUY R\xC1PIDO! \xA1" "QU\xC9 BIEN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ba1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xBA2 - Grunty water dive (B:3 T:1)
static DialogLine ba2_b[] = {
    { GRUNTY_P,        "\xA1" "EN ESTE CALDO NECESITAS DOBLE DE AIRE," },
    { GRUNTY_P,        "NOS VEMOS EN LA TUMBA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ba2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xBA3 - Grunty oily scum (B:4 T:1)
static DialogLine ba3_b[] = {
    { GRUNTY_P,        "\xA1" "MI MUGRE ACEITOSA" },
    { GRUNTY_P,        "TE HAR\xC1 VOMITAR," },
    { GRUNTY_P,        "MEJOR CONS\xCDGUETE UN CUBO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ba3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef rbb_defs[] = {
    // Snorkel
    DIALOG(0xB9B, b9b_b, b9b_t),
    DIALOG(0xB9C, b9c_b, b9c_t),
    // Boss Boom Box
    DIALOG(0xB9E, b9e_b, b9e_t),
    DIALOG(0xB9F, b9f_b, b9f_t),
    // Grunty RBB
    DIALOG(0xB9D, b9d_b, b9d_t),
    DIALOG(0xBA0, ba0_b, ba0_t),
    DIALOG(0xBA1, ba1_b, ba1_t),
    DIALOG(0xBA2, ba2_b, ba2_t),
    DIALOG(0xBA3, ba3_b, ba3_t),
};

DialogDefTable rbb_table = {
    rbb_defs,
    sizeof(rbb_defs) / sizeof(rbb_defs[0])
};
