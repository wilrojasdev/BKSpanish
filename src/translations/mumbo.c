#include "translation.h"

/*
 * Mumbo Generic Translations
 * These are used across all worlds for Mumbo's hut interactions.
 * Mumbo speaks in broken Spanish (same as his broken English in the original).
 */

// 0xD8F - Mumbo first meet
static DialogLine d8f_b[] = {
    { MUMBO,   "YO MUMBO, MEJOR" },
    { MUMBO,   "CHAM\xC1N EN TODO JUEGO!" },
    { MUMBO,   "MUMBO PODER AYUDAR" },
    { MUMBO,   "OSO Y P\xC1JARO RARO." },
    { DIALOG_COND_MINIMIZE, "" },
    { MUMBO,   "BRUJA MALVADA ESCONDER" },
    { MUMBO,   "CR\xC1NEOS PLATEADOS DE MUMBO." },
    { MUMBO,   "ENCONTRAR CR\xC1NEOS Y MUMBO AYUDAR MUCHO BIEN!" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine d8f_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE, "\xA1" "CUIDADO CON ESTE RARO!" },
    { KAZOOIE, "\xA1" "CURANDERO DE PACOTILLA!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD90 - Mumbo magic already paid for (free retransformation)
static DialogLine d90_b[] = {
    { MUMBO,   "MUMBO HACER TRANSFORMACI\xD3N GRATIS! \xA1" "VOLVER CUANDO TERMINAR!" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine d90_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD91 - Mumbo transformation: Termite (first transform ever)
static DialogLine d91_b[] = {
    { MUMBO,   "AHHH, BUEN HECHIZO" },
    { MUMBO,   "PARA PRIMERA VEZ." },
    { MUMBO,   "MUMBO NECESITAR M\xC1S" },
    { MUMBO,   "PR\xC1" "CTICA! \xA1" "COSA TAN GRACIOSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d91_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD92 - Mumbo transformation: Pumpkin
static DialogLine d92_b[] = {
    { MUMBO,   "MMM... \xA1" "MUMBO HACER BUEN HECHIZO CALABAZA! \xA1" "BUENA PARA SOPA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d92_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD93 - Mumbo transformation: Walrus
static DialogLine d93_b[] = {
    { MUMBO,   "BANJO AHORA MUY GORDO" },
    { MUMBO,   "\xA1" "Y CON DIENTES ENORMES!" },
    { MUMBO,   "JOJOJO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d93_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD94 - Mumbo transformation: Crocodile
static DialogLine d94_b[] = {
    { MUMBO,   "T\xDA ESPERAR, YO NECESITAR" },
    { MUMBO,   "\xA1" "BOLSO NUEVO!!! MUMBO SOLO HACER PEQUE\xD1" "A BROMA. JIJIJI..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d94_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD95 - Mumbo transformation: Bee
static DialogLine d95_b[] = {
    { MUMBO,   "\xA1" "MUMBO HACER BUEN HECHIZO!" },
    { MUMBO,   "\xA1" "ABEJA MEJOR HECHIZO EN MUCHO TIEMPO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d95_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDAA - Mumbo has enough tokens
static DialogLine daa_b[] = {
    { MUMBO,   "AHH... BANJO TENER MUCHOS CR\xC1NEOS. PARARSE EN CALAVERA Y PULSAR B. \xA1" "MUMBO HACER HECHIZO COMO COPPERFIELD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine daa_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDAB - Mumbo not enough tokens
static DialogLine dab_b[] = {
    { MUMBO,   "\xA1" "BANJO NO TENER SUFICIENTES CR\xC1NEOS DE MUMBO! \xA1" "MIRAR CARTEL! \xA1" "MUMBO QUERER M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine dab_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDAC - Mumbo fail to buy (not on skull pad)
static DialogLine dac_b[] = {
    { MUMBO,   "\xA1" "T\xDA NO CONSEGUIR MAGIA! \xA1" "HECHIZO MUY CARO! \xA1" "MIRAR CARTEL, QUERER M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine dac_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDB0 - Mumbo mistake 0
static DialogLine db0_b[] = {
    { MUMBO,   "\xA1" "OH, OH! \xA1" "HECHIZO SALIR" },
    { MUMBO,   "MAL! \xBFT\xDA LAVAR" },
    { MUMBO,   "CALZONES DE MUMBO?" },
    { MUMBO,   "JAJAJA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDB1 - Mumbo mistake 1
static DialogLine db1_b[] = {
    { MUMBO,   "\xA1" "OSO GORDO NO MOVERSE," },
    { MUMBO,   "O HECHIZO SIEMPRE" },
    { MUMBO,   "SALIR MAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDB2 - Mumbo mistake 2
static DialogLine db2_b[] = {
    { MUMBO,   "MUMBO NECESITAR NUEVA" },
    { MUMBO,   "VARITA M\xC1GICA. VIEJA" },
    { MUMBO,   "VARITA SER DE MERCADILLO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDB6 - Mumbo WishyWashy (bad transformation)
static DialogLine db6_b[] = {
    { MUMBO,   "\xA1" "ESO NO SER BUEN HECHIZO! LAVADORA NO SER TAN BUENA COMO OSO. T\xDA NO QUEJARSE CON MUMBO SI NO IR BIEN..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db6_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF5B - Mumbo magic getting weak (full message)
static DialogLine f5b_b[] = {
    { MUMBO,   "MAGIA DE MUMBO CASI" },
    { MUMBO,   "ACABARSE. \xA1" "OSO VOLVER O HECHIZO ROMPERSE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f5b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF5C - Mumbo magic getting weak (abbreviated)
static DialogLine f5c_b[] = {
    { MUMBO,   "MAGIA DE MUMBO CASI ACABARSE..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f5c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF5D - Mumbo magic run out (full message)
static DialogLine f5d_b[] = {
    { MUMBO,   "HECHIZO TERMINARSE, BANJO" },
    { MUMBO,   "SER OSO OTRA VEZ..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f5d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF5E - Mumbo magic run out (abbreviated)
static DialogLine f5e_b[] = {
    { MUMBO,   "HECHIZO ACABARSE, ACABARSE..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f5e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef mumbo_defs[] = {
    DIALOG(0xD8F, d8f_b, d8f_t),
    DIALOG(0xD90, d90_b, d90_t),
    DIALOG(0xD91, d91_b, d91_t),
    DIALOG(0xD92, d92_b, d92_t),
    DIALOG(0xD93, d93_b, d93_t),
    DIALOG(0xD94, d94_b, d94_t),
    DIALOG(0xD95, d95_b, d95_t),
    DIALOG(0xDAA, daa_b, daa_t),
    DIALOG(0xDAB, dab_b, dab_t),
    DIALOG(0xDAC, dac_b, dac_t),
    DIALOG(0xDB0, db0_b, db0_t),
    DIALOG(0xDB1, db1_b, db1_t),
    DIALOG(0xDB2, db2_b, db2_t),
    DIALOG(0xDB6, db6_b, db6_t),
    DIALOG(0xF5B, f5b_b, f5b_t),
    DIALOG(0xF5C, f5c_b, f5c_t),
    DIALOG(0xF5D, f5d_b, f5d_t),
    DIALOG(0xF5E, f5e_b, f5e_t),
};

DialogDefTable mumbo_table = {
    mumbo_defs,
    sizeof(mumbo_defs) / sizeof(mumbo_defs[0])
};
