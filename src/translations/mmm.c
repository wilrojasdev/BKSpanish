#include "translation.h"

/*
 * Mad Monster Mansion (World 7) - MMM
 * Portraits: 0xB9=Motzhand, 0x93=Napper, 0xBA=Tumblar, 0xCE=Loggo
 * Faithful to German structure
 */

#define MOTZHAND  0xB9
#define NAPPER    0x93
#define TUMBLAR   0xBA
#define LOGGO     0xCE
#define GRUNTY_P  0xB5

// ============================================================
// MOTZHAND - Organ hand (portrait 0xB9)
// ============================================================

// 0xAD3 - Motzhand meet/organ challenge (B:5 T:1)
static DialogLine ad3_b[] = {
    { MOTZHAND,        "\xA1" "MOTZHAND TOCA EN" },
    { MOTZHAND,        "SU \xD3RGANO!" },
    { MOTZHAND,        "\xBF" "PUEDES RECORDAR" },
    { MOTZHAND,        "LAS TECLAS?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAD4 - Motzhand round 2 (B:5 T:1)
static DialogLine ad4_b[] = {
    { MOTZHAND,        "\xA1" "TIENES TALENTO! PERO" },
    { MOTZHAND,        "AHORA MIRA BIEN! \xA1" "REPITE" },
    { MOTZHAND,        "LO QUE HAGO, NO ES" },
    { MOTZHAND,        "DIF\xCD" "CIL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad4_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAD5 - Motzhand complete (B:4 T:1)
static DialogLine ad5_b[] = {
    { MOTZHAND,        "\xA1" "ESO ESTUVO MUY BIEN," },
    { MOTZHAND,        "REALMENTE FINO! \xA1" "TOMA" },
    { MOTZHAND,        "LA PIEZA DEL PUZZLE Y GU\xC1RDALA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad5_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAD6 - Motzhand try again (B:4 T:1)
static DialogLine ad6_b[] = {
    { MOTZHAND,        "SI QUIERES TENER" },
    { MOTZHAND,        "\xC9XITO, \xA1" "TIENES QUE" },
    { MOTZHAND,        "TOCAR CONMIGO OTRA VEZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad6_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xADD - Motzhand too slow (B:3 T:1)
static DialogLine add_b[] = {
    { MOTZHAND,        "\xA1" "ME PARECEN BASTANTE LENTOS!" },
    { MOTZHAND,        "\xA1" "MEJOR EMPIECEN DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine add_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// NAPPER - Sleeping ghost (portrait 0x93)
// ============================================================

// 0xAD7 - Napper wake up (B:3 T:1)
static DialogLine ad7_b[] = {
    { NAPPER,          "\xBF" "QUI\xC9N OSA DESPERTAR A NAPPER?" },
    { NAPPER,          "\xBF" "D\xD3NDE SE HABR\xC1 METIDO ESE GRANUJA?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad7_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAD8 - Napper guards jiggy (B:4 T:1)
static DialogLine ad8_b[] = {
    { NAPPER,          "\xA1" "MIENTRAS EST\xC9 DESPIERTO," },
    { NAPPER,          "NO HAY PIEZA DEL" },
    { NAPPER,          "PUZZLE PARA TI!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad8_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAD9 - Napper defeated + Grunty response (B:5 T:1)
static DialogLine ad9_b[] = {
    { NAPPER,          "\xA1" "AY, LA BRUJA VA A" },
    { NAPPER,          "MALDECIR! \xA1" "SU ORO TENDR\xC1 QUE BUSCAR!" },
    { GRUNTY_P,        "\xA1" "PRONTO ME VENGAR\xC9," },
    { GRUNTY_P,        "Y COMO PALILLOS LOS ROMPER\xC9!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ad9_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TUMBLAR - Magic gravestone (portrait 0xBA)
// ============================================================

// 0xADA - Tumblar challenge (B:3 T:1)
static DialogLine ada_b[] = {
    { TUMBLAR,         "\xA1" "SALUDOS, PELUDO!" },
    { TUMBLAR,         "\xA1" "RESUELVE EL ACERTIJO M\xC1GICO Y LA PIEZA DEL PUZZLE SER\xC1 TUYA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ada_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xADB - Tumblar complete (B:4 T:1)
static DialogLine adb_b[] = {
    { TUMBLAR,         "\xA1" "EST\xC1 HECHO! \xA1" "LA PIEZA" },
    { TUMBLAR,         "DEL PUZZLE ES TUYA!" },
    { TUMBLAR,         "ESTOY LIBERADO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine adb_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GRUNTY MMM TAUNTS
// ============================================================

// 0xADC - Grunty MMM taunt (B:3 T:1)
static DialogLine adc_b[] = {
    { GRUNTY_P,        "\xA1" "ESTE INVITADO NO DESEADO" },
    { GRUNTY_P,        "PRONTO SALTAR\xC1 COMO GORRI\xD3N DE RAMA EN RAMA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine adc_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// LOGGO - Toilet (portrait 0xCE)
// ============================================================

// 0xADE - Loggo as bear (B:2 T:1)
static DialogLine ade_b[] = {
    { LOGGO,           "GLUGLUG... \xA1" "EL OSO ES MUY GORDO, NO CABE EN LOGGO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ade_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xADF - Enter Loggo (B:2 T:1)
static DialogLine adf_b[] = {
    { LOGGO,           "\xA1" "DIVERTIRSE, PEQUE\xD1O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine adf_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAE0 - Exit Loggo / Grunty comment (B:3 T:1)
static DialogLine ae0_b[] = {
    { GRUNTY_P,        "QUIEN SE METE EN EL INODORO," },
    { GRUNTY_P,        "\xA1" "TAMBI\xC9N FUMA CALCETINES VIEJOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ae0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAE1 - Grunty thorns (B:3 T:1)
static DialogLine ae1_b[] = {
    { GRUNTY_P,        "ESTAS ESPINAS ME ENCANTAN," },
    { GRUNTY_P,        "\xA1" "LES HACEN LA VIDA IMPOSIBLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ae1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xAE2 - Grunty church door miss (B:3 T:1)
static DialogLine ae2_b[] = {
    { GRUNTY_P,        "\xA1" "EL OSO COBARDE SE RINDE," },
    { GRUNTY_P,        "NUNCA LLEGAR\xC1 A ESA PUERTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ae2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef mmm_defs[] = {
    // Motzhand
    DIALOG(0xAD3, ad3_b, ad3_t),
    DIALOG(0xAD4, ad4_b, ad4_t),
    DIALOG(0xAD5, ad5_b, ad5_t),
    DIALOG(0xAD6, ad6_b, ad6_t),
    DIALOG(0xADD, add_b, add_t),
    // Napper
    DIALOG(0xAD7, ad7_b, ad7_t),
    DIALOG(0xAD8, ad8_b, ad8_t),
    DIALOG(0xAD9, ad9_b, ad9_t),
    // Tumblar
    DIALOG(0xADA, ada_b, ada_t),
    DIALOG(0xADB, adb_b, adb_t),
    // Grunty MMM
    DIALOG(0xADC, adc_b, adc_t),
    // Loggo
    DIALOG(0xADE, ade_b, ade_t),
    DIALOG(0xADF, adf_b, adf_t),
    DIALOG(0xAE0, ae0_b, ae0_t),
    DIALOG(0xAE1, ae1_b, ae1_t),
    DIALOG(0xAE2, ae2_b, ae2_t),
};

DialogDefTable mmm_table = {
    mmm_defs,
    sizeof(mmm_defs) / sizeof(mmm_defs[0])
};
