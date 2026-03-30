#include "translation.h"

/*
 * Core Translations - Collectible items, Mumbo, Jinjo
 *
 * Item portraits use their own sprite IDs (not Bottles/Banjo/Kazooie):
 *   0x98 = Jinjo
 *   0x99 = Note
 *   0x9A = Mumbo Skull token
 *   0x9B = Egg
 *   0x9C = Red Feather
 *   0x9D = Gold Feather
 *   0x9E = ?
 *   0x9F = ?
 *   0xA0 = Honeycomb (energy)
 *   0xA1 = Honeycomb (empty piece)
 *   0xA2 = Extra Life
 */

#define JINJO_PORTRAIT    0x98
#define NOTE_PORTRAIT     0x99
#define SKULL_PORTRAIT    0x9A
#define EGG_PORTRAIT      0x9B
#define RED_FEATH         0x9C
#define GOLD_FEATH        0x9D
#define HONEY_ENERGY      0xA0
#define HONEY_PIECE       0xA1
#define EXTRA_LIFE        0xA2
#define BEEHIVE           0xA4

// 0xD96 - Beehive meet (4B, 1T)
static DialogLine d96_b[] = {
    { BEEHIVE,          "\xA1" "FUERA! \xA1" "D\xC9JENME" },
    { BEEHIVE,          "A M\xCD Y A MIS" },
    { BEEHIVE,          "DELICIOSOS PANALES" },
    { BEEHIVE,          "EN PAZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d96_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD97 - Jinjo rescued (Yellow)
static DialogLine d97_b[] = {
    { JINJO_PORTRAIT,   "\xA1" "AYUDA! \xA1" "ME HAN" },
    { JINJO_PORTRAIT,   "RESCATADO!" },
    { JINJO_PORTRAIT,   "GRUNTILDA ENCERR\xD3 A" },
    { JINJO_PORTRAIT,   "CINCO DE NOSOTROS EN" },
    { JINJO_PORTRAIT,   "CADA MUNDO. \xA1" "SI NOS" },
    { JINJO_PORTRAIT,   "LIBERAN A TODOS," },
    { JINJO_PORTRAIT,   "RECIBIR\xC1N UNA PIEZA" },
    { JINJO_PORTRAIT,   "DE PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d97_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD98 - Jinjo rescued (Blue)
static DialogLine d98_b[] = {
    { JINJO_PORTRAIT,   "\xA1" "AYUDA! \xA1" "ME HAN" },
    { JINJO_PORTRAIT,   "RESCATADO!" },
    { JINJO_PORTRAIT,   "GRUNTILDA ENCERR\xD3 A" },
    { JINJO_PORTRAIT,   "CINCO DE NOSOTROS EN" },
    { JINJO_PORTRAIT,   "CADA MUNDO. \xA1" "SI NOS" },
    { JINJO_PORTRAIT,   "LIBERAN A TODOS," },
    { JINJO_PORTRAIT,   "RECIBIR\xC1N UNA PIEZA" },
    { JINJO_PORTRAIT,   "DE PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d98_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD99 - Jinjo rescued (Green)
static DialogLine d99_b[] = {
    { JINJO_PORTRAIT,   "\xA1" "AYUDA! \xA1" "ME HAN" },
    { JINJO_PORTRAIT,   "RESCATADO!" },
    { JINJO_PORTRAIT,   "GRUNTILDA ENCERR\xD3 A" },
    { JINJO_PORTRAIT,   "CINCO DE NOSOTROS EN" },
    { JINJO_PORTRAIT,   "CADA MUNDO. \xA1" "SI NOS" },
    { JINJO_PORTRAIT,   "LIBERAN A TODOS," },
    { JINJO_PORTRAIT,   "RECIBIR\xC1N UNA PIEZA" },
    { JINJO_PORTRAIT,   "DE PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d99_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9A - Jinjo rescued (Pink)
static DialogLine d9a_b[] = {
    { JINJO_PORTRAIT,   "\xA1" "AYUDA! \xA1" "ME HAN" },
    { JINJO_PORTRAIT,   "RESCATADO!" },
    { JINJO_PORTRAIT,   "GRUNTILDA ENCERR\xD3 A" },
    { JINJO_PORTRAIT,   "CINCO DE NOSOTROS EN" },
    { JINJO_PORTRAIT,   "CADA MUNDO. \xA1" "SI NOS" },
    { JINJO_PORTRAIT,   "LIBERAN A TODOS," },
    { JINJO_PORTRAIT,   "RECIBIR\xC1N UNA PIEZA" },
    { JINJO_PORTRAIT,   "DE PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9B - Jinjo rescued (Orange)
static DialogLine d9b_b[] = {
    { JINJO_PORTRAIT,   "\xA1" "GENIAL! \xA1" "ME HAN" },
    { JINJO_PORTRAIT,   "RESCATADO!" },
    { JINJO_PORTRAIT,   "GRUNTILDA ENCERR\xD3 A" },
    { JINJO_PORTRAIT,   "CINCO DE NOSOTROS EN" },
    { JINJO_PORTRAIT,   "CADA MUNDO. \xA1" "SI NOS" },
    { JINJO_PORTRAIT,   "LIBERAN A TODOS," },
    { JINJO_PORTRAIT,   "RECIBIR\xC1N UNA PIEZA" },
    { JINJO_PORTRAIT,   "DE PUZZLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9C - Note collected
static DialogLine d9c_b[] = {
    { NOTE_PORTRAIT,    "\xA1" "SOY UNA DE LAS CIEN NOTAS DE CADA MUNDO! \xA1" "REC\xD3JANNOS PARA ABRIR LAS PUERTAS DE NOTAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9D - Mumbo Skull token
static DialogLine d9d_b[] = {
    { SKULL_PORTRAIT,   "YO SER CR\xC1NEO DE MUMBO." },
    { SKULL_PORTRAIT,   "SIN M\xCD MUMBO NO MOVER" },
    { SKULL_PORTRAIT,   "\xA1" "NI UN DEDO PARA HACER MAGIA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9E - Eggs
static DialogLine d9e_b[] = {
    { EGG_PORTRAIT,     "\xA1" "SOMOS HUEVOS! KAZOOIE PUEDE APRENDER A USARNOS COMO MUNICI\xD3N. \xA1" "RECOG\xC9" "ANNOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD9F - Red Feather
static DialogLine d9f_b[] = {
    { RED_FEATH,        "\xA1" "SOY UNA PLUMA ROJA!" },
    { RED_FEATH,        "CUANDO KAZOOIE APRENDA A VOLAR, \xA1" "LA AYUDAR\xC9 A MANTENERSE EN EL AIRE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine d9f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA0 - Gold Feather
static DialogLine da0_b[] = {
    { GOLD_FEATH,       "\xA1" "QU\xC9 SUERTE! SOY UNA PLUMA DORADA DE INVENCIBILIDAD. \xA1" "USADME SABIAMENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA1 - Honeycomb (energy refill)
static DialogLine da1_b[] = {
    { HONEY_ENERGY,     "MMM... SOY UN DELICIOSO PANAL DE MIEL LLENO DE ENERG\xCD" "A. \xA1" "C\xD3MEME!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA2 - Honeycomb (empty piece - health extension)
static DialogLine da2_b[] = {
    { HONEY_PIECE,      "\xA1" "MUCHO GUSTO, PANAL VAC\xCD" "O!" },
    { HONEY_PIECE,      "RECOJAN SEIS DE" },
    { HONEY_PIECE,      "NOSOTROS PARA" },
    { HONEY_PIECE,      "AMPLIAR SU BARRA" },
    { HONEY_PIECE,      "DE ENERG\xCD" "A." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA3 - Extra Life
static DialogLine da3_b[] = {
    { EXTRA_LIFE,       "\xA1" "HOLA! \xA1" "SOY UNA VALIOSA VIDA EXTRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF74 - MM 50 notes: enough to break first door (4B, 1T)
static DialogLine f74_b[] = {
    { BOTTLES,         "\xA1" "GENIAL! HAN RECOGIDO" },
    { BOTTLES,         "SUFICIENTES NOTAS PARA" },
    { BOTTLES,         "ROMPER EL HECHIZO DE LA PRIMERA PUERTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f74_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF75 - Note score explanation (first time) (4B, 1T)
// ~ = dynamic number placeholder
static DialogLine f75_b[] = {
    { BOTTLES,         "GRUNTILDA LES IMPIDI\xD3 RECOGER TODAS LAS NOTAS. PERO LAS ~ NOTAS RECOGIDAS" },
    { 0x09,            "" },
    { BOTTLES,         "SE GUARDAR\xC1N COMO R\xC9" "CORD. \xA1" "INTENTEN RECOGER LAS 100 NOTAS DE CADA MUNDO! LAS NECESITAN PARA ABRIR M\xC1S PUERTAS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f75_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF76 - Beat previous best (4B, 1T)
static DialogLine f76_b[] = {
    { BOTTLES,         "\xA1" "GENIAL! \xA1" "HAN SUPERADO" },
    { BOTTLES,         "SU R\xC9" "CORD ANTERIOR" },
    { BOTTLES,         "DE NOTAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f76_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF77 - New best score display (3B, 1T)
// ~ = dynamic number placeholder
static DialogLine f77_b[] = {
    { BOTTLES,         "\xA1" "EL NUEVO R\xC9" "CORD DE ESTE MUNDO ES ~ NOTAS!" },
    { 0x09,            "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f77_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF78 - All 100 notes found (4B, 1T)
static DialogLine f78_b[] = {
    { BOTTLES,         "\xA1" "INCREIBLE! \xA1" "HAN ENCONTRADO" },
    { BOTTLES,         "LAS 100 NOTAS DE ESTE" },
    { BOTTLES,         "MUNDO! \xA1" "BRAVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f78_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA24 - Spring pad discovered (not learned yet) (2B, 1T)
static DialogLine a24_b[] = {
    { BOTTLES,         "ESTA PLATAFORMA VERDE SIRVE PARA EL SUPERSALTO DE KAZOOIE. \xA1" "B\xDA" "SQUENME Y LES ENSE\xD1" "AR\xC9 C\xD3MO FUNCIONA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a24_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA25 - Flight pad discovered (not learned yet) (2B, 1T)
static DialogLine a25_b[] = {
    { BOTTLES,         "ESTA ES UNA PLATAFORMA DE VUELO. PERO PRIMERO DEBEN ENCONTRAR MI TOPERA PARA APRENDER C\xD3MO FUNCIONA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a25_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xD39 - Bottles refill health (3B, 1T)
static DialogLine d39_b[] = {
    { BOTTLES,         "\xA1" "OYE, NO TIENES MUY BUENA PINTA! \xA1" "TE VOY A RELLENAR LA ENERG\xCD" "A!" },
    { DIALOG_TRIGGER,  "\x08" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine d39_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xF57 - First Jiggy collected (NTSC)
static DialogLine f57_b[] = {
    { JIGGY_PORT,       "\xA1" "YUJUUU! SOY UNA PIEZA DE PUZZLE. \xA1" "BUSCA UN CUADRO DONDE YO ENCAJE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f57_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// DON'T LEAVE WITHOUT LEARNING (F6E-F73)
// ============================================================

// 0xF6E - MM exit without moves (B:2 T:1)
static DialogLine f6e_b[] = {
    { BOTTLES,         "\xA1" "ALTO! \xA1" "A\xDA" "N NO HAN ENCONTRADO TODOS LOS MOVIMIENTOS DE ESTE MUNDO! \xA1" "ESFU\xC9RCENSE M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6e_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xF6F - TTC exit without moves (B:2 T:1)
static DialogLine f6f_b[] = {
    { BOTTLES,         "\xA1" "OYE! \xA1" "A\xDA" "N NO HAN DESCUBIERTO AL MENOS UN MOVIMIENTO NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6f_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xF70 - CC exit without moves (B:4 T:1)
static DialogLine f70_b[] = {
    { BOTTLES,         "\xA1" "CHAPOTEANDO SE LES" },
    { BOTTLES,         "PAS\xD3 UN MOVIMIENTO" },
    { BOTTLES,         "NUEVO, AMIGOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f70_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xF71 - BGS exit without moves (B:6 T:1)
static DialogLine f71_b[] = {
    { BOTTLES,         "\xA1" "GENIAL! \xA1" "SE SALTAN UN" },
    { BOTTLES,         "MOVIMIENTO NUEVO Y" },
    { BOTTLES,         "DESPU\xC9S SE QUEJAN" },
    { BOTTLES,         "DE QUE LA VIEJA BRUJA" },
    { BOTTLES,         "LES DA UNA PALIZA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f71_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xF72 - FP exit without moves (B:4 T:1)
static DialogLine f72_b[] = {
    { BOTTLES,         "\xA1" "NO TAN R\xC1PIDO! \xBF" "NO" },
    { BOTTLES,         "SE LES PAS\xD3 UN" },
    { BOTTLES,         "MOVIMIENTO, CHICOS?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f72_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xF73 - GV exit without moves (B:4 T:1)
static DialogLine f73_b[] = {
    { BOTTLES,         "CREO QUE SE LES PAS\xD3" },
    { BOTTLES,         "ALGO. \xA1" "RECUERDEN:" },
    { BOTTLES,         "NECESITAN CADA MOVIMIENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f73_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// ITEMS NOT UNLOCKED YET
// ============================================================

// 0xDA4 - Turbo Trainers not unlocked (B:2, T:1) portrait 0xA5
static DialogLine da4_b[] = {
    { 0xA5,            "\xA1" "JA! \xA1" "NO CREAN QUE PUEDEN USAR ALGO SIN APRENDER CON BOTTLES C\xD3MO FUNCIONA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da4_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA5 - Wading Boots not unlocked (B:5, T:1) portrait 0xA6
static DialogLine da5_b[] = {
    { 0xA6,            "\xA1" "OYE! \xA1" "PATAS FUERA!" },
    { 0xA6,            "ANTES DE HABLAR CON" },
    { 0xA6,            "BOTTLES, AQU\xCD NO" },
    { 0xA6,            "FUNCIONA NADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da5_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xDA6 - Honeycomb don't touch (B:4, T:1) portrait 0xA4
static DialogLine da6_b[] = {
    { 0xA4,            "\xA1" "MANOS FUERA DE MI" },
    { 0xA4,            "MIEL O SE VAN A" },
    { 0xA4,            "ARREPENTIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da6_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef core_defs[] = {
    DIALOG(0xD96, d96_b, d96_t),
    DIALOG(0xD97, d97_b, d97_t),
    DIALOG(0xD98, d98_b, d98_t),
    DIALOG(0xD99, d99_b, d99_t),
    DIALOG(0xD9A, d9a_b, d9a_t),
    DIALOG(0xD9B, d9b_b, d9b_t),
    DIALOG(0xD9C, d9c_b, d9c_t),
    DIALOG(0xD9D, d9d_b, d9d_t),
    DIALOG(0xD9E, d9e_b, d9e_t),
    DIALOG(0xD9F, d9f_b, d9f_t),
    DIALOG(0xDA0, da0_b, da0_t),
    DIALOG(0xDA1, da1_b, da1_t),
    DIALOG(0xDA2, da2_b, da2_t),
    DIALOG(0xDA3, da3_b, da3_t),
    DIALOG(0xA24, a24_b, a24_t),
    DIALOG(0xA25, a25_b, a25_t),
    DIALOG(0xD39, d39_b, d39_t),
    DIALOG(0xF57, f57_b, f57_t),
    // Note record dialogs
    DIALOG(0xF74, f74_b, f74_t),
    DIALOG(0xF75, f75_b, f75_t),
    DIALOG(0xF76, f76_b, f76_t),
    DIALOG(0xF77, f77_b, f77_t),
    DIALOG(0xF78, f78_b, f78_t),
    // Don't leave without learning dialogs (F6E-F73)
    DIALOG(0xF6E, f6e_b, f6e_t),
    DIALOG(0xF6F, f6f_b, f6f_t),
    DIALOG(0xF70, f70_b, f70_t),
    DIALOG(0xF71, f71_b, f71_t),
    DIALOG(0xF72, f72_b, f72_t),
    DIALOG(0xF73, f73_b, f73_t),
    // Item not unlocked dialogs
    DIALOG(0xDA4, da4_b, da4_t),
    DIALOG(0xDA5, da5_b, da5_t),
    DIALOG(0xDA6, da6_b, da6_t),
};

DialogDefTable core_table = {
    core_defs,
    sizeof(core_defs) / sizeof(core_defs[0])
};
