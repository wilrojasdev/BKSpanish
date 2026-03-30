#include "translation.h"

/*
 * Treasure Trove Cove (World 2) - TTC
 * Portraits: 0x87=Blubber, 0x88=Nipper, 0x9F=Blubber treasure,
 *   0xAC=Leaky, 0xAF=Snacker, 0xB5=Grunty, 0xCD=Lockup, 0xDB=Sandcastle
 */

#define BLUBBER   0x87
#define NIPPER    0x88
#define BLUBBER_T 0x9F
#define LEAKY     0xAC
#define SNACKER   0xAF
#define LOCKUP    0xCD
#define SANDCASTLE 0xDB
#define GRUNTY_P   0xB5

// ============================================================
// CAPTAIN BLUBBER
// ============================================================

// 0xA0B - Blubber meet (4B, 4T)
static DialogLine a0b_b[] = {
    { BLUBBER,         "\xA1" "AHOY, TERRATENIENTES! \xA1" "SOY EL CAPIT\xC1N BLUBBER! \xA1" "PERD\xCD MI TESORO DE ORO CUANDO MI BARCO ENCALL\xD3 EN ESTE BANCO DE ARENA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BLUBBER,         "GRRRR... \xA1" "YO LO HAR\xCD" "A, PERO NO S\xC9 NADAR! \xBF" "QUIEREN AYUDAR A UN VIEJO LOBO DE MAR?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a0b_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xA1" "PUES ENTONCES B\xDA" "SCALO, BURBUJITAS!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xA1" "CLARO, ENCONTRAREMOS EL TESORO!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA0C - Blubber first treasure half (2B, 1T)
static DialogLine a0c_b[] = {
    { BLUBBER,         "\xA1" "GENIAL, ESA ES LA PRIMERA MITAD DE MI TESORO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a0c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA0D - Blubber treasure complete (4B, 1T)
static DialogLine a0d_b[] = {
    { BLUBBER,         "\xA1" "MI TESORO! \xA1" "PODR\xCD" "A LLORAR! \xA1" "MUCHAS GRACIAS, MIS PEQUE\xD1" "OS! \xA1" "TOMEN ESTO COMO RECOMPENSA!" },
    { DIALOG_TRIGGER,  "\x01" },
    { BLUBBER,         "\xA1" "HURRA, SOY RICO DE NUEVO... RICO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a0d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA21 - Blubber treasure meet item (4B, 1T) portrait 0x9F
static DialogLine a21_b[] = {
    { BLUBBER_T,       "\xA1" "AHOY, AMIGOS! \xA1" "SOY" },
    { BLUBBER_T,       "EL LEGENDARIO TESORO" },
    { BLUBBER_T,       "DEL CAPIT\xC1N BLUBBER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a21_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA2A - Blubber jiggy collected (3B, 1T)
static DialogLine a2a_b[] = {
    { BLUBBER,         "\xA1" "HURRA, SOY RICO DE" },
    { BLUBBER,         "NUEVO... RICO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a2a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// NIPPER THE CRAB
// ============================================================

// 0xA0E - Nipper meet at beach (7B, 1T)
static DialogLine a0e_b[] = {
    { NIPPER,          "\xA1" "ESTA ES LA PLAYA DE NIPPER!" },
    { NIPPER,          "\xA1" "DE AQU\xCD NO PASAR\xC1N!" },
    { DIALOG_COND_MINIMIZE, "" },
    { NIPPER,          "\xA1" "A ESTE P\xC1JARO INSOLENTE" },
    { NIPPER,          "HABR\xCD" "A QUE CORTARLE" },
    { NIPPER,          "LAS ALAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a0e_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xA1" "YA VEREMOS, CEREBRO DE CRUSTACEO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xBF" "AH S\xCD? \xA1" "INTENTA SI" },
    { 0x82,            "TE ATREVES!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA0F - Nipper eggs useless (4B, 1T)
static DialogLine a0f_b[] = {
    { NIPPER,          "\xA1" "ESOS HUEVOS RID\xCD" "CULOS" },
    { NIPPER,          "NO PUEDEN CON MI" },
    { NIPPER,          "CAPARAZ\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a0f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA10 - Nipper hit (4B, 1T)
static DialogLine a10_b[] = {
    { NIPPER,          "\xA1" "AUCH! \xA1" "ESO DOL\xCD" "O!" },
    { NIPPER,          "\xA1" "AHORA S\xCD QUE ESTOY" },
    { NIPPER,          "FURIOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a10_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA11 - Nipper attacks (2B, 1T)
static DialogLine a11_b[] = {
    { NIPPER,          "\xA1" "TOMA ESA, PAJARRACO DESCARADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a11_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// LOCKUP (TREASURE CHESTS)
// ============================================================

// 0xA12 - Lockup challenge (3B, 1T)
static DialogLine a12_b[] = {
    { LOCKUP,          "\xA1" "OYE, BOLA DE PELO!" },
    { LOCKUP,          "\xA1" "RESUELVE MI ACERTIJO Y GANAR\xC1S UN PREMIO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a12_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA13 - Lockup prize behind bars (3B, 1T)
static DialogLine a13_b[] = {
    { LOCKUP,          "DETR\xC1S DE LA REJA ESPERA" },
    { LOCKUP,          "EL PREMIO, \xA1" "PERO PRIMERO VOY A DARTE UNA PALIZA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a13_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// OTHER NPCs
// ============================================================

// 0xA14 - Blubber eats gold (2B, 1T) portrait 0xAA
static DialogLine a14_b[] = {
    { 0xAA,            "OHH... \xA1" "DELICIOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a14_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA15 - Sandcastle warning (4B, 1T)
static DialogLine a15_b[] = {
    { SANDCASTLE,      "\xA1" "ESTO ES PROPIEDAD DE" },
    { SANDCASTLE,      "GRUNTILDA! \xA1" "S\xCDRVETE," },
    { SANDCASTLE,      "SI TE ATREVES..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a15_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA16 - Grunty TTC taunt (3B, 1T)
static DialogLine a16_b[] = {
    { GRUNTY_P,        "ESE TESORO ERA PARA M\xCD," },
    { GRUNTY_P,        "\xA1" "AHORA VER\xC1S LO QUE TE ESPERA AQU\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a16_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA17 - Nipper ticklish (3B, 1T) portrait 0xAB
static DialogLine a17_b[] = {
    { 0xAB,            "\xA1\xC1" "BRELO CON CUIDADO! \xA1" "SOY" },
    { 0xAB,            "MUY COSQUILLOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a17_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA18 - Follow arrows (2B, 1T)
static DialogLine a18_b[] = {
    { 0xAB,            "\xA1" "SIGUE LAS FLECHAS SI QUIERES EL ORO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a18_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA19 - Nipper hiding (3B, 1T)
static DialogLine a19_b[] = {
    { 0xAB,            "\xA1" "JA! \xA1" "NUNCA JAM\xC1S ME" },
    { 0xAB,            "ENCONTRAR\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a19_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA1A - Leaky bucket meet (4B, 1T)
static DialogLine a1a_b[] = {
    { LEAKY,           "\xA1" "ESTOY GOTEANDO! \xBF" "PUEDEN" },
    { LEAKY,           "EL OSO Y EL P\xC1JARO" },
    { LEAKY,           "TAPARME CON UN TAP\xD3N?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA28 - Leaky done (4B, 1T)
static DialogLine a28_b[] = {
    { LEAKY,           "\xA1" "EL AGUJERO EST\xC1 TAPADO!" },
    { LEAKY,           "VOY A VACIAR EL AGUA" },
    { LEAKY,           "PARA EL OSO." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a28_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// SNACKER THE SHARK
// ============================================================

// 0xA1B - Snacker spots prey (4B, 1T)
static DialogLine a1b_b[] = {
    { SNACKER,         "AH\xCD NADA MI PLATO" },
    { SNACKER,         "FAVORITO. \xA1" "POR FAVOR," },
    { SNACKER,         "QU\xC9" "DATE EN EL AGUA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA1C - Snacker dessert (3B, 1T)
static DialogLine a1c_b[] = {
    { SNACKER,         "\xA1" "ESTUPENDO! \xA1" "TAMBI\xC9N" },
    { SNACKER,         "HAY POSTRE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA1D - Snacker bath (2B, 1T)
static DialogLine a1d_b[] = {
    { SNACKER,         "AHHH... \xA1" "OSO Y AVESTRUZ BA\xD1\xC1NDOSE! \xA1" "LA RECETA SE LA MANDO AL CHEF!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA1E - Snacker new food (3B, 1T)
static DialogLine a1e_b[] = {
    { SNACKER,         "\xBF" "COMIDA NUEVA A LA VISTA?" },
    { SNACKER,         "\xA1" "YA VOY!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA29 - Snacker yum (2B, 1T)
static DialogLine a29_b[] = {
    { SNACKER,         "MMM... \xA1" "DELICIOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a29_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES TTC MOVES
// ============================================================

// 0xF69 - Bottles TTC entrance (5B, 1T)
static DialogLine f69_b[] = {
    { BOTTLES,         "\xA1" "AHOY! \xA1" "BIENVENIDOS A" },
    { BOTTLES,         "TREASURE TROVE COVE." },
    { BOTTLES,         "HAY DOS NUEVOS" },
    { BOTTLES,         "MOVIMIENTOS AQU\xCD." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f69_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA1F - Shock Jump learn (9B, 3T)
static DialogLine a1f_b[] = {
    { BOTTLES,         "\xA1" "EL SUPERSALTO LOS LLEVAR\xC1 A NUEVAS ALTURAS!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "NO TE PREOCUPES, EL" },
    { BOTTLES,         "PAJARRACO PUEDE" },
    { BOTTLES,         "HACERLO. P\xC1RATE EN UNA" },
    { BOTTLES,         "PLATAFORMA VERDE Y" },
    { BOTTLES,         "MANT\xC9N PULSADO EL" },
    { BOTTLES,         "BOT\xD3N A." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine a1f_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xBF" "KAZOOIE SE ENCARGAR\xC1 DE ESO?" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA20 - Fly learn (15B, 3T)
static DialogLine a20_b[] = {
    { BOTTLES,         "\xA1" "OYE, PATAS DE POLLO!" },
    { BOTTLES,         "\xA1" "ESTA ES TU OPORTUNIDAD!" },
    { BOTTLES,         "\xA1" "AHORA APRENDER\xC1S" },
    { BOTTLES,         "A VOLAR!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "ES TAN F\xC1" "CIL QUE HASTA" },
    { BOTTLES,         "T\xDA, CEREBRO DE P\xC1JARO," },
    { BOTTLES,         "PODR\xC1S. P\xC1RATE EN UNA" },
    { BOTTLES,         "PLATAFORMA AZUL DE VUELO Y PULSA EL BOT\xD3N A." },
    { BOTTLES,         "AQU\xCD TIENES 25 PLUMAS" },
    { BOTTLES,         "ROJAS QUE TE AYUDAR\xC1N" },
    { BOTTLES,         "A VOLAR." },
    { DIALOG_TRIGGER,  "\x06" },
    { BOTTLES,         "\xA1" "HASTA PRONTO!" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine a20_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1" "POR FIN! \xA1" "YA ERA HORA, AMIGO DE LOS GUSANOS!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA22 - Fly refresher (4B, 1T)
static DialogLine a22_b[] = {
    { BOTTLES,         "KAZOOIE PUEDE VOLAR" },
    { BOTTLES,         "SI SE PARA EN UNA" },
    { BOTTLES,         "PLATAFORMA AZUL DE VUELO Y PULSA EL BOT\xD3N A!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a22_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA23 - Shock Jump refresher (2B, 1T)
static DialogLine a23_b[] = {
    { BOTTLES,         "CON EL SUPERSALTO PUEDES SALTAR INCRE\xCD" "BLEMENTE ALTO. P\xC1RATE EN UNA PLATAFORMA VERDE, PULSA A Y MANT\xC9N EL BOT\xD3N PULSADO." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a23_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA26 - Need red feathers to fly (9B, 1T)
static DialogLine a26_b[] = {
    { BOTTLES,         "PARA VOLAR M\xC1S ALTO" },
    { BOTTLES,         "NECESITAS USAR LAS" },
    { BOTTLES,         "PLUMAS ROJAS." },
    { BOTTLES,         "PULSA EL BOT\xD3N A Y" },
    { BOTTLES,         "NO OLVIDES QUE" },
    { BOTTLES,         "KAZOOIE SOLO PUEDE" },
    { BOTTLES,         "LLEVAR 50 PLUMAS" },
    { BOTTLES,         "A LA VEZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a26_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA27 - All TTC moves learned (3B, 1T)
static DialogLine a27_b[] = {
    { BOTTLES,         "\xA1" "MARAVILLOSO! \xA1" "ESOS ERAN" },
    { BOTTLES,         "TODOS LOS MOVIMIENTOS QUE POD\xCD" "AN APRENDER AQU\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a27_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef ttc_defs[] = {
    // Blubber
    DIALOG(0xA0B, a0b_b, a0b_t),
    DIALOG(0xA0C, a0c_b, a0c_t),
    DIALOG(0xA0D, a0d_b, a0d_t),
    DIALOG(0xA21, a21_b, a21_t),
    DIALOG(0xA2A, a2a_b, a2a_t),
    // Nipper
    DIALOG(0xA0E, a0e_b, a0e_t),
    DIALOG(0xA0F, a0f_b, a0f_t),
    DIALOG(0xA10, a10_b, a10_t),
    DIALOG(0xA11, a11_b, a11_t),
    // Lockup
    DIALOG(0xA12, a12_b, a12_t),
    DIALOG(0xA13, a13_b, a13_t),
    // Other NPCs
    DIALOG(0xA14, a14_b, a14_t),
    DIALOG(0xA15, a15_b, a15_t),
    DIALOG(0xA16, a16_b, a16_t),
    DIALOG(0xA17, a17_b, a17_t),
    DIALOG(0xA18, a18_b, a18_t),
    DIALOG(0xA19, a19_b, a19_t),
    DIALOG(0xA1A, a1a_b, a1a_t),
    DIALOG(0xA28, a28_b, a28_t),
    // Snacker
    DIALOG(0xA1B, a1b_b, a1b_t),
    DIALOG(0xA1C, a1c_b, a1c_t),
    DIALOG(0xA1D, a1d_b, a1d_t),
    DIALOG(0xA1E, a1e_b, a1e_t),
    DIALOG(0xA29, a29_b, a29_t),
    // Bottles TTC
    DIALOG(0xF69, f69_b, f69_t),
    DIALOG(0xA1F, a1f_b, a1f_t),
    DIALOG(0xA20, a20_b, a20_t),
    DIALOG(0xA22, a22_b, a22_t),
    DIALOG(0xA23, a23_b, a23_t),
    DIALOG(0xA26, a26_b, a26_t),
    DIALOG(0xA27, a27_b, a27_t),
};

DialogDefTable ttc_table = {
    ttc_defs,
    sizeof(ttc_defs) / sizeof(ttc_defs[0])
};
