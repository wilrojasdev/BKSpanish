#include "translation.h"

/*
 * Freezeezy Peak (World 5) - FP
 * Portraits: 0xB7=Boggy, 0xB8=Wozza, 0xBE=Freezing Water, 0xBF=Twinkly,
 *   0xC0=Twinkly Muncher, 0xC5=Boggy Kids, 0xBC/0xD0/0xD1=Present colors
 * Special: 0x08=Present text control, 0x03=CLOSE (player choice dialogs)
 */

#define BOGGY       0xB7
#define WOZZA       0xB8
#define FREEZE_W    0xBE
#define TWINKLY     0xBF
#define TWINK_MUNCH 0xC0
#define BOGGY_KIDS  0xC5
#define PRESENT_BLU 0xBC
#define PRESENT_GRN 0xD0
#define PRESENT_RED 0xD1
#define PRESENT_TXT 0x08

// ============================================================
// BOGGY SICK (0xBFF) - Stomach ache from eating Jiggy
// ============================================================

// 0xBFF - Boggy stomach ache (B:7 T:1)
static DialogLine bff_b[] = {
    { BOGGY,           "AY... \xA1" "TENGO UN DOLOR" },
    { BOGGY,           "DE EST\xD3MAGO HORRIBLE!" },
    { BOGGY,           "\xA1" "NO DEBER\xCD" "A HABERME" },
    { BOGGY,           "COMIDO ESA COSA BRILLANTE!" },
    { BOGGY,           "\xA1" "POR FAVOR AYUDEN AL" },
    { BOGGY,           "POBRE BOGGY! AY..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine bff_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOGGY - Polar bear, sled racer (portrait 0xB7)
// ============================================================

// 0xC00 - Boggy ate jiggy (B:3 T:1) - TRIGGER \x01
static DialogLine c00_b[] = {
    { BOGGY,           "AAAAAAAH... \xA1" "ME COM\xCD ALGO RARO! \xA1" "ME DUELE LA BARRIGA!" },
    { DIALOG_TRIGGER,  "\x01" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine c00_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC01 - Boggy meet as bear (B:7 T:4) - too big for sled
static DialogLine c01_b[] = {
    { BOGGY,           "\xA1" "HOLA AMIGOS! \xA1" "NADIE QUIERE COMPETIR CONMIGO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOGGY,           "LO SIENTO, NO CABEN EN" },
    { BOGGY,           "EL TRINEO. SOLO CORRO" },
    { BOGGY,           "CONTRA UN RIVAL M\xC1S" },
    { BOGGY,           "PEQUE\xD1O." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c01_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1" "TE VAMOS A DAR UNA" },
    { KAZOOIE,         "PALIZA, OSITO!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC02 - Boggy meet as walrus (B:4 T:1) - wants to race
static DialogLine c02_b[] = {
    { BOGGY,           "\xA1" "COLEGA MORSA! \xBF" "QUIERES" },
    { BOGGY,           "ECHAR UNA CARRERA?" },
    { BOGGY,           "\xA1" "S\xDA" "BETE AL TRINEO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c02_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC03 - Boggy race 1 instructions + countdown (B:7 T:1)
static DialogLine c03_b[] = {
    { BOGGY,           "\xA1" "GENIAL! SOLO TIENES QUE PASAR EL TRINEO POR LAS BANDERAS ROJAS" },
    { BOGGY,           "\xA1" "Y SER M\xC1S R\xC1PIDO QUE YO! \xBF" "LISTO?" },
    { BOGGY,           "3..." },
    { BOGGY,           "2..." },
    { BOGGY,           "1..." },
    { BOGGY,           "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c03_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC04 - Boggy race 1 lose (B:4 T:1) - not bad but needs practice
static DialogLine c04_b[] = {
    { BOGGY,           "\xA1" "NADA MAL, PEQUE\xD1O!" },
    { BOGGY,           "\xA1" "PERO UN POCO DE" },
    { BOGGY,           "PR\xC1" "CTICA NO TE VENDR\xCD" "A MAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c04_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC05 - Boggy race 1 try again (B:4 T:1) - jump on sled
static DialogLine c05_b[] = {
    { BOGGY,           "\xA1" "S\xDA" "BETE AL TRINEO" },
    { BOGGY,           "E INT\xC9NTALO" },
    { BOGGY,           "DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c05_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC06 - Boggy race retry countdown (B:6 T:1)
static DialogLine c06_b[] = {
    { BOGGY,           "\xA1" "BUENA SUERTE, PEQUE\xD1O!" },
    { BOGGY,           "3..." },
    { BOGGY,           "2..." },
    { BOGGY,           "1..." },
    { BOGGY,           "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c06_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC07 - Boggy race 1 WIN (B:4 T:1) - gives jiggy
static DialogLine c07_b[] = {
    { BOGGY,           "WOW... \xA1" "EST\xC1S EN BUENA" },
    { BOGGY,           "FORMA, COMPA\xD1" "ERO! \xA1" "RESPETO!" },
    { BOGGY,           "\xA1" "TOMA ESTO COMO RECOMPENSA! VOY A BUSCAR UN RIVAL M\xC1S D\xC9" "BIL..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c07_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC08 - Boggy race done, where's the bear? (B:6 T:1)
static DialogLine c08_b[] = {
    { BOGGY,           "ME GUSTAR\xCD" "A OTRA CARRERA" },
    { BOGGY,           "PERO ERES MUY BUENO." },
    { BOGGY,           "\xBF" "D\xD3NDE SE HABR\xC1 METIDO" },
    { BOGGY,           "ESE OSO" },
    { BOGGY,           "GORD\xD3N?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c08_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC09 - Boggy race 2 challenge (B:5 T:1) - player choice A/B
static DialogLine c09_b[] = {
    { BOGGY,           "\xA1" "OYE COMPA\xD1" "ERO! \xBF" "QU\xC9 TAL" },
    { BOGGY,           "UNA CARRERA? \xA1" "PULSA A" },
    { BOGGY,           "PARA EMPEZAR! LOS OSOS" },
    { BOGGY,           "COBARDES PULSAN B..." },
    { DIALOG_CLOSE, "" },
};
static DialogLine c09_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0A - Boggy race 2 retry (B:5 T:1) - player choice A/B
static DialogLine c0a_b[] = {
    { BOGGY,           "\xA1" "VENGA, ECHEMOS OTRA" },
    { BOGGY,           "CARRERA! \xBF" "S\xCD? PULSA A" },
    { BOGGY,           "SI TE ATREVES, O B SI" },
    { BOGGY,           "ERES UN GALLINA." },
    { DIALOG_CLOSE, "" },
};
static DialogLine c0a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0B - Boggy race 2 lose (B:2 T:1)
static DialogLine c0b_b[] = {
    { BOGGY,           "\xA1" "MALA SUERTE! \xA1" "ESTA RONDA ES PARA EL VIEJO BOGGY!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c0b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0C - Boggy race 2 again (B:4 T:1)
static DialogLine c0c_b[] = {
    { BOGGY,           "\xA1" "NO TE HAGAS ROGAR!" },
    { BOGGY,           "\xA1" "ECHEMOS OTRA CARRERA!" },
    { BOGGY,           "\xBF" "DALE?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c0c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0D - Boggy race 2 WIN (B:5 T:1) - gives 2nd jiggy, lost presents
static DialogLine c0d_b[] = {
    { BOGGY,           "\xA1" "RAYOS! \xA1" "OTRA VEZ PERD\xCD!" },
    { BOGGY,           "\xA1" "TOMA ESTA SEGUNDA PIEZA" },
    { BOGGY,           "DORADA! \xBF" "D\xD3NDE HABR\xC9" },
    { BOGGY,           "PERDIDO LOS REGALOS DE LOS PEQUE\xD1OS?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c0d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0E - Boggy race taunt: faster! (B:2 T:1)
static DialogLine c0e_b[] = {
    { BOGGY,           "\xA1" "M\xC1S R\xC1PIDO! \xA1" "ESFU\xC9RZATE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c0e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC0F - Boggy race taunt: grandma faster (B:3 T:1)
static DialogLine c0f_b[] = {
    { BOGGY,           "\xA1" "VENGA, MI ABUELA ES" },
    { BOGGY,           "M\xC1S R\xC1PIDA QUE T\xDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c0f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC10 - Boggy race taunt: too bad (B:2 T:1)
static DialogLine c10_b[] = {
    { BOGGY,           "\xA1" "ERES MUY MALO! \xA1" "AS\xCD NO ES DIVERTIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c10_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// FREEZING WATER (portrait 0xBE)
// ============================================================

// 0xC11 - Freezing water warning (B:3 T:1)
static DialogLine c11_b[] = {
    { FREEZE_W,        "\xA1" "CUIDADO! \xA1" "ESTE AGUA" },
    { FREEZE_W,        "EST\xC1 HELADA! \xA1" "SAL R\xC1PIDO O TE CONGELAR\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c11_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TWINKLIES - Christmas lights (portrait 0xBF)
// ============================================================

// 0xC12 - Twinklies intro (B:7 T:1)
static DialogLine c12_b[] = {
    { TWINKLY,         "\xA1" "HOLA! \xA1" "SOMOS LOS" },
    { TWINKLY,         "TWINKLIES!" },
    { TWINKLY,         "\xA1" "QUEREMOS ADORNAR EL" },
    { TWINKLY,         "\xC1RBOL DE NAVIDAD!" },
    { TWINKLY,         "\xA1" "PERO ESE MONSTRUO" },
    { TWINKLY,         "NOS QUIERE COMER! \xBF" "NOS PROTEGES?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c12_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC13 - Twinklies success (B:4 T:1)
static DialogLine c13_b[] = {
    { TWINKLY,         "\xA1" "GENIAL! \xA1" "EL \xC1RBOL BRILLA" },
    { TWINKLY,         "CON TODA NUESTRA LUZ!" },
    { TWINKLY,         "\xA1" "TOMA ESTA PIEZA DORADA COMO AGRADECIMIENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c13_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC14 - Twinklies fail (B:4 T:1)
static DialogLine c14_b[] = {
    { TWINKLY,         "\xA1" "OH NO! \xA1" "SE COMI\xD3 A" },
    { TWINKLY,         "DEMASIADOS DE NOSOTROS!" },
    { TWINKLY,         "\xA1" "INT\xC9NTALO OTRA VEZ, POR FAVOR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c14_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TWINKLY MUNCHER (portrait 0xC0)
// ============================================================

// 0xC15 - Twinkly Muncher taunt (B:2 T:1)
static DialogLine c15_b[] = {
    { TWINK_MUNCH,     "\xA1" "MMMM! \xA1" "LUCES DELICIOSAS! \xA1" "NO PUEDES DETENERME, PELUDITO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c15_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC16 - Twinkly Muncher gloating (B:2 T:1)
static DialogLine c16_b[] = {
    { TWINK_MUNCH,     "\xA1" "JA JA! \xA1" "ME LAS COM\xCD TODAS! \xA1" "ESTABAN DELICIOSAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c16_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOGGY'S KIDS (portrait 0xC5) - Waiting for presents
// ============================================================

// 0xC17 - Boggy kids: first present received (B:2 T:1)
static DialogLine c17_b[] = {
    { BOGGY_KIDS,      "\xA1" "WOW! \xA1" "GRACIAS, OSO MARR\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c17_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC18 - Boggy kids: second present (B:3 T:1)
static DialogLine c18_b[] = {
    { BOGGY_KIDS,      "\xA1" "GENIAL, OTRO REGALO!" },
    { BOGGY_KIDS,      "\xA1" "SOLO FALTA UNO M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c18_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC19 - Boggy kids: all presents! (B:4 T:1)
static DialogLine c19_b[] = {
    { BOGGY_KIDS,      "\xA1" "YUPIII! \xA1" "AHORA SOMOS" },
    { BOGGY_KIDS,      "TODOS FELICES!" },
    { BOGGY_KIDS,      "\xA1" "ESTO ES PARA TI!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c19_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC1A - Boggy kids: crying, want presents (B:5 T:1)
static DialogLine c1a_b[] = {
    { BOGGY_KIDS,      "BUAAA... \xBF" "D\xD3NDE EST\xC1N" },
    { BOGGY_KIDS,      "LOS REGALOS? \xA1" "NUESTRO" },
    { BOGGY_KIDS,      "PAP\xC1 BOGGY NOS IBA A" },
    { BOGGY_KIDS,      "TRAER ALGO Y LLEVA MUCHO TIEMPO FUERA! BUAAA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// WOZZA - Scared walrus in cave (portrait 0xB8)
// ============================================================

// 0xC1B - Wozza scared of bear (B:2 T:1)
static DialogLine c1b_b[] = {
    { WOZZA,           "\xA1\xA1\xA1" "UN OSO!!! \xA1" "QU\xC9" "DATE LEJOS DE M\xCD! \xA1" "LOS OSOS ME DAN MUCHO MIEDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC1C - Wozza gives item to walrus (B:7 T:1) - TRIGGER \x01
static DialogLine c1c_b[] = {
    { WOZZA,           "\xA1" "OH! \xA1" "OTRO AMIGO MORSA!" },
    { WOZZA,           "\xA1" "QU\xC9 ALEGR\xCD" "A VERTE!" },
    { DIALOG_TRIGGER,  "\x01" },
    { WOZZA,           "\xA1" "TOMA, AMIGUITO! \xA1" "ENCONTR\xC9" },
    { WOZZA,           "ESTO AFUERA, PERO A M\xCD" },
    { WOZZA,           "NO ME SIRVE. \xA1" "ES TUYO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC1D - Wozza: bear is gone, can come out (B:3 T:1)
static DialogLine c1d_b[] = {
    { WOZZA,           "UFF... \xA1" "AHORA WOZZA" },
    { WOZZA,           "PUEDE SALIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// MORE BOGGY DIALOGS
// ============================================================

// 0xC1E - Boggy looking for presents (B:2 T:1)
static DialogLine c1e_b[] = {
    { BOGGY,           "\xA1" "MIS HIJOS QUIEREN REGALOS! \xBF" "HAS VISTO TRES REGALOS DE COLORES POR AH\xCD?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC1F - Boggy needs sleep (B:4 T:1)
static DialogLine c1f_b[] = {
    { BOGGY,           "ESTOY MUY CANSADO..." },
    { BOGGY,           "DOS CARRERAS Y UN" },
    { BOGGY,           "DOLOR DE BARRIGA... \xA1" "NECESITO UNA SIESTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c1f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// PRESENTS (0xBC=Blue, 0xD0=Green, 0xD1=Red)
// Special format: first line is sprite portrait, rest use 0x08
// ============================================================

// 0xC20 - Blue present (B:5 T:1)
static DialogLine c20_b[] = {
    { PRESENT_BLU,     "~" },
    { PRESENT_TXT,     "\xA1" "SOY EL REGALO AZUL!" },
    { PRESENT_TXT,     "\xA1" "LL\xC9VAME CON LOS" },
    { PRESENT_TXT,     "NI\xD1OS DE BOGGY!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c20_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC21 - Green present (B:5 T:1)
static DialogLine c21_b[] = {
    { PRESENT_GRN,     "~" },
    { PRESENT_TXT,     "\xA1" "SOY EL REGALO VERDE!" },
    { PRESENT_TXT,     "\xA1" "LL\xC9VAME CON LOS" },
    { PRESENT_TXT,     "NI\xD1OS DE BOGGY!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c21_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC22 - Red present (B:5 T:1)
static DialogLine c22_b[] = {
    { PRESENT_RED,     "~" },
    { PRESENT_TXT,     "\xA1" "SOY EL REGALO ROJO!" },
    { PRESENT_TXT,     "\xA1" "LL\xC9VAME CON LOS" },
    { PRESENT_TXT,     "NI\xD1OS DE BOGGY!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c22_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES FP - Beak Bomb learn (portrait 0x83)
// ============================================================

// 0xC23 - Beak Bomb learn (B:9 T:4)
static DialogLine c23_b[] = {
    { BOTTLES,         "\xA1" "OYE, PATAS DE POLLO! \xA1" "TENGO UN MOVIMIENTO EXPLOSIVO PARA TI!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "EL PICADO KAZOOIE" },
    { BOTTLES,         "ES UN ATAQUE A\xC9REO" },
    { BOTTLES,         "SUPERPODEROSO." },
    { BOTTLES,         "\xA1" "DESPEGA DESDE UNA" },
    { BOTTLES,         "PLATAFORMA DE VUELO Y PULSA EL BOT\xD3N B EN EL AIRE!" },
    { BOTTLES,         "\xA1" "PREPARADOS PARA EL IMPACTO!" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine c23_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xBF" "EXPLOSIVO? \xA1" "ESO ME GUSTA! \xA1" "YA ERA HORA DE ALGO DIVERTIDO, EXCAVADOR!" },
    { KAZOOIE,         "\xA1" "A VER QUI\xC9N EXPLOTA PRIMERO!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC24 - Beak Bomb refresher (B:6 T:1)
static DialogLine c24_b[] = {
    { BOTTLES,         "EL PICADO KAZOOIE ES" },
    { BOTTLES,         "UN ATAQUE A\xC9REO MUY" },
    { BOTTLES,         "POTENTE. DESPEGA DESDE" },
    { BOTTLES,         "UNA PLATAFORMA DE" },
    { BOTTLES,         "VUELO Y PULSA B EN EL AIRE." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c24_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// MORE TWINKLIES
// ============================================================

// 0xC25 - Twinklies retry (B:3 T:1)
static DialogLine c25_b[] = {
    { TWINKLY,         "\xA1" "POR FAVOR, INT\xC9NTALO" },
    { TWINKLY,         "DE NUEVO! \xA1" "NECESITAMOS TU AYUDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c25_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// MORE WOZZA
// ============================================================

// 0xC26 - Wozza scared again (B:4 T:1)
static DialogLine c26_b[] = {
    { WOZZA,           "\xA1" "FUERA, OSO PELUDO!" },
    { WOZZA,           "\xA1" "NO TE ACERQUES!" },
    { WOZZA,           "\xA1" "VETE ANTES DE QUE ME D\xC9 UN INFARTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c26_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC27 - Wozza walrus friend (B:4 T:1)
static DialogLine c27_b[] = {
    { WOZZA,           "\xA1" "HOLA, AMIGO MORSA!" },
    { WOZZA,           "ES AGRADABLE VER A" },
    { WOZZA,           "OTRO DE LOS NUESTROS POR AQU\xCD." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c27_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOGGY RACE 2
// ============================================================

// 0xC28 - Boggy race 2 rules (B:10 T:1)
static DialogLine c28_b[] = {
    { BOGGY,           "\xBF" "QUIERES OTRA CARRERA?" },
    { BOGGY,           "\xA1" "ESTA VEZ SER\xC1 M\xC1S" },
    { BOGGY,           "DIF\xCD" "CIL! \xA1" "YO TAMBI\xC9N" },
    { BOGGY,           "TENGO UN TRINEO NUEVO!" },
    { BOGGY,           "\xA1" "PREP\xC1RATE!" },
    { BOGGY,           "3..." },
    { BOGGY,           "2..." },
    { BOGGY,           "1..." },
    { BOGGY,           "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c28_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC29 - Boggy race retry (B:6 T:1)
static DialogLine c29_b[] = {
    { BOGGY,           "\xBF" "OTRA VEZ? \xA1" "VAMOS ALL\xC1!" },
    { BOGGY,           "3..." },
    { BOGGY,           "2..." },
    { BOGGY,           "1..." },
    { BOGGY,           "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c29_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES - All FP moves
// ============================================================

// 0xC2A - Bottles all FP moves learned (B:5 T:1)
static DialogLine c2a_b[] = {
    { BOTTLES,         "\xA1" "MARAVILLOSO! \xA1" "YA HAN" },
    { BOTTLES,         "APRENDIDO TODO LO" },
    { BOTTLES,         "QUE HAY QUE APRENDER" },
    { BOTTLES,         "EN FREEZEEZY PEAK!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c2a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOGGY CURED - Sled found
// ============================================================

// 0xC2B - Boggy cured, finds sled (B:7 T:1) - TRIGGER \x02
static DialogLine c2b_b[] = {
    { BOGGY,           "\xA1" "ME SIENTO MUCHO MEJOR!" },
    { BOGGY,           "OYE... \xBF" "QU\xC9 ES ESO" },
    { BOGGY,           "DE ALL\xC1? \xA1" "ES UN TRINEO!" },
    { BOGGY,           "\xA1" "GENIAL! \xA1" "SIEMPRE QUISE" },
    { BOGGY,           "UNO!" },
    { DIALOG_TRIGGER,  "\x02" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c2b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES FP ENTRANCE
// ============================================================

// 0xF6C - Bottles FP entrance (B:2 T:1)
static DialogLine f6c_b[] = {
    { BOTTLES,         "\xA1" "BUSQUEN MI TOPERA PARA UN NUEVO MOVIMIENTO! \xA1" "ABR\xCD" "GENSE BIEN, QUE HACE FR\xCD" "O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef fp_defs[] = {
    // Boggy sick
    DIALOG(0xBFF, bff_b, bff_t),
    // Boggy (sled racer)
    DIALOG(0xC00, c00_b, c00_t),
    DIALOG(0xC01, c01_b, c01_t),
    DIALOG(0xC02, c02_b, c02_t),
    DIALOG(0xC03, c03_b, c03_t),
    DIALOG(0xC04, c04_b, c04_t),
    DIALOG(0xC05, c05_b, c05_t),
    DIALOG(0xC06, c06_b, c06_t),
    DIALOG(0xC07, c07_b, c07_t),
    DIALOG(0xC08, c08_b, c08_t),
    DIALOG(0xC09, c09_b, c09_t),
    DIALOG(0xC0A, c0a_b, c0a_t),
    DIALOG(0xC0B, c0b_b, c0b_t),
    DIALOG(0xC0C, c0c_b, c0c_t),
    DIALOG(0xC0D, c0d_b, c0d_t),
    DIALOG(0xC0E, c0e_b, c0e_t),
    DIALOG(0xC0F, c0f_b, c0f_t),
    DIALOG(0xC10, c10_b, c10_t),
    // Freezing water
    DIALOG(0xC11, c11_b, c11_t),
    // Twinklies
    DIALOG(0xC12, c12_b, c12_t),
    DIALOG(0xC13, c13_b, c13_t),
    DIALOG(0xC14, c14_b, c14_t),
    // Twinkly Muncher
    DIALOG(0xC15, c15_b, c15_t),
    DIALOG(0xC16, c16_b, c16_t),
    // Boggy Kids
    DIALOG(0xC17, c17_b, c17_t),
    DIALOG(0xC18, c18_b, c18_t),
    DIALOG(0xC19, c19_b, c19_t),
    DIALOG(0xC1A, c1a_b, c1a_t),
    // Wozza
    DIALOG(0xC1B, c1b_b, c1b_t),
    DIALOG(0xC1C, c1c_b, c1c_t),
    DIALOG(0xC1D, c1d_b, c1d_t),
    // Boggy presents & sleep
    DIALOG(0xC1E, c1e_b, c1e_t),
    DIALOG(0xC1F, c1f_b, c1f_t),
    // Presents
    DIALOG(0xC20, c20_b, c20_t),
    DIALOG(0xC21, c21_b, c21_t),
    DIALOG(0xC22, c22_b, c22_t),
    // Bottles Beak Bomb
    DIALOG(0xC23, c23_b, c23_t),
    DIALOG(0xC24, c24_b, c24_t),
    // Twinklies retry
    DIALOG(0xC25, c25_b, c25_t),
    // Wozza again
    DIALOG(0xC26, c26_b, c26_t),
    DIALOG(0xC27, c27_b, c27_t),
    // Boggy race 2
    DIALOG(0xC28, c28_b, c28_t),
    DIALOG(0xC29, c29_b, c29_t),
    // Bottles all moves
    DIALOG(0xC2A, c2a_b, c2a_t),
    // Boggy cured sled
    DIALOG(0xC2B, c2b_b, c2b_t),
    // Bottles FP entrance
    DIALOG(0xF6C, f6c_b, f6c_t),
};

DialogDefTable fp_table = {
    fp_defs,
    sizeof(fp_defs) / sizeof(fp_defs[0])
};
