#include "translation.h"

/*
 * Gobi's Valley (World 6) - GV
 * Faithful to German structure - only text changed to Spanish
 * Portraits: 0x90=Rubee, 0x8F=Trunker, 0x91=Gobi, 0x92=Grabba,
 *   0xB0=Jinxy, 0xB1=SandEels, 0xB3=AncientOnes, 0xBB=Sandybutt
 */

#define RUBEE      0x90
#define TRUNKER    0x8F
#define GOBI_P     0x91
#define GRABBA     0x92
#define JINXY      0xB0
#define SAND_EEL   0xB1
#define ANCIENT    0xB3
#define SANDYBUTT  0xBB
#define GRUNTY_P   0xB5

// ============================================================
// RUBEE - Snake Charmer (portrait 0x90)
// ============================================================

// 0xA6F - Rubee meet (B:8 T:4)
static DialogLine a6f_b[] = {
    { RUBEE,           "\xA1" "HOLA AMIGOS, SOY RUBEE! \xBF" "PUEDO AYUDARLES?" },
    { DIALOG_COND_MINIMIZE, "" },
    { RUBEE,           "QU\xC9 BIEN, PORQUE VEO" },
    { RUBEE,           "UN TESORO ALL\xC1 ARRIBA." },
    { RUBEE,           "\xA1" "SER\xC1 SUYO SI LOGRAN" },
    { RUBEE,           "LLEGAR HASTA \xC9L!" },
    { RUBEE,           "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a6f_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xA1" "BUSCAMOS TESOROS," },
    { 0x82,            "FLAUTISTA!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA70 - Rubee helped (B:2 T:1)
static DialogLine a70_b[] = {
    { RUBEE,           "\xA1" "MIL GRACIAS! \xA1" "MI AMIGO HISTUP LES AYUDAR\xC1 AHORA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a70_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TRUNKER - Thirsty Tree (portrait 0x8F)
// ============================================================

// 0xA71 - Trunker meet (B:6 T:6)
static DialogLine a71_b[] = {
    { TRUNKER,         "SOY TRUNKER, EL \xC1RBOL M\xC1S SEDIENTO DEL MUNDO. \xA1" "SIN AGUA VOY A MARCHITARME!" },
    { DIALOG_COND_MINIMIZE, "" },
    { TRUNKER,         "\xA1" "NO, OSO TONTO!" },
    { TRUNKER,         "\xA1" "NECESITO AGUA!" },
    { TRUNKER,         "URGENTEMENTE..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a71_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xBF" "HACE CALORCITO, NO?" },
    { BANJO,           "\xA1" "KAZOOIE! \xBF" "CREES QUE CON" },
    { BANJO,           "HUEVOS Y PLUMAS" },
    { BANJO,           "PODEMOS AYUDARLO?" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA72 - Trunker helped (B:4 T:1)
static DialogLine a72_b[] = {
    { TRUNKER,         "AHHH... \xA1" "QU\xC9 BIEN!" },
    { TRUNKER,         "\xA1" "TRUNKER SE SIENTE" },
    { TRUNKER,         "GENIAL DE NUEVO! \xA1" "GRACIAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a72_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GOBI - Camel (portrait 0x91)
// ============================================================

// 0xA73 - Gobi meet (B:2 T:1)
static DialogLine a73_b[] = {
    { GOBI_P,          "\xA1" "HOLA! SOY GOBI, EL CAMELLO. \xA1" "PERO HASTA A M\xCD ME HACE DEMASIADO CALOR AQU\xCD! \xA1" "NECESITO SOMBRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a73_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA74 - Gobi helped (B:2 T:1)
static DialogLine a74_b[] = {
    { GOBI_P,          "\xA1" "MUCHAS GRACIAS! AQU\xCD EST\xC1 SU RECOMPENSA. \xA1" "ME VOY A DESCANSAR UN RATO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a74_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA75 - Gobi 2 meet (near Trunker, has water) (B:6 T:1)
static DialogLine a75_b[] = {
    { GOBI_P,          "ESTE \xC1RBOL SE VE MUY" },
    { GOBI_P,          "SEDIENTO. TENGO AGUA" },
    { GOBI_P,          "PERO LA NECESITO" },
    { GOBI_P,          "PARA M\xCD..." },
    { GOBI_P,          "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a75_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA76 - Gobi 2 done (lost water) (B:3 T:1)
static DialogLine a76_b[] = {
    { GOBI_P,          "\xA1" "OH! \xA1" "MI PRECIOSA" },
    { GOBI_P,          "AGUA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a76_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA77 - Gobi 3 done (leaves desert) (B:2 T:1)
static DialogLine a77_b[] = {
    { GOBI_P,          "\xA1" "YA BASTA! \xA1" "ME VOY DE ESTE DESIERTO A BUSCAR UN LUGAR M\xC1S TRANQUILO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a77_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GRABBA - Hand in sand (portrait 0x92)
// ============================================================

// 0xA78 - Grabba meet (B:3 T:1)
static DialogLine a78_b[] = {
    { GRABBA,          "\xA1" "GRABBA TIENE UNA" },
    { GRABBA,          "PIEZA MUY BONITA! JAJAJA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a78_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA79 - Grabba defeat (B:2 T:1)
static DialogLine a79_b[] = {
    { GRABBA,          "\xA1" "OH NO! \xA1" "DURANTE MIL A\xD1OS FUE M\xCD" "A! \xA1" "BIEN HECHO, OSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a79_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA7A - Grabba too fast (B:3 T:1)
static DialogLine a7a_b[] = {
    { GRABBA,          "\xA1" "EL OSO TORPE ES" },
    { GRABBA,          "DEMASIADO LENTO, JAJAJA!!!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// JINXY - Sphinx cat (portrait 0xB0)
// ============================================================

// 0xA7B - Jinxy meet (nose stuffed) (B:3 T:1)
static DialogLine a7b_b[] = {
    { JINXY,           "\xA1" "TENGO LA NARIZ" },
    { JINXY,           "TAPADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA7C - Jinxy one egg (B:2 T:1)
static DialogLine a7c_b[] = {
    { JINXY,           "\xA1" "OYE! \xA1" "ESO HACE COSQUILLAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA7D - Jinxy helped (nose clear) (B:4 T:1)
static DialogLine a7d_b[] = {
    { JINXY,           "AHHH... \xA1" "MUCHO MEJOR!" },
    { JINXY,           "\xA1" "LA NARIZ DE JINXY EST\xC1" },
    { JINXY,           "DESPEJADA! \xA1" "PASEN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// SAND EELS (portrait 0xB1)
// ============================================================

// 0xA7E - Sand Eels meet (B:4 T:1)
static DialogLine a7e_b[] = {
    { SAND_EEL,        "\xA1" "SOLO LAS ANGUILAS DE" },
    { SAND_EEL,        "ARENA PODEMOS SOBREVIVIR" },
    { SAND_EEL,        "EN LA ARENA CALIENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// ANCIENT ONES - Ring statues (portrait 0xB3)
// ============================================================

// 0xA7F - Ancient Ones meet (B:5 T:1)
static DialogLine a7f_b[] = {
    { ANCIENT,         "\xA1" "VUELA A TRAV\xC9S DE" },
    { ANCIENT,         "LAS ESTATUAS DE ANILLO" },
    { ANCIENT,         "PARA OBTENER UNA" },
    { ANCIENT,         "RECOMPENSA DORADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a7f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA80 - Ancient Ones done (B:4 T:1)
static DialogLine a80_b[] = {
    { ANCIENT,         "\xA1" "MUY BIEN, MORTAL!" },
    { ANCIENT,         "\xA1" "SEGURO PUEDES DARLE" },
    { ANCIENT,         "MEJOR USO QUE YO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a80_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// KING SANDYBUTT - Pyramid tomb (portrait 0xBB)
// ============================================================

// 0xA81 - Sandybutt enter (B:6 T:1)
static DialogLine a81_b[] = {
    { SANDYBUTT,       "\xA1" "ESTA ES LA TUMBA DEL" },
    { SANDYBUTT,       "REY SANDYBUTT!" },
    { SANDYBUTT,       "\xA1" "FUERA DE AQU\xCD O" },
    { SANDYBUTT,       "SUFRIR\xC1N LAS" },
    { SANDYBUTT,       "CONSECUENCIAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a81_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA82 - Sandybutt maze start (B:5 T:1)
static DialogLine a82_b[] = {
    { SANDYBUTT,       "\xA1" "NO HICIERON CASO A" },
    { SANDYBUTT,       "NUESTRA ADVERTENCIA!" },
    { SANDYBUTT,       "\xA1" "AHORA CORRAN POR" },
    { SANDYBUTT,       "SUS MISERABLES VIDAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a82_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA83 - Sandybutt done (B:2 T:1)
static DialogLine a83_b[] = {
    { SANDYBUTT,       "\xA1" "INCRE\xCD" "BLE... EL OSO GORDO LO LOGR\xD3! \xA1" "ESTE PROFANADOR DE TUMBAS SE MERECE UNA RECOMPENSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a83_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES GV MOVES
// ============================================================

// 0xF6D - Bottles GV entrance (B:2 T:1)
static DialogLine f6d_b[] = {
    { BOTTLES,         "AQU\xCD ENCONTRAR\xC1S UN MOVIMIENTO M\xC1S, BANJO." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA84 - Turbo Trainers learn (B:9 T:1) - with TRIGGERs
static DialogLine a84_b[] = {
    { BOTTLES,         "\xA1" "ESOS SON UNOS ZAPATOS DE CARRERA GENIALES!" },
    { DIALOG_TRIGGER,  "\x03" },
    { BOTTLES,         "KAZOOIE PUEDE USARLOS" },
    { BOTTLES,         "EN SUS FLACAS PATAS" },
    { BOTTLES,         "Y CORRER A TODA" },
    { BOTTLES,         "VELOCIDAD DURANTE" },
    { BOTTLES,         "UN RATO." },
    { DIALOG_TRIGGER,  "\x04" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine a84_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA85 - Turbo Trainers refresher (B:2 T:1)
static DialogLine a85_b[] = {
    { BOTTLES,         "\xA1" "P\xD3NGANSE LOS ZAPATOS DE CARRERA PARA QUE KAZOOIE CORRA A TODA VELOCIDAD POR UN RATO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a85_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA86 - Bottles: all GV moves learned (B:2 T:1)
static DialogLine a86_b[] = {
    { BOTTLES,         "\xA1" "MUY BIEN! \xA1" "YA HAN APRENDIDO TODOS LOS NUEVOS MOVIMIENTOS DE ESTE MUNDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a86_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA87 - Bottles: ALL game moves learned! (B:4 T:1)
static DialogLine a87_b[] = {
    { BOTTLES,         "\xA1" "MAGN\xCD" "FICO! \xA1" "HAN APRENDIDO" },
    { BOTTLES,         "TODOS LOS MOVIMIENTOS" },
    { BOTTLES,         "DEL JUEGO ENTERO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a87_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xA88 - Grunty GV taunt: need trainers (B:3 T:1)
static DialogLine a88_b[] = {
    { GRUNTY_P,        "NO TE SIRVEN TRUCOS SUCIOS," },
    { GRUNTY_P,        "\xA1" "SIN ZAPATOS NO LLEGAR\xC1S MUY LEJOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a88_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table - FAITHFUL to German structure
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef gv_defs[] = {
    // Rubee (charmer)
    DIALOG(0xA6F, a6f_b, a6f_t),
    DIALOG(0xA70, a70_b, a70_t),
    // Trunker (tree)
    DIALOG(0xA71, a71_b, a71_t),
    DIALOG(0xA72, a72_b, a72_t),
    // Gobi (camel)
    DIALOG(0xA73, a73_b, a73_t),
    DIALOG(0xA74, a74_b, a74_t),
    DIALOG(0xA75, a75_b, a75_t),
    DIALOG(0xA76, a76_b, a76_t),
    DIALOG(0xA77, a77_b, a77_t),
    // Grabba (hand)
    DIALOG(0xA78, a78_b, a78_t),
    DIALOG(0xA79, a79_b, a79_t),
    DIALOG(0xA7A, a7a_b, a7a_t),
    // Jinxy (sphinx)
    DIALOG(0xA7B, a7b_b, a7b_t),
    DIALOG(0xA7C, a7c_b, a7c_t),
    DIALOG(0xA7D, a7d_b, a7d_t),
    // Sand Eels
    DIALOG(0xA7E, a7e_b, a7e_t),
    // Ancient Ones
    DIALOG(0xA7F, a7f_b, a7f_t),
    DIALOG(0xA80, a80_b, a80_t),
    // Sandybutt
    DIALOG(0xA81, a81_b, a81_t),
    DIALOG(0xA82, a82_b, a82_t),
    DIALOG(0xA83, a83_b, a83_t),
    // Bottles GV
    DIALOG(0xF6D, f6d_b, f6d_t),
    DIALOG(0xA84, a84_b, a84_t),
    DIALOG(0xA85, a85_b, a85_t),
    DIALOG(0xA86, a86_b, a86_t),
    DIALOG(0xA87, a87_b, a87_t),
    // Grunty GV
    DIALOG(0xA88, a88_b, a88_t),
};

DialogDefTable gv_table = {
    gv_defs,
    sizeof(gv_defs) / sizeof(gv_defs[0])
};
