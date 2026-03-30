#include "translation.h"

/*
 * Puzzle Board Translations - Grunty's Furnace Fun quiz board
 *
 * These are messages shown at jigsaw picture podiums and
 * during the Grunty's Furnace Fun board game in Gruntilda's Lair.
 *
 * Portraits:
 *   0xB5 = Grunty
 *   0x84 = Mumbo
 *   0x80 = Banjo
 *   0x81 = Kazooie
 *   0xB6 = Tooty (alt)
 */

#define GRUNTY    0xB5
#define TOOTY_ALT 0xB6

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

/* ============================================================
 * 0x101F - Quiz: answer about the game (B:4 T:1)
 * ============================================================ */
static DialogLine _101f_b[] = {
    { GRUNTY,           "UNA PEQUE\xD1" "A RESPUESTA" },
    { GRUNTY,           "SOBRE ESTE JUEGO NECESITO," },
    { GRUNTY,           "\xA1" "ESPERO NO PEDIR DEMASIADO, INEPTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _101f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1020 - Quiz: recognize picture (B:3 T:1)
 * ============================================================ */
static DialogLine _1020_b[] = {
    { GRUNTY,           "QUIEN NO DURMI\xD3 MIENTRAS JUGABA," },
    { GRUNTY,           "\xA1" "SEGURO CADA IMAGEN ACERTABA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1020_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1021 - Quiz: music/sound round (B:3 T:1)
 * ============================================================ */
static DialogLine _1021_b[] = {
    { GRUNTY,           "MUCHOS SONIDOS VAS A O\xCD" "R," },
    { GRUNTY,           "\xA1" "TU \xC9XITO VOY A IMPEDIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1021_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1022 - Quiz: fight minigame (B:3 T:1)
 * ============================================================ */
static DialogLine _1022_b[] = {
    { GRUNTY,           "TU ESPERANZA QUIERO APLASTAR," },
    { GRUNTY,           "\xA1" "PORQUE AQU\xCD TIENES QUE PELEAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1022_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1023 - Quiz: Grunty personal question (B:4 T:1)
 * ============================================================ */
static DialogLine _1023_b[] = {
    { GRUNTY,           "LO QUE SABES DE M\xCD," },
    { GRUNTY,           "ESO QUIERO VER," },
    { GRUNTY,           "\xA1" "O TE PUEDES IR A PERDER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1023_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1024 - Quiz: wrong answer = lava bath (B:3 T:1)
 * ============================================================ */
static DialogLine _1024_b[] = {
    { GRUNTY,           "POR UNA RESPUESTA EQUIVOCADA TE AVERGONZAR\xC1S" },
    { GRUNTY,           "\xA1" "Y UN BA\xD1O DE LAVA TOMAR\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1024_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1025 - Quiz: joker when brain smokes (B:3 T:1)
 * ============================================================ */
static DialogLine _1025_b[] = {
    { GRUNTY,           "SI LA CABEZA TE ECHA HUMO SIN PARAR," },
    { GRUNTY,           "\xA1" "UN COMOD\xCD" "N NECESITAR\xC1S USAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1025_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1026 - Quiz: box minigame (B:3 T:1)
 * ============================================================ */
static DialogLine _1026_b[] = {
    { GRUNTY,           "LA CAJA SEGURO NO SE RENDIR\xC1," },
    { GRUNTY,           "\xA1" "VENCE R\xC1PIDO, EL TIEMPO SE VA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1026_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1027 - Quiz: Mumbo spell + Grunty taunt (B:7 T:1)
 * ============================================================ */
static DialogLine _1027_b[] = {
    { MUMBO,            "GRANDES HECHIZOS DE MUMBO" },
    { MUMBO,            "AYUDAR A TI, GANAR" },
    { MUMBO,            "\xA1" "DIF\xCD" "CIL JUEGO!" },
    { DIALOG_TRIGGER,   "\x01" },
    { GRUNTY,           "TUS POSIBILIDADES SON ESCASAS," },
    { GRUNTY,           "\xA1" "COME M\xC1S QUE ESTA COSA EN BRASAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1027_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1028 - Quiz: matching pairs (B:3 T:1)
 * ============================================================ */
static DialogLine _1028_b[] = {
    { GRUNTY,           "SIEMPRE DEBEN COINCIDIR DE DOS EN DOS," },
    { GRUNTY,           "\xA1" "PERO EL TIEMPO SE ACABA, ADI\xD3S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1028_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1029 - Quiz: squash bees (B:3 T:1)
 * ============================================================ */
static DialogLine _1029_b[] = {
    { GRUNTY,           "APLASTA A LAS ABEJAS SIN DESCANSAR," },
    { GRUNTY,           "\xA1" "ANTES DE QUE EL TIEMPO SE VAYA A ACABAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1029_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x102A - Quiz: singing toads (B:3 T:1)
 * ============================================================ */
static DialogLine _102a_b[] = {
    { GRUNTY,           "LOS SAPOS CANTAN SU CANCI\xD3N DEL ESTANQUE," },
    { GRUNTY,           "\xA1" "HAZ LO MISMO ANTES DE QUE TE ARRANQUE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _102a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x102B - Quiz: spell name backwards (B:3 T:1)
 * ============================================================ */
static DialogLine _102b_b[] = {
    { GRUNTY,           "EL NOMBRE DEL JUEGO AL REV\xC9S ESCRIBIR," },
    { GRUNTY,           "\xA1" "EN EL CAMINO TE VOY A HACER SUFRIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _102b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x102C - Quiz: Grunty's big intro speech (B:45 T:1)
 * ============================================================ */
static DialogLine _102c_b[] = {
    { GRUNTY,           "" },
    { DIALOG_TRIGGER,   "\x1F" },
    { GRUNTY,           "BIENVENIDOS, GRUNTILDA" },
    { GRUNTY,           "\xA1" "ES MI NOMBRE!" },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "\xA1" "JUEGAN EL OSO Y LA P\xC1JARA, POBRE HOMBRE!" },
    { DIALOG_TRIGGER,   "\x15" },
    { GRUNTY,           "AH\xCD EST\xC1 EL H\xC9ROE," },
    { DIALOG_TRIGGER,   "\x19" },
    { GRUNTY,           "\xA1" "QUE HASTA EL QUIZ SE ARRASTR\xD3 SIN BRILLO!" },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "AHORA POR \xDALTIMA VEZ" },
    { GRUNTY,           "LUCHAR\xC1N DURO," },
    { DIALOG_TRIGGER,   "\x1C" },
    { GRUNTY,           "\xA1" "PARA ESTOS DOS SER\xC1 MUY OSCURO!" },
    { DIALOG_TRIGGER,   "\x0A" },
    { GRUNTY,           "HERMOSOS PREMIOS" },
    { GRUNTY,           "ESPERAN," },
    { DIALOG_TRIGGER,   "\x17" },
    { GRUNTY,           "\xBF" "O EN SU CASA SE" },
    { GRUNTY,           "QUEDAN?" },
    { DIALOG_TRIGGER,   "\x0B" },
    { GRUNTY,           "MI QUIZ ES UNA" },
    { GRUNTY,           "MARAVILLA," },
    { DIALOG_TRIGGER,   "\x16" },
    { GRUNTY,           "\xA1" "Y TOOTY SE QUEDA" },
    { GRUNTY,           "AQU\xCD EN LA SILLA!" },
    { DIALOG_TRIGGER,   "\x0C" },
    { GRUNTY,           "EL CAMINO ES LARGO" },
    { GRUNTY,           "Y DIF\xCD" "CIL," },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "\xA1" "SU MALA SUERTE ME HACE" },
    { GRUNTY,           "FELIZ!" },
    { DIALOG_TRIGGER,   "\x0D" },
    { GRUNTY,           "PRONTO UN BA\xD1O DE LAVA" },
    { GRUNTY,           "TOMAR\xC1 EL OSO," },
    { DIALOG_TRIGGER,   "\x18" },
    { GRUNTY,           "\xA1" "LA ESCENA SER\xC1 UN" },
    { GRUNTY,           "CUADRO FAMOSO!" },
    { DIALOG_TRIGGER,   "\x0E" },
    { GRUNTY,           "\xA1" "CORRAN AL TABLERO YA," },
    { DIALOG_TRIGGER,   "\x1C" },
    { GRUNTY,           "Y PULSEN A, QUE EL SHOW" },
    { GRUNTY,           "EMPEZAR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _102c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1031 - Quiz: bear is back (B:4 T:1)
 * ============================================================ */
static DialogLine _1031_b[] = {
    { GRUNTY,           "VEO QUE EL PEQUE\xD1O HA" },
    { GRUNTY,           "VUELTO," },
    { GRUNTY,           "\xA1" "PRONTO LA SUERTE LO HABR\xC1 SUELTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1031_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1032 - Quiz: just guessing (B:3 T:1)
 * ============================================================ */
static DialogLine _1032_b[] = {
    { GRUNTY,           "YA ME HUELO LA TRAMPA EN CAMINO," },
    { GRUNTY,           "\xA1" "SEGURO QUE ADIVINASTE, CRETINO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1032_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1033 - Quiz: crowd cheers for failure (B:5 T:1)
 * ============================================================ */
static DialogLine _1033_b[] = {
    { GRUNTY,           "ESCUCHA AL P\xDA" "BLICO," },
    { GRUNTY,           "\xA1" "GRITA ENLOQUECIDO," },
    { GRUNTY,           "CUANDO T\xDA PIERDAS," },
    { GRUNTY,           "\xA1" "SE VOLVER\xC1 DESQUICIADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1033_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1034 - Quiz: Brentilda spills secrets (B:3 T:1)
 * ============================================================ */
static DialogLine _1034_b[] = {
    { GRUNTY,           "\xA1" "QU\xC9 HORROR! \xA1" "MI ODIOSA" },
    { GRUNTY,           "HERMANA LO CUENTA TODO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1034_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1035 - Quiz: enjoy your pain, try again (B:3 T:1)
 * ============================================================ */
static DialogLine _1035_b[] = {
    { GRUNTY,           "ME ENCANTA VERTE SUFRIR AS\xCD," },
    { GRUNTY,           "\xA1" "PULSA A E INT\xC9NTALO OTRA VEZ PARA M\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1035_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1036 - Quiz: crowd hopes you fail (B:3 T:1)
 * ============================================================ */
static DialogLine _1036_b[] = {
    { GRUNTY,           "LA MULTITUD ESPERA QUE FRACASES," },
    { GRUNTY,           "\xA1" "SEGURO NO TE ATREVES NI A MAS PASES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1036_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1037 - Quiz: any path = suffering (B:3 T:1)
 * ============================================================ */
static DialogLine _1037_b[] = {
    { GRUNTY,           "NO IMPORTA QU\xC9 CAMINO ELIJAS," },
    { GRUNTY,           "\xA1" "AQU\xCD SOLO SUFRES Y TE AFLIJAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1037_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1038 - Quiz: energy won't save you (B:3 T:1)
 * ============================================================ */
static DialogLine _1038_b[] = {
    { GRUNTY,           "CON ESA POCA ENERG\xCD" "A QUE TIENES," },
    { GRUNTY,           "\xA1" "NUNCA RESCATAR\xC1S A TU HERMANA, VIENES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1038_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1039 - Quiz: extra life won't help (B:3 T:1)
 * ============================================================ */
static DialogLine _1039_b[] = {
    { GRUNTY,           "AUNQUE TENGAS ESTA VIDA EXTRA," },
    { GRUNTY,           "\xA1" "PRONTO EL OSO CAER\xC1 DE LA TARIMA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1039_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103A - Quiz: joker rules (B:5 T:1)
 * ============================================================ */
static DialogLine _103a_b[] = {
    { GRUNTY,           "POR CADA COMOD\xCD" "N QUE USES," },
    { GRUNTY,           "\xA1" "UNA PREGUNTA MENOS, QU\xC9 ABUSES!" },
    { GRUNTY,           "PULSA B PARA USAR EL COMOD\xCD" "N," },
    { GRUNTY,           "\xA1" "Y DEMUESTRA TU COBARD\xCD" "A, BRIB\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103B - Quiz: joker replaces square (B:3 T:1)
 * ============================================================ */
static DialogLine _103b_b[] = {
    { GRUNTY,           "EL COMOD\xCD" "N REEMPLAZA UNA CASILLA," },
    { GRUNTY,           "\xA1" "PERO AS\xCD NO SER\xC1S MARAVILLA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103C - Quiz: one more wrong = fried (B:3 T:1)
 * ============================================================ */
static DialogLine _103c_b[] = {
    { GRUNTY,           "UNA RESPUESTA M\xC1S MAL DADA," },
    { GRUNTY,           "\xA1" "Y AL FIN SER\xC1S CARNE ASADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103D - Quiz: don't know answer = lose face (B:4 T:1)
 * ============================================================ */
static DialogLine _103d_b[] = {
    { GRUNTY,           "SI TAMPOCO SABES ESTA" },
    { GRUNTY,           "RESPUESTA," },
    { GRUNTY,           "\xA1" "NO SOLO PERDER\xC1S LA CARA, SINO LA FIESTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103E - Quiz: game over (B:3 T:1)
 * ============================================================ */
static DialogLine _103e_b[] = {
    { GRUNTY,           "LA ESPERANZA DEL OSO SE QUEBR\xD3," },
    { GRUNTY,           "\xA1" "EL LINDO JUEGUITO SE ACAB\xD3!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x103F - Quiz: Grunty's losing speech (B:20 T:1)
 * ============================================================ */
static DialogLine _103f_b[] = {
    { GRUNTY,           "" },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "ALGO TERRIBLE AQU\xCD" },
    { GRUNTY,           "ME EST\xC1 PASANDO," },
    { DIALOG_TRIGGER,   "\x1B" },
    { GRUNTY,           "\xA1" "ESTO NO LO TEN\xCD" "A" },
    { GRUNTY,           "PLANEADO!" },
    { GRUNTY,           "SOLO BUSCABA LA VICTORIA CON PASI\xD3N," },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "\xA1" "NO TEN\xCD" "A OTRA INTENCI\xD3N!" },
    { DIALOG_TRIGGER,   "\x1A" },
    { GRUNTY,           "DE ESTOS PREMIOS PUEDEN ELEGIR," },
    { DIALOG_TRIGGER,   "\x11" },
    { GRUNTY,           "\xA1" "POR LA ESCALERA ME VOY A SUBIR!" },
    { DIALOG_TRIGGER,   "\x09" },
    { GRUNTY,           "NADIE JAMAS ME VA A ATRAPAR," },
    { DIALOG_TRIGGER,   "\x1C" },
    { GRUNTY,           "\xA1" "MEJOR VEAN LOS CR\xC9" "DITOS SIN PARAR!" },
    { DIALOG_TRIGGER,   "\x0F" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _103f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1040 - Quiz: final prize scene (B:1 T:22)
 * ============================================================ */
static DialogLine _1040_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1040_t[] = {
    { BANJO,            "" },
    { DIALOG_TRIGGER,   "\x12" },
    { BANJO,            "KAZOOIE, \xBF" "QU\xC9 OPINAS?" },
    { BANJO,            "\xBF" "QU\xC9 PREMIO NOS LLEVAMOS?" },
    { DIALOG_TRIGGER,   "\x1A" },
    { TOOTY_ALT,        "\xA1" "A M\xCD! \xA1" "A M\xCD! \xA1" "A M\xCD! \xA1" "A M\xCD!" },
    { DIALOG_TRIGGER,   "\x1D" },
    { KAZOOIE,          "\xBF" "QU\xC9 TAL ESA COSA" },
    { KAZOOIE,          "TAN RARA?" },
    { BANJO,            "TAMBI\xC9N PODR\xCD" "AMOS LLEVAR" },
    { BANJO,            "A TOOTY..." },
    { KAZOOIE,          "\xA1" "A ESA ME REFER\xCD" "A!" },
    { BANJO,            "\xA1\xA1" "KAZOOIE!!" },
    { DIALOG_TRIGGER,   "\x1A" },
    { TOOTY_ALT,        "BANJO, \xBF" "PODEMOS IRNOS" },
    { TOOTY_ALT,        "A CASA YA? HE TENIDO" },
    { TOOTY_ALT,        "SUFICIENTES AVENTURAS" },
    { TOOTY_ALT,        "POR HOY!" },
    { DIALOG_TRIGGER,   "\x12" },
    { BANJO,            "\xA1" "CLARO, V\xC1MONOS" },
    { BANJO,            "DE AQU\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
static DialogDef puzzleboard_defs[] = {
    DIALOG(0x101F, _101f_b, _101f_t),   /* Quiz: game question */
    DIALOG(0x1020, _1020_b, _1020_t),   /* Quiz: picture round */
    DIALOG(0x1021, _1021_b, _1021_t),   /* Quiz: music round */
    DIALOG(0x1022, _1022_b, _1022_t),   /* Quiz: fight minigame */
    DIALOG(0x1023, _1023_b, _1023_t),   /* Quiz: Grunty question */
    DIALOG(0x1024, _1024_b, _1024_t),   /* Quiz: wrong = lava */
    DIALOG(0x1025, _1025_b, _1025_t),   /* Quiz: joker hint */
    DIALOG(0x1026, _1026_b, _1026_t),   /* Quiz: box minigame */
    DIALOG(0x1027, _1027_b, _1027_t),   /* Quiz: Mumbo spell */
    DIALOG(0x1028, _1028_b, _1028_t),   /* Quiz: matching pairs */
    DIALOG(0x1029, _1029_b, _1029_t),   /* Quiz: squash bees */
    DIALOG(0x102A, _102a_b, _102a_t),   /* Quiz: singing toads */
    DIALOG(0x102B, _102b_b, _102b_t),   /* Quiz: spell backwards */
    DIALOG(0x102C, _102c_b, _102c_t),   /* Quiz: Grunty intro */
    DIALOG(0x1031, _1031_b, _1031_t),   /* Quiz: bear returns */
    DIALOG(0x1032, _1032_b, _1032_t),   /* Quiz: just guessing */
    DIALOG(0x1033, _1033_b, _1033_t),   /* Quiz: crowd cheers */
    DIALOG(0x1034, _1034_b, _1034_t),   /* Quiz: Brentilda gossip */
    DIALOG(0x1035, _1035_b, _1035_t),   /* Quiz: try again */
    DIALOG(0x1036, _1036_b, _1036_t),   /* Quiz: crowd hopes fail */
    DIALOG(0x1037, _1037_b, _1037_t),   /* Quiz: suffering */
    DIALOG(0x1038, _1038_b, _1038_t),   /* Quiz: energy useless */
    DIALOG(0x1039, _1039_b, _1039_t),   /* Quiz: extra life useless */
    DIALOG(0x103A, _103a_b, _103a_t),   /* Quiz: joker rules */
    DIALOG(0x103B, _103b_b, _103b_t),   /* Quiz: joker replaces */
    DIALOG(0x103C, _103c_b, _103c_t),   /* Quiz: one more wrong */
    DIALOG(0x103D, _103d_b, _103d_t),   /* Quiz: lose face */
    DIALOG(0x103E, _103e_b, _103e_t),   /* Quiz: game over */
    DIALOG(0x103F, _103f_b, _103f_t),   /* Quiz: Grunty loses */
    DIALOG(0x1040, _1040_b, _1040_t),   /* Quiz: final prize */
};

DialogDefTable puzzleboard_table = {
    puzzleboard_defs,
    sizeof(puzzleboard_defs) / sizeof(puzzleboard_defs[0])
};
