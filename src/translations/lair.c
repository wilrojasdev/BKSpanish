#include "translation.h"

/*
 * Lair Translations - Gruntilda's Lair, Dingpot, Brentilda, Note Doors
 *
 * Portraits:
 *   0xB5 = Grunty
 *   0xD8 = Dingpot
 *   0xCB = Brentilda
 *   0x83 = Bottles
 *   0x82 = Tooty / Kazooie (top dialog)
 *   0x80 = Banjo
 */

#define GRUNTY    0xB5
#define DINGPOT   0xD8
#define BRENTILDA 0xCB

/* ============================================================
 * 0xFAB - Grunty: Door needs more jiggies
 * Structure: bottom=5, top=3 (close pattern)
 * ============================================================ */
static DialogLine fab_b[] = {
    { GRUNTY,           "\xA1" "VEN AQU\xCD, OSO TORRORR\xD3N," },
    { GRUNTY,           "\xBF" "VES EL PUZZLE EN EL PORT\xD3N?" },
    { GRUNTY,           "FALTAN PIEZAS POR BUSCAR," },
    { GRUNTY,           "\xA1" "AS\xCD QUE PONTE A EXPLORAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fab_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFBD - Grunty: Not enough notes to pass
 * Structure: bottom=3, top=3 (close pattern)
 * ============================================================ */
static DialogLine fbd_b[] = {
    { GRUNTY,           "\xA1" "SIN M\xC1S NOTAS NO PODR\xC1S" },
    { GRUNTY,           "PASAR, VUELVE Y PONTE A BUSCAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fbd_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFC0 - Grunty: Have enough jiggies, complete puzzle
 * Structure: bottom=5, top=3 (close pattern)
 * ============================================================ */
static DialogLine fc0_b[] = {
    { GRUNTY,           "PRONTO AL OSO LE CAER\xC1 EL PELO," },
    { GRUNTY,           "\xA1" "VE MI RETRATO EN EL MURO CON CELO!" },
    { GRUNTY,           "ESTE CUADRO TAN BONITO ENCONTR\xC9," },
    { GRUNTY,           "\xA1" "CON M\xC1S PIEZAS DE PUZZLE COMPLETAR\xC9!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fc0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7B - Bottles: Explains jigsaw puzzle pictures
 * Structure: bottom=6, top=3 (close pattern)
 * ============================================================ */
static DialogLine f7b_b[] = {
    { BOTTLES,          "\xA1" "HAN ENCONTRADO UN CUADRO" },
    { BOTTLES,          "DE PUZZLE! S\xDA" "BANSE AL" },
    { BOTTLES,          "PODIO DEL PUZZLE" },
    { BOTTLES,          "Y LES EXPLICAR\xC9" },
    { BOTTLES,          "QU\xC9 HACER." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFBC - Bottles: Out of jiggies
 * Structure: bottom=2, top=3 (close pattern)
 * ============================================================ */
static DialogLine fbc_b[] = {
    { BOTTLES,          "HMMM... SE LES HAN ACABADO LAS PIEZAS DE PUZZLE. \xA1" "TENDR\xC1N QUE IR A BUSCAR M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fbc_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFBE - Cheating: Erase save warning
 * Structure: bottom=3, top=3 (close pattern)
 * ============================================================ */
static DialogLine fbe_b[] = {
    { GRUNTY,           "\xA1" "DEJA DE HACER TRAMPAS YA," },
    { GRUNTY,           "O TU PARTIDA BORRADA QUEDAR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fbe_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFBF - Cheating: Save erased
 * Structure: bottom=4, top=3 (close pattern)
 * ============================================================ */
static DialogLine fbf_b[] = {
    { GRUNTY,           "\xA1" "NO HAS ESCUCHADO," },
    { GRUNTY,           "POR ESO TU PARTIDA" },
    { GRUNTY,           "HA SIDO DESTRUIDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fbf_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFAD - Dingpot: First meeting (complex multi-speaker)
 * Structure: bottom=19, top=16
 * Speakers: Dingpot 0xD8, Grunty 0xB5, Kazooie 0x82, Banjo 0x80
 * ============================================================ */
static DialogLine fad_b[] = {
    /* Dingpot greets */
    { DIALOG_COND_MINIMIZE, "" },
    { DINGPOT,              "\xA1" "OOOH! \xA1" "VISITAS PARA" },
    { DINGPOT,              "DINGPOT! \xA1" "ME ENCANTA" },
    { DINGPOT,              "LA COMPA\xD1\xCD" "A!" },
    /* Dingpot confused by Kazooie */
    { DIALOG_COND_MINIMIZE, "" },
    { DINGPOT,              "\xC1" "AAH... \xBF" "QU\xC9 QUIERE" },
    { DINGPOT,              "EL P\xC1JARO RARO?" },
    /* Dingpot explains his situation */
    { DIALOG_COND_MINIMIZE, "" },
    { DINGPOT,              "\xA1" "ESO LO S\xC9 MUY BIEN! SI LE DAN SU MERECIDO A ESA VIEJA BRUJA HORRIBLE, \xA1" "POR FIN SER\xC9 LIBRE!" },
    /* Grunty threatens (rhyming couplets!) */
    { GRUNTY,               "\xA1" "CALLA YA, CALDERO IDIOTA," },
    { GRUNTY,               "\xA1" "ODIO ESTA OLLA ROTA!" },
    { GRUNTY,               "CUANDO EL JUEGO HAYA ACABADO," },
    { GRUNTY,               "\xA1" "EN TI HAR\xC9 UN GUISO ENVENENADO!" },
    /* Dingpot offers help */
    { DIALOG_COND_MINIMIZE, "" },
    { DINGPOT,              "\xA1" "ESO SUENA GENIAL!" },
    { DINGPOT,              "\xA1" "SALTEN DENTRO Y LOS" },
    { DINGPOT,              "LANZAR\xC9 HACIA ARRIBA" },
    { DINGPOT,              "CON ELLA! \xA1" "BUENA SUERTE!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine fad_t[] = {
    /* Kazooie insults Dingpot */
    { TOOTY,                "PUAJ... \xA1" "QU\xC9 PESTE" },
    { TOOTY,                "M\xC1S ASQUEROSA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY,                "ME SORPRENDE QUE ALGUIEN" },
    { TOOTY,                "TE VISITE, \xA1" "APESTOSO" },
    { TOOTY,                "CALDERO MUGRIENTO!" },
    /* Banjo calms things down */
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xC1" "AAH... SOLO QUER\xCD" "A SABER D\xD3NDE ENCONTRAR A LA BRUJA GRUNTILDA." },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "TRANQUILO, DINGPOT!" },
    { BANJO,                "CUANDO LA ENCONTREMOS" },
    { BANJO,                "YA NO MOLESTAR\xC1 A NADIE M\xC1S." },
    /* Kazooie refuses */
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY,                "\xBF" "SALTAR AH\xCD DENTRO? \xA1" "NI LOCA! \xA1" "ESE HEDOR NO SE QUITAR\xC1 NUNCA!" },
    /* Banjo overrides */
    { BANJO,                "KAZOOIE, NO HAY TIEMPO QUE PERDER. \xA1" "VAMOS A ENFRENTARNOS A LA BRUJA DE UNA VEZ!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* ============================================================
 * 0x10A1 - Brentilda: First meeting
 * Structure: bottom=5, top=3 (close pattern)
 * ============================================================ */
static DialogLine a1_b[] = {
    { BRENTILDA,        "\xA1" "HOLA, MIS H\xC9ROES! SOY BRENTILDA, LA HERMANA MENOR DE GRUNTILDA. QUIERO AYUDARLES. \xA1" "YA ES HORA DE QUE ALGUIEN LE D\xC9 UNA LECCI\xD3N A ESA VIEJA BRUJA!" },
    { BRENTILDA,        "LO S\xC9 TODO SOBRE GRUNTILDA Y EN CADA ENCUENTRO LES REVELAR\xC9 TRES DE SUS ASQUEROSOS SECRETOS." },
    { BRENTILDA,        "NO OLVIDEN MIS PISTAS, PORQUE LAS NECESITAR\xC1N M\xC1S ADELANTE." },
    { BRENTILDA,        "PULSEN B CUANDO QUIERAN O\xCDR ALGO SOBRE GRUNTILDA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xFAC - Grunty: Taunts from above (heard throughout lair)
 * Structure: bottom=4, top=3 (close pattern)
 * ============================================================ */
static DialogLine fac_b[] = {
    { GRUNTY,           "\xBF" "OYES MI RISA DE MALDAD?" },
    { GRUNTY,           "\xA1" "AQU\xCD ARRIBA ESTOY" },
    { GRUNTY,           "EN VERDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fac_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Dingpot auxiliary dialogs
 * ============================================================ */

/* 0xFBB - Dingpot: Must defeat the witch */
static DialogLine fbb_b[] = {
    { DINGPOT,          "ESTA VEZ DEBEN VENCER" },
    { DINGPOT,          "A LA BRUJA. \xA1" "YA NO" },
    { DINGPOT,          "SOPORTO VER SU ROPA" },
    { DINGPOT,          "SUCIA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fbb_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFBA - Dingpot: Asks Kazooie to brush teeth */
static DialogLine fba_b[] = {
    { DINGPOT,          "\xA1" "L\xC1VATE LOS DIENTES" },
    { DINGPOT,          "DE UNA VEZ, P\xC1JARO RARO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fba_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB9 - Dingpot: Jump in, shoot up to witch platform */
static DialogLine fb9_b[] = {
    { DINGPOT,          "\xA1" "SALTEN DENTRO Y LOS" },
    { DINGPOT,          "LANZAR\xC9 DE VUELTA" },
    { DINGPOT,          "A LA PLATAFORMA DE LA BRUJA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb9_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB8 - Dingpot: This time it'll work, fingers crossed */
static DialogLine fb8_b[] = {
    { DINGPOT,          "\xA1" "ESTA VEZ FUNCIONAR\xC1, CRUZO LOS DEDOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb8_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB7 - Dingpot: Didn't go so well, did it? */
static DialogLine fb7_b[] = {
    { DINGPOT,          "OOOH... NO HA IDO MUY BIEN, \xBF" "VERDAD?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb7_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB6 - Dingpot: Grunty cooks gross stew in me */
static DialogLine fb6_b[] = {
    { DINGPOT,          "GRUNTILDA COCINA ASQUEROSOS BREBAJES DE BRUJA EN M\xCD. \xA1" "ME DAN UNAS AGRURAS TERRIBLES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb6_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB5 - Dingpot: Grunty washes old underwear in me */
static DialogLine fb5_b[] = {
    { DINGPOT,          "SI GRUNTILDA NO LAVARA SUS VIEJOS CALZONES EN M\xCD TODO EL TIEMPO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb5_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB4 - Dingpot: Had a frying pan as friend */
static DialogLine fb4_b[] = {
    { DINGPOT,          "HACE MUCHO TEN\xCD" "A UNA SART\xC9N COMO AMIGA. LA BRUJA LE ROMPI\xD3 EL MANGO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb4_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB3 - Dingpot: Don't you want to scrub me? */
static DialogLine fb3_b[] = {
    { DINGPOT,          "\xBF" "NO QUIEREN DARME" },
    { DINGPOT,          "UNA BUENA" },
    { DINGPOT,          "RESTREGADA...?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB2 - Dingpot: Scales fall from Grunty's hair */
static DialogLine fb2_b[] = {
    { DINGPOT,          "CUANDO LA BRUJA MIRA" },
    { DINGPOT,          "DENTRO DE M\xCD, \xA1" "LE CAEN" },
    { DINGPOT,          "ESCAMAS DE SU" },
    { DINGPOT,          "PELO! IIIH..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB1 - Dingpot: Full of food scraps and filth */
static DialogLine fb1_b[] = {
    { DINGPOT,          "\xA1" "M\xCDRENME, LLENO DE" },
    { DINGPOT,          "RESTOS DE COMIDA Y" },
    { DINGPOT,          "MUGRE...!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFB0 - Dingpot: Must swallow Grunty's garbage every day */
static DialogLine fb0_b[] = {
    { DINGPOT,          "\xA1" "YO, POBRE CALDERO, DEBO" },
    { DINGPOT,          "TRAGAR LA BASURA DE" },
    { DINGPOT,          "GRUNTILDA. \xA1" "TODOS LOS D\xCD" "AS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fb0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFAF - Dingpot: Grunty keeps fish heads in me */
static DialogLine faf_b[] = {
    { DINGPOT,          "GRUNTILDA GUARDA SU COLECCI\xD3N DE VIEJAS CABEZAS DE PESCADO EN M\xCD..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine faf_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFAE - Dingpot: Grunty made toad slime and bat wing soup */
static DialogLine fae_b[] = {
    { DINGPOT,          "EL OTRO D\xCD" "A LA BRUJA" },
    { DINGPOT,          "COCIN\xD3 EN M\xCD UNA SOPA" },
    { DINGPOT,          "DE BABA DE SAPO Y" },
    { DINGPOT,          "ALAS DE MURCI\xC9LAGO." },
    { DINGPOT,          "\xA1" "QU\xC9 ASCO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fae_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7C - Bottles: Remove puzzle pieces (8B, 1T)
 * ============================================================ */
static DialogLine f7c_b[] = {
    { BOTTLES,         "PARA QUITAR PIEZAS DE" },
    { BOTTLES,         "PUZZLE, PULSA EL BOT\xD3N" },
    { BOTTLES,         "C INFERIOR." },
    { BOTTLES,         "PERO CUANDO EL CUADRO" },
    { BOTTLES,         "EST\xC9 COMPLETO," },
    { BOTTLES,         "YA NO SE PODR\xC1N" },
    { BOTTLES,         "QUITAR PIEZAS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7D - Bottles: Place all pieces at once (5B, 1T)
 * ============================================================ */
static DialogLine f7d_b[] = {
    { BOTTLES,         "SI QUIERES COLOCAR" },
    { BOTTLES,         "TODAS LAS PIEZAS DE" },
    { BOTTLES,         "UNA VEZ EN EL CUADRO," },
    { BOTTLES,         "PULSA EL GATILLO Z." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF66 - Grunty: First entry into lair (3B, 1T)
 * ============================================================ */
static DialogLine f66_b[] = {
    { GRUNTY,           "\xA1" "POR FIN LLEGASTE, OSO TONTO," },
    { GRUNTY,           "\xA1" "TE VOY A HACER PEDAZOS PRONTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f66_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF67 - Grunty: Re-enter lair after level (4B, 1T)
 * ============================================================ */
static DialogLine f67_b[] = {
    { GRUNTY,           "\xA1" "BIENVENIDO AL SUFRIMIENTO," },
    { GRUNTY,           "\xA1" "AHORA EMPIEZA EL" },
    { GRUNTY,           "TORMENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f67_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7E - Puzzle completed: Bottles + Grunty (8B, 1T)
 * Bottles announces world opened, Grunty mocks
 * ============================================================ */
static DialogLine f7e_b[] = {
    { BOTTLES,          "\xA1" "LO LOGRARON! EL CUADRO" },
    { BOTTLES,          "EST\xC1 COMPLETO Y LA" },
    { BOTTLES,          "PUERTA A MUMBO'S" },
    { BOTTLES,          "MOUNTAIN SE ABRI\xD3." },
    { GRUNTY,           "\xA1" "ESO FUE MUY F\xC1" "CIL," },
    { GRUNTY,           "\xA1" "A\xDA" "N NO HAN LOGRADO" },
    { GRUNTY,           "NADA, PAR DE IN\xDA" "TILES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7F - Bottles: First world refresher (2B, 1T)
 * ============================================================ */
static DialogLine f7f_b[] = {
    { BOTTLES,          "ESTE ES EL PRIMER MUNDO, MONTA\xD1" "A DE MUMBO. PARA ABRIR LA PUERTA, DEBEN ENCONTRAR EL CUADRO DE PUZZLE DE ESTE MUNDO. NO PUEDE ESTAR MUY LEJOS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF80 - Bottles: First world explanation (3B, 1T)
 * ============================================================ */
static DialogLine f80_b[] = {
    { BOTTLES,          "ESTE ES EL PRIMER MUNDO," },
    { BOTTLES,          "MONTA\xD1" "A DE MUMBO. PARA PODER ENTRAR, DEBEN COMPLETAR EL CUADRO DE PUZZLE." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f80_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF81 - Grunty: Game too hard? taunt (3B, 1T)
 * ============================================================ */
static DialogLine f81_b[] = {
    { GRUNTY,           "\xBF" "EL JUEGO ES MUY DIF\xCD" "CIL PARA TI?" },
    { GRUNTY,           "\xA1" "ME R\xCD" "O M\xC1S Y M\xC1S DE TI!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f81_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF58 - First picture instruction (10B, 4T)
 * "FILL IN THE MISSING SPACES WITH THE JIGSAW"
 * ============================================================ */
static DialogLine f58_b[] = {
    { BOTTLES,         "PARA ENTRAR AL MUNDO" },
    { BOTTLES,         "MOSTRADO, DEBEN LLENAR" },
    { BOTTLES,         "LOS HUECOS DEL CUADRO" },
    { BOTTLES,         "CON PIEZAS DE PUZZLE." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "ME PARECI\xD3 VER UNA" },
    { BOTTLES,         "PIEZA DE PUZZLE CERCA" },
    { BOTTLES,         "DE LA ENTRADA DEL" },
    { BOTTLES,         "GUARIDA. \xA1" "VUELVAN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f58_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "HMMM... A\xDA" "N NO HEMOS" },
    { BANJO,           "ENCONTRADO NINGUNA..." },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF59 - First piece already obtained (11B, 4T)
 * ============================================================ */
static DialogLine f59_b[] = {
    { BOTTLES,         "LA PUERTA AL MUNDO" },
    { BOTTLES,         "MOSTRADO SE ABRE CUANDO" },
    { BOTTLES,         "EL CUADRO EST\xC9 COMPLETO." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "\xA1" "GENIAL! PULSA A PARA" },
    { BOTTLES,         "COLOCAR LAS PIEZAS DE" },
    { BOTTLES,         "PUZZLE EN LOS HUECOS." },
    { BOTTLES,         "PULSA B SI NO QUIERES" },
    { BOTTLES,         "COLOCAR NINGUNA" },
    { BOTTLES,         "PIEZA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f59_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1" "LA PRIMERA PIEZA DE" },
    { KAZOOIE,         "PUZZLE YA LA TENEMOS" },
    { KAZOOIE,         "EN EL BOLSILLO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF5A - Piece obtained after first visit (4B, 3T)
 * ============================================================ */
static DialogLine f5a_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "\xA1" "GENIAL! PULSA A PARA" },
    { BOTTLES,         "LLENAR LOS HUECOS DEL CUADRO, O B SI NO QUIERES COLOCAR NINGUNA PIEZA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f5a_t[] = {
    { KAZOOIE,         "\xA1" "LA PRIMERA PIEZA DE" },
    { KAZOOIE,         "PUZZLE YA LA TENEMOS!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF64 - Note doors learn (9B, 4T)
 * ============================================================ */
static DialogLine f64_b[] = {
    { BOTTLES,         "GRUNTILDA SELL\xD3 ESTA" },
    { BOTTLES,         "PUERTA CON UN HECHIZO" },
    { BOTTLES,         "MUSICAL." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "\xA1" "NO SEAS GROSERA! PARA" },
    { BOTTLES,         "ABRIR LAS PUERTAS, DEBEN RECOGER LAS NOTAS MUSICALES EN LOS MUNDOS." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,         "EL N\xDA" "MERO EN LA PUERTA INDICA LA FUERZA DEL HECHIZO. DEBEN RECOGER AL MENOS ESA CANTIDAD DE NOTAS PARA ROMPERLO." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine f64_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,         "\xA1\xC1" "BRELA, VIEJO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xBF" "CU\xC1NTAS NECESITAMOS?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF65 - Note doors refresher (2B, 1T)
 * ============================================================ */
static DialogLine f65_b[] = {
    { BOTTLES,         "SOLO CUANDO EL TOTAL DE NOTAS RECOGIDAS SEA IGUAL O MAYOR AL N\xDA" "MERO EN LA PUERTA, PODR\xC1N ABRIRLA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f65_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * NOTES PROGRESS DIALOGS (Bottles)
 * ============================================================ */

/* 0xF74 - Bottles: enough notes for first door (B:4 T:1) */
static DialogLine f74_b[] = {
    { BOTTLES,         "\xA1" "GENIAL! \xA1" "HAN RECOGIDO" },
    { BOTTLES,         "SUFICIENTES NOTAS PARA" },
    { BOTTLES,         "ROMPER EL HECHIZO DE LA PRIMERA PUERTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f74_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF75 - Bottles: Grunty stopped you, best saved (B:4 T:1) - has 0x09 control */
static DialogLine f75_b[] = {
    { BOTTLES,         "GRUNTILDA LES IMPIDI\xD3 RECOGER TODAS LAS NOTAS. \xA1" "PERO SUS" },
    { 0x09, "" },
    { BOTTLES,         "SE GUARDAR\xC1N COMO MEJOR MARCA. \xA1" "INTENTEN RECOGER LAS 100 NOTAS DE CADA MUNDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f75_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF76 - Bottles: beat your best (B:4 T:1) */
static DialogLine f76_b[] = {
    { BOTTLES,         "\xA1" "GENIAL! \xA1" "HAN SUPERADO" },
    { BOTTLES,         "SU MEJOR MARCA" },
    { BOTTLES,         "ANTERIOR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f76_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF77 - Bottles: best score is now ~ notes (B:3 T:1) - has 0x09 control */
static DialogLine f77_b[] = {
    { BOTTLES,         "\xA1" "LA MEJOR MARCA DE ESTE MUNDO ES AHORA ~ NOTAS!" },
    { 0x09, "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f77_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF78 - Bottles: all 100 notes found (B:4 T:1) */
static DialogLine f78_b[] = {
    { BOTTLES,         "\xA1" "DE VERDAD ENCONTRARON" },
    { BOTTLES,         "LAS 100 NOTAS DE ESTE" },
    { BOTTLES,         "MUNDO! \xA1" "BRAVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f78_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * CHEATO - Magic Book Meet & Hints (portrait 0xCF)
 * ============================================================ */
#define CHEATO 0xCF

/* 0xFA5 - Cheato: first meet (B:13 T:7) */
static DialogLine fa5_b[] = {
    { CHEATO,          "\xA1" "SOY CHEATO, EL LIBRO M\xC1GICO DE TRUCOS! \xA1" "PUEDO DARLES ALGUNOS GENIALES!" },
    { GRUNTY,          "\xA1" "CALLA, LIBRO PIOJOSO," },
    { GRUNTY,          "O SUFRIR\xC1S MI MALVADO HECHIZO!" },
    { CHEATO,          "LA BRUJA PERDI\xD3 EL LIBRO," },
    { CHEATO,          "\xA1" "USTEDES ME ENCONTRARON! \xA1" "ESTA ES SU OPORTUNIDAD!" },
    { DIALOG_COND_MINIMIZE, "" },
    { CHEATO,          "\xA1" "LES REVELO UN TRUCO! \xA1" "ESCRIBAN EN EL SUELO DEL CASTILLO DE ARENA!" },
    { 0x08,            "BLUEEGGS" },
    { 0x08,            "REDFEATHERS" },
    { 0x08,            "GOLDFEATHERS" },
    { DIALOG_COND_MINIMIZE, "" },
    { CHEATO,          "\xA1" "HAY M\xC1S LIBROS ESCONDIDOS EN LA GUARIDA DE GRUNTILDA! \xA1" "ENC\xDA" "ENTRENLOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa5_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { 0x82,            "\xA1" "LOS USAREMOS SEGURO!" },
    { 0x82,            "\xA1" "SUELTA LOS TRUCOS," },
    { 0x82,            "LIBRITO M\xC1GICO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xA1" "GRACIAS, MAESTRO CHEATO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFA6 - Cheato: second meet (B:10 T:1) */
static DialogLine fa6_b[] = {
    { CHEATO,          "\xA1" "EL OSO Y EL P\xC1JARO" },
    { CHEATO,          "ENCONTRARON OTRO LIBRO!" },
    { CHEATO,          "\xA1" "POR ESO HAY OTRO TRUCO!" },
    { GRUNTY,          "\xA1" "CALLA LIBRO, Y PARA SIEMPRE," },
    { GRUNTY,          "O TODO SER\xC1 MUCHO PEOR!" },
    { CHEATO,          "\xA1" "BRUJA FEA, C\xC1LLATE T\xDA! \xA1" "ESCRIBAN EN EL SUELO DEL CASTILLO DE ARENA!" },
    { 0x08,            "BLUEEGGS" },
    { 0x08,            "REDFEATHERS" },
    { 0x08,            "GOLDFEATHERS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa6_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFA7 - Cheato: third meet (B:9 T:1) */
static DialogLine fa7_b[] = {
    { CHEATO,          "VAN AVANZANDO BIEN," },
    { CHEATO,          "AMIGOS. \xA1" "POR ESO OTRO C\xD3" "DIGO M\xC1GICO!" },
    { GRUNTY,          "NI LLOROS NI LAMENTOS SERVIR\xC1N," },
    { GRUNTY,          "\xA1" "PRONTO ESTE LIBRITO ARDER\xC1!" },
    { CHEATO,          "\xA1" "LA BRUJA JAM\xC1S ME ENCONTRAR\xC1! \xA1" "EL C\xD3" "DIGO PARA EL SUELO DEL CASTILLO!" },
    { 0x08,            "BLUEEGGS" },
    { 0x08,            "REDFEATHERS" },
    { 0x08,            "GOLDFEATHERS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa7_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF83 - Cheato hint: blue eggs (B:2 T:1) */
static DialogLine f83_b[] = {
    { CHEATO,          "EL C\xD3" "DIGO ES '\xFD" "hBLUEEGGS\xFD" "l'. \xA1" "ESCR\xCD" "BANLO EN EL SUELO DEL CASTILLO DE ARENA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f83_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF84 - Cheato hint: red feathers (B:2 T:1) */
static DialogLine f84_b[] = {
    { CHEATO,          "\xA1" "ESCRIBAN EL C\xD3" "DIGO M\xC1GICO '\xFD" "hREDFEATHERS\xFD" "l' EN EL SUELO DEL CASTILLO DE ARENA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f84_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xF85 - Cheato hint: gold feathers (B:2 T:1) */
static DialogLine f85_b[] = {
    { CHEATO,          "EL C\xD3" "DIGO '\xFD" "hGOLDFEATHERS\xFD" "l' VA EN EL SUELO DEL CASTILLO DE ARENA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f85_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * CHEATO - Cheat Activations
 * ============================================================ */

/* 0xFA8 - Cheato: Blue Eggs cheat (B:6 T:1) */
static DialogLine fa8_b[] = {
    { CHEATO,          "\xA1" "200 HUEVOS SON SUYOS!" },
    { CHEATO,          "\xA1" "AHORA PUEDEN CARGAR" },
    { CHEATO,          "HASTA 200 HUEVOS!" },
    { GRUNTY,          "ES LA MISMA HISTORIA DE SIEMPRE," },
    { GRUNTY,          "\xA1" "NI LOS HUEVOS AZULES LES AYUDAR\xC1N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa8_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFA9 - Cheato: Red Feathers cheat (B:4 T:1) */
static DialogLine fa9_b[] = {
    { CHEATO,          "\xA1" "100 PLUMAS ROJAS SON SUYAS! \xA1" "AHORA PUEDEN CARGAR HASTA 100 DE ESAS PLUMAS!" },
    { GRUNTY,          "NI LAS PLUMAS LES AYUDAR\xC1N," },
    { GRUNTY,          "\xBF" "ACASO NUNCA SER\xC1N M\xC1S LISTOS?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa9_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xFAA - Cheato: Gold Feathers cheat (B:7 T:1) */
static DialogLine faa_b[] = {
    { CHEATO,          "20 PLUMAS DORADAS" },
    { CHEATO,          "\xA1" "SON SUYAS! \xA1" "AHORA PUEDEN" },
    { CHEATO,          "CARGAR HASTA 20 DE" },
    { CHEATO,          "ESAS PLUMAS!" },
    { GRUNTY,          "LA ESTUPIDEZ SE LES NOTA EN LA CARA," },
    { GRUNTY,          "\xA1" "NI LAS PLUMAS LES AYUDAR\xC1N PARA NADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine faa_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * WADING BOOTS MEET & ITEMS (portrait 0xA6)
 * ============================================================ */
#define WADING_BOOTS 0xA6

/* 0xDA5 - Wading Boots: not learned yet (B:5 T:1) */
static DialogLine da5_b[] = {
    { WADING_BOOTS,    "\xA1" "OYE! \xA1" "PIES FUERA! \xA1" "ANTES" },
    { WADING_BOOTS,    "DE HABLAR CON BOTTLES" },
    { WADING_BOOTS,    "NO PODR\xC1N USAR" },
    { WADING_BOOTS,    "NADA AQU\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da5_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * TURBO TRAINERS (portrait via Bottles 0x83)
 * ============================================================ */

/* 0xA84 - Turbo Trainers learn (B:9 T:1) */
static DialogLine a84_b[] = {
    { BOTTLES,         "\xA1" "ESOS SON ZAPATOS TURBO GENIALES!" },
    { DIALOG_TRIGGER,  "\x03" },
    { BOTTLES,         "KAZOOIE PUEDE PON\xC9RSELOS" },
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

/* 0xA85 - Turbo Trainers refresher (B:2 T:1) */
static DialogLine a85_b[] = {
    { BOTTLES,         "\xA1" "P\xD3NGANSE LOS ZAPATOS TURBO PARA QUE KAZOOIE CORRA A TODA VELOCIDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a85_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * JUMP PAD & FLIGHT PAD DISCOVERED (Bottles)
 * ============================================================ */

/* 0xA24 - Jump pad discovered (B:2 T:1) */
static DialogLine a24_b[] = {
    { BOTTLES,         "ESTA PLATAFORMA SIRVE PARA EL SUPERSALTO DE KAZOOIE. \xA1" "B\xDA" "SQUENME Y LES ENSE\xD1" "O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a24_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0xA25 - Flight pad discovered (B:2 T:1) */
static DialogLine a25_b[] = {
    { BOTTLES,         "ESA ES UNA PLATAFORMA DE VUELO. \xA1" "PRIMERO BUSQUEN MI TOPERA PARA APRENDER A VOLAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine a25_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF79 - Warp Cauldron: first activated (B:5 T:1)
 * ============================================================ */
#define CAULDRON 0xCA
static DialogLine f79_b[] = {
    { CAULDRON,         "\xA1" "EL CALDERO M\xC1GICO EST\xC1" },
    { CAULDRON,         "ACTIVADO! \xA1" "ENCUENTRA DOS" },
    { CAULDRON,         "DEL MISMO COLOR PARA" },
    { CAULDRON,         "CREAR UN ATAJO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f79_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0xF7A - Warp Cauldron: pair found (B:2 T:1)
 * ============================================================ */
static DialogLine f7a_b[] = {
    { CAULDRON,         "\xA1" "HOLA! \xA1" "EL ATAJO AHORRA MUCHO CAMINO! \xA1" "M\xC9TETE EN EL CALDERO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f7a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef lair_defs[] = {
    DIALOG(0xFAB, fab_b, fab_t),     /* Grunty: door needs jiggies */
    DIALOG(0xFBD, fbd_b, fbd_t),     /* Grunty: not enough notes */
    DIALOG(0xFC0, fc0_b, fc0_t),     /* Grunty: have enough jiggies */
    DIALOG(0xF7B, f7b_b, f7b_t),     /* Bottles: jigsaw picture */
    DIALOG(0xFBC, fbc_b, fbc_t),     /* Bottles: out of jiggies */
    DIALOG(0xFBE, fbe_b, fbe_t),     /* Cheating: erase save warning */
    DIALOG(0xFBF, fbf_b, fbf_t),     /* Cheating: save erased */
    DIALOG(0xFAD, fad_b, fad_t),     /* Dingpot: first meeting */
    DIALOG(0xFAC, fac_b, fac_t),     /* Grunty: taunts from above */
    DIALOG(0xFBB, fbb_b, fbb_t),     /* Dingpot: must defeat witch */
    DIALOG(0xFBA, fba_b, fba_t),     /* Dingpot: brush teeth */
    DIALOG(0xFB9, fb9_b, fb9_t),     /* Dingpot: jump in, shoot up */
    DIALOG(0xFB8, fb8_b, fb8_t),     /* Dingpot: fingers crossed */
    DIALOG(0xFB7, fb7_b, fb7_t),     /* Dingpot: didn't go well */
    DIALOG(0xFB6, fb6_b, fb6_t),     /* Dingpot: gross stew */
    DIALOG(0xFB5, fb5_b, fb5_t),     /* Dingpot: old underwear */
    DIALOG(0xFB4, fb4_b, fb4_t),     /* Dingpot: frying pan friend */
    DIALOG(0xFB3, fb3_b, fb3_t),     /* Dingpot: scrub me */
    DIALOG(0xFB2, fb2_b, fb2_t),     /* Dingpot: scales from hair */
    DIALOG(0xFB1, fb1_b, fb1_t),     /* Dingpot: food scraps */
    DIALOG(0xFB0, fb0_b, fb0_t),     /* Dingpot: Grunty's garbage */
    DIALOG(0xFAF, faf_b, faf_t),     /* Dingpot: fish heads */
    DIALOG(0xFAE, fae_b, fae_t),     /* Dingpot: toad soup */
    /* Grunty lair entrance & taunts */
    DIALOG(0xF66, f66_b, f66_t),     /* Grunty: first lair entrance */
    DIALOG(0xF67, f67_b, f67_t),     /* Grunty: re-enter lair */
    DIALOG(0xF7E, f7e_b, f7e_t),     /* Puzzle complete: Bottles + Grunty */
    DIALOG(0xF7F, f7f_b, f7f_t),     /* Bottles: first world refresher */
    DIALOG(0xF80, f80_b, f80_t),     /* Bottles: first world explanation */
    DIALOG(0xF81, f81_b, f81_t),     /* Grunty: game too hard? */
    /* Puzzle board instructions */
    DIALOG(0xF7C, f7c_b, f7c_t),     /* Remove puzzle pieces */
    DIALOG(0xF7D, f7d_b, f7d_t),     /* Place all pieces at once */
    /* Puzzle board & Note doors */
    DIALOG(0xF58, f58_b, f58_t),     /* First picture instruction */
    DIALOG(0xF59, f59_b, f59_t),     /* First piece already obtained */
    DIALOG(0xF5A, f5a_b, f5a_t),     /* Piece obtained after */
    DIALOG(0xF64, f64_b, f64_t),     /* Note doors learn */
    DIALOG(0xF65, f65_b, f65_t),     /* Note doors refresher */
    /* Warp Cauldrons */
    DIALOG(0xF79, f79_b, f79_t),     /* Cauldron: first activated */
    DIALOG(0xF7A, f7a_b, f7a_t),     /* Cauldron: pair found */
    /* Notes progress */
    /* Cheato meet & hints */
    DIALOG(0xFA5, fa5_b, fa5_t),     /* Cheato: first meet */
    DIALOG(0xFA6, fa6_b, fa6_t),     /* Cheato: second meet */
    DIALOG(0xFA7, fa7_b, fa7_t),     /* Cheato: third meet */
    DIALOG(0xF83, f83_b, f83_t),     /* Cheato: hint blue eggs */
    DIALOG(0xF84, f84_b, f84_t),     /* Cheato: hint red feathers */
    DIALOG(0xF85, f85_b, f85_t),     /* Cheato: hint gold feathers */
    /* Cheato activations */
    DIALOG(0xFA8, fa8_b, fa8_t),     /* Cheato: blue eggs */
    DIALOG(0xFA9, fa9_b, fa9_t),     /* Cheato: red feathers */
    DIALOG(0xFAA, faa_b, faa_t),     /* Cheato: gold feathers */
    /* Items & Pads */
};

DialogDefTable lair_table = {
    lair_defs,
    sizeof(lair_defs) / sizeof(lair_defs[0])
};
