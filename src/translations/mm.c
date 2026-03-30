#include "translation.h"

/*
 * Mumbo's Mountain (World 1) Translations
 * NPCs: Conga, Chimpy, Ticker, Juju
 * Bottles: Beak Buster, Egg Firing, Talon Trot
 */

#define CONGA   0x86
#define CHIMPY  0x85
#define TICKER  0xA8
#define JUJU_P  0xA9
#define ORANGE  0x9E

// ============================================================
// CONGA (portrait 0x86) - Gorilla bully, third-person speech
// ============================================================

// 0xB37 - Conga safe up here (on tree)
static DialogLine b37_b[] = {
    { CONGA,           "\xA1" "JA! \xA1" "CONGA ESTAR SEGURO AQU\xCD ARRIBA! \xA1" "OSO NO PODER ATRAPAR A CONGA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b37_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB38 - Conga defeated
static DialogLine b38_b[] = {
    { CONGA,           "\xA1" "UGH! \xA1" "OSO VENCER A CONGA!" },
    { CONGA,           "\xA1" "CONGA DAR PREMIO A OSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b38_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB39 - Conga hit by egg
static DialogLine b39_b[] = {
    { CONGA,           "\xA1" "ARRRRR! \xA1" "HUEVO DOLER A CONGA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b39_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB3A - Conga hits player
static DialogLine b3a_b[] = {
    { CONGA,           "UGH... UGH... UGH..." },
    { CONGA,           "\xA1" "CONGA TENER BUENA PUNTER\xCD" "A!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB3B - Conga orange pad jiggy
static DialogLine b3b_b[] = {
    { CONGA,           "GRRRR... \xA1" "OSO LISTO!" },
    { CONGA,           "\xA1" "ENCONTRAR ORO DE CONGA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB3C - Conga meet (first encounter)
static DialogLine b3c_b[] = {
    { CONGA,           "GRRRR... \xA1" "ESTE SER \xC1RBOL DE CONGA! \xA1" "CONGA LANZAR NARANJAS A OSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB3D - Conga don't touch blocks
static DialogLine b3d_b[] = {
    { CONGA,           "\xA1" "PATAS FUERA DE" },
    { CONGA,           "BLOQUES DE CONGA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB3E - Conga meet as termite
static DialogLine b3e_b[] = {
    { CONGA,           "GRRRR... \xA1" "ESTE SER \xC1RBOL DE CONGA! \xA1" "CONGA APLASTAR TERMITA CON NARANJAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// CHIMPY (portrait 0x85) - Hungry little monkey
// ============================================================

// 0xB3F - Chimpy meet (hungry, wants orange)
static DialogLine b3f_b[] = {
    { CHIMPY,          "\xA1" "CHIMPY TENER HAMBRE! \xA1" "TRAER NARANJA DEL \xC1RBOL DE CONGA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b3f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB40 - Chimpy complete (got orange, gives jiggy)
static DialogLine b40_b[] = {
    { CHIMPY,          "MMMM... \xA1" "CHIMPY ADORAR NARANJAS! \xA1" "CHIMPY AYUDAR A OSO GORDO Y P\xC1JARO GRACIOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b40_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TICKER (portrait 0xA8) - Termite guards
// ============================================================

// 0xB41 - Termite cool shorts
static DialogLine b41_b[] = {
    { TICKER,          "\xA1" "HOLA! \xBF" "D\xD3NDE CONSEGUISTE" },
    { TICKER,          "ESOS SHORTS TAN" },
    { TICKER,          "GENIALES? \xA1" "LOS QUIERO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b41_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB42 - Termite cool backpack
static DialogLine b42_b[] = {
    { TICKER,          "\xBFME DAS TU MOCHILA" },
    { TICKER,          "TAN GENIAL?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b42_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB43 - Termite meet as bear (no bears allowed)
static DialogLine b43_b[] = {
    { TICKER,          "\xA1" "OYE, PEQUE\xD1O! EN LA" },
    { TICKER,          "TORRE DE TICKER" },
    { TICKER,          "\xA1" "NO SE PERMITEN OSOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b43_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// JUJU (portrait 0xA9) - Totem pole
// ============================================================

// 0xB44 - Juju meet
static DialogLine b44_b[] = {
    { JUJU_P,          "\xA1" "SOY JUJU, EL T\xD3TEM DE MUMBO! \xA1" "AL\xCDMENTAME CON ESAS COSAS AZULES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b44_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// OTHER MM ITEMS
// ============================================================

// 0xB45 - Jiggy collect 10 (portrait 0xA3)
static DialogLine b45_b[] = {
    { JIGGY_PORT,      "EN CADA MUNDO HAY DIEZ" },
    { JIGGY_PORT,      "DE NOSOTROS ESCONDIDOS." },
    { JIGGY_PORT,      "\xA1" "LES AYUDAREMOS EN SU" },
    { JIGGY_PORT,      "CAMINO HACIA GRUNTILDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b45_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB46 - Collect orange (Conga angry + orange description)
static DialogLine b46_b[] = {
    { CONGA,           "\xA1" "HEY! \xA1" "ESA SER NARANJA DE CONGA!" },
    { CONGA,           "\xA1\xA1\xA1" "DEVOLVER!!!" },
    { ORANGE,          "\xA1" "LAS NARANJAS SON DELICIOSAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b46_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES MM MOVES
// ============================================================

// 0xB51 - Bottles: How to exit level (6B, 1T)
static DialogLine b51_b[] = {
    { BOTTLES,         "CUANDO QUIERAN SALIR" },
    { BOTTLES,         "DE ESTE MUNDO, VUELVAN" },
    { BOTTLES,         "A LA PLATAFORMA DE" },
    { BOTTLES,         "INICIO Y P\xC1RENSE" },
    { BOTTLES,         "ENCIMA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b51_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF68 - Bottles MM entrance: 3 moves to learn (2B, 1T)
static DialogLine f68_b[] = {
    { BOTTLES,         "\xA1" "HOLA! PUEDEN ENCONTRAR TRES NUEVOS MOVIMIENTOS EN ESTE MUNDO. \xA1" "BUSQUEN MIS TOPERAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f68_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB48 - Beak Buster learn (8B, 3T)
static DialogLine b48_b[] = {
    { BOTTLES,         "YO LLAMO A ESTE MOVIMIENTO" },
    { BOTTLES,         "EL PICOTAZO. \xA1" "SALTEN Y PULSEN EL GATILLO Z PARA QUE KAZOOIE USE SU CABEZOTA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "\xA1" "MEJOR QUE TE VAYAS" },
    { BOTTLES,         "ACOSTUMBRANDO, PAJARRACO!" },
    { BOTTLES,         "ESTE MOVIMIENTO LO" },
    { BOTTLES,         "NECESITAR\xC1N MUCHO." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine b48_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1" "TRAGA! \xA1" "ESO NO ME GUSTA NADA DE NADA!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB49 - Talon Trot learn (13B, 3T)
static DialogLine b49_b[] = {
    { BOTTLES,         "LA CARRERA A CUESTAS" },
    { BOTTLES,         "PERMITE QUE KAZOOIE" },
    { BOTTLES,         "TE CARGUE Y SUBA" },
    { BOTTLES,         "CUESTAS MUY" },
    { BOTTLES,         "EMPINADAS!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "MANT\xC9N EL GATILLO Z Y" },
    { BOTTLES,         "PULSA EL BOT\xD3N C" },
    { BOTTLES,         "IZQUIERDO. MANT\xC9N" },
    { BOTTLES,         "EL GATILLO Z PULSADO" },
    { BOTTLES,         "MIENTRAS KAZOOIE TE" },
    { BOTTLES,         "LLEVE." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine b49_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xA1" "SUENA GENIAL, BOTTLES! \xBF" "C\xD3MO FUNCIONA?" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB4A - Talon Trot refresher (5B, 1T)
static DialogLine b4a_b[] = {
    { BOTTLES,         "PARA QUE KAZOOIE TE" },
    { BOTTLES,         "LLEVE A CUESTAS Y SUBA" },
    { BOTTLES,         "CUESTAS EMPINADAS," },
    { BOTTLES,         "MANT\xC9N EL GATILLO Z Y PULSA EL BOT\xD3N C IZQUIERDO. MANT\xC9N EL GATILLO Z MIENTRAS KAZOOIE CORRA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB4B - Egg firing refresher (5B, 1T)
static DialogLine b4b_b[] = {
    { BOTTLES,         "PARA DISPARAR UN HUEVO" },
    { BOTTLES,         "HACIA ADELANTE, MANT\xC9N" },
    { BOTTLES,         "EL GATILLO Z Y PULSA" },
    { BOTTLES,         "EL BOT\xD3N C SUPERIOR. PARA DISPARAR HACIA ATR\xC1S, PULSA EL BOT\xD3N C INFERIOR. \xA1" "USA EL STICK 3D PARA APUNTAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB4C - Beak Buster refresher (6B, 1T)
static DialogLine b4c_b[] = {
    { BOTTLES,         "LANZA EL PICOTAZO A" },
    { BOTTLES,         "LOS ENEMIGOS SALTANDO" },
    { BOTTLES,         "AL AIRE Y PULSANDO" },
    { BOTTLES,         "EL GATILLO Z." },
    { BOTTLES,         "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB4D - Bottles slippery slopes
static DialogLine b4d_b[] = {
    { BOTTLES,         "\xBF" "UN POCO RESBALADIZO, NO? \xA1" "B\xDA" "SQUENME PARA QUE LES ENSE\xD1" "E C\xD3MO SUBIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB4E - Bottles all MM moves learned
static DialogLine b4e_b[] = {
    { BOTTLES,         "\xA1" "EN ESTE MUNDO YA HAN APRENDIDO TODO LO QUE HAY QUE APRENDER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xB47 - Egg firing learn (24B, 11T)
static DialogLine b47_b[] = {
    { BOTTLES,         "\xA1" "ES HORA DE ENSE\xD1" "ARLE AL PAJARRACO LO QUE SE PUEDE HACER CON LOS HUEVOS!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "MANT\xC9N EL GATILLO Z Y" },
    { BOTTLES,         "PULSA EL BOT\xD3N C" },
    { BOTTLES,         "SUPERIOR PARA DISPARAR" },
    { BOTTLES,         "UN HUEVO HACIA ADELANTE!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "CASI... PULSA EL BOT\xD3N" },
    { BOTTLES,         "C INFERIOR PARA" },
    { BOTTLES,         "DISPARAR UN HUEVO" },
    { BOTTLES,         "HACIA ATR\xC1S!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "CON EL STICK 3D PUEDEN" },
    { BOTTLES,         "APUNTAR CON PRECISI\xD3N." },
    { BOTTLES,         "EN TOTAL, ESA CABEZA" },
    { BOTTLES,         "DE CHORLITO PUEDE" },
    { BOTTLES,         "CARGAR HASTA 100 HUEVOS!" },
    { BOTTLES,         "AHORA YA SABEN C\xD3MO" },
    { BOTTLES,         "DISPARAR HUEVOS." },
    { BOTTLES,         "LES DOY 50 HUEVOS M\xC1S" },
    { BOTTLES,         "PARA QUE PRACTIQUEN" },
    { BOTTLES,         "\xA1" "UN POCO!" },
    { DIALOG_TRIGGER,  "\x05" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine b47_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1" "SOY TODA O\xCD" "DOS," },
    { KAZOOIE,         "EXCAVADOR!" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "HMMM... \xA1" "SUENA GENIAL!" },
    { KAZOOIE,         "\xBF" "ESO ES TODO?" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "AUCH... \xA1" "ESO SUENA" },
    { KAZOOIE,         "DOLOROSO! MEJOR NO" },
    { KAZOOIE,         "HUBIERA PREGUNTADO..." },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef mm_defs[] = {
    // Conga
    DIALOG(0xB37, b37_b, b37_t),
    DIALOG(0xB38, b38_b, b38_t),
    DIALOG(0xB39, b39_b, b39_t),
    DIALOG(0xB3A, b3a_b, b3a_t),
    DIALOG(0xB3B, b3b_b, b3b_t),
    DIALOG(0xB3C, b3c_b, b3c_t),
    DIALOG(0xB3D, b3d_b, b3d_t),
    DIALOG(0xB3E, b3e_b, b3e_t),
    // Chimpy
    DIALOG(0xB3F, b3f_b, b3f_t),
    DIALOG(0xB40, b40_b, b40_t),
    // Ticker
    DIALOG(0xB41, b41_b, b41_t),
    DIALOG(0xB42, b42_b, b42_t),
    DIALOG(0xB43, b43_b, b43_t),
    // Juju
    DIALOG(0xB44, b44_b, b44_t),
    // Items
    DIALOG(0xB45, b45_b, b45_t),
    DIALOG(0xB46, b46_b, b46_t),
    // Bottles MM entrance + moves
    DIALOG(0xB51, b51_b, b51_t),
    DIALOG(0xF68, f68_b, f68_t),
    DIALOG(0xB48, b48_b, b48_t),
    DIALOG(0xB49, b49_b, b49_t),
    DIALOG(0xB4A, b4a_b, b4a_t),
    DIALOG(0xB4B, b4b_b, b4b_t),
    DIALOG(0xB4C, b4c_b, b4c_t),
    DIALOG(0xB4D, b4d_b, b4d_t),
    DIALOG(0xB4E, b4e_b, b4e_t),
    DIALOG(0xB47, b47_b, b47_t),
};

DialogDefTable mm_table = {
    mm_defs,
    sizeof(mm_defs) / sizeof(mm_defs[0])
};
