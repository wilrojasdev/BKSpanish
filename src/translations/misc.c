#include "translation.h"

/*
 * Misc Translations - Missing assets, Mr. Vile (BGS extras),
 * Caterpillar, Mumbo secrets, Bottles Bonus, Stop'n'Swop
 *
 * Portraits:
 *   0x83 = Bottles
 *   0x80 = Banjo
 *   0x81 = Kazooie
 *   0x84 = Mumbo
 *   0x8B = Mr. Vile
 *   0xBD = Caterpillar
 *   0xD9 = Kazooie (alt sprite, used in Mr. Vile context)
 */

#define MR_VILE_P  0x8B
#define CATER_P    0xBD
#define KAZ_ALT    0xD9

/* ============================================================
 * 0x0B4F - Bottles: eggs capacity (portrait 0x83)
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine b4f_b[] = {
    { BOTTLES,          "KAZOOIE PUEDE CARGAR" },
    { BOTTLES,          "HASTA 100 HUEVOS A" },
    { BOTTLES,          "LA VEZ. \xA1" "AS\xCD QUE" },
    { BOTTLES,          "RECOJAN MUCHOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b4f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0B50 - Bottles: backpack storage
 * Structure: bottom=3, top=1
 * ============================================================ */
static DialogLine b50_b[] = {
    { BOTTLES,          "SI ENCUENTRAN UN OBJETO Y NO LO NECESITAN AHORA," },
    { BOTTLES,          "KAZOOIE LO GUARDAR\xC1 EN LA MOCHILA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine b50_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C90 - Mr. Vile: challenge (portrait 0x8B), uses 0x01=CHOICE
 * Structure: bottom=7, top=1
 * ============================================================ */
static DialogLine c90_b[] = {
    { MR_VILE_P,        "\xBF" "HAS JUNTADO UNAS" },
    { MR_VILE_P,        "VIDAS EXTRAS SABROSAS?" },
    { MR_VILE_P,        "PULSA A PARA ACEPTAR" },
    { MR_VILE_P,        "EL DESAF\xCD" "O," },
    { MR_VILE_P,        "O B PARA" },
    { MR_VILE_P,        "ESCABULLIRTE!" },
    { 0x01, "" },
};
static DialogLine c90_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C91 - Mr. Vile: retry
 * Structure: bottom=4, top=1
 * ============================================================ */
static DialogLine c91_b[] = {
    { MR_VILE_P,        "\xBF" "QUIERES PROBAR SUERTE" },
    { MR_VILE_P,        "OTRA VEZ? PULSA A" },
    { MR_VILE_P,        "PARA INTENTARLO O B PARA HUIR!" },
    { 0x01, "" },
};
static DialogLine c91_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C92 - Mr. Vile: wins
 * Structure: bottom=3, top=1
 * ============================================================ */
static DialogLine c92_b[] = {
    { MR_VILE_P,        "\xA1" "HURRA! \xA1" "MR. VILE GANA!" },
    { MR_VILE_P,        "\xA1" "AHORA TENGO HAMBRE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c92_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C93 - Mr. Vile: you don't learn
 * Structure: bottom=4, top=1
 * ============================================================ */
static DialogLine c93_b[] = {
    { MR_VILE_P,        "\xA1" "NO APRENDES MUCHO," },
    { MR_VILE_P,        "PEQUE\xD1" "O! \xA1" "DAME ESA" },
    { MR_VILE_P,        "DELICIOSA VIDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c93_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C94 - Mr. Vile: laughing
 * Structure: bottom=2, top=1
 * ============================================================ */
static DialogLine c94_b[] = {
    { MR_VILE_P,        "\xA1" "JAJAJA! QU\xC9 PENA ME DAS. PEQUE\xD1" "O MONTONCITO VERDE DE MISERIA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c94_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C95 - Mr. Vile: lucky
 * Structure: bottom=3, top=1
 * ============================================================ */
static DialogLine c95_b[] = {
    { MR_VILE_P,        "\xA1" "PARECES TENER SUERTE!" },
    { MR_VILE_P,        "PERO SOLO TENDR\xC1S PREMIO SI GANAS TODOS LOS JUEGOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c95_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C96 - Mr. Vile: won again
 * Structure: bottom=3, top=1
 * ============================================================ */
static DialogLine c96_b[] = {
    { MR_VILE_P,        "\xA1" "HAS GANADO DE NUEVO!" },
    { MR_VILE_P,        "PERO GUARDAR\xC9 TU PREMIO HASTA EL PR\xD3XIMO JUEGO. \xA1" "JAJA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c96_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0C97 - Mr. Vile: cheater (complex with Kazooie 0xD9 response)
 * Structure: bottom=5, top=4
 * ============================================================ */
static DialogLine c97_b[] = {
    { MR_VILE_P,            "GRRRR... \xA1" "HAS HECHO TRAMPA! \xA1" "LOS TRAMPOSOS NO RECIBEN NADA DE M\xCD!" },
    { DIALOG_COND_MINIMIZE, "" },
    { MR_VILE_P,            "\xA1" "PARA ESO PRIMERO" },
    { MR_VILE_P,            "TIENES QUE ATRAPARME!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine c97_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZ_ALT,              "\xA1" "OYE, BOCAZAS!" },
    { KAZ_ALT,              "\xA1" "O SUELTAS EL PREMIO O TE ARRANCO LAS ESCAMAS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* ============================================================
 * 0x0C98 - Mr. Vile: gives prize
 * Structure: bottom=4, top=1
 * ============================================================ */
static DialogLine c98_b[] = {
    { MR_VILE_P,        "EST\xC1 BIEN, \xA1" "HAS" },
    { MR_VILE_P,        "GANADO! \xA1" "AQU\xCD EST\xC1" },
    { MR_VILE_P,        "TU RECOMPENSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c98_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0CC7 - Caterpillar: warning (portrait 0xBD)
 * Structure: bottom=3, top=1
 * ============================================================ */
static DialogLine cc7_b[] = {
    { CATER_P,          "ME TEMO QUE A LOS" },
    { CATER_P,          "ANIMALES HAMBRIENTOS LES GUSTAN LAS ORUGAS..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cc7_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DAD - Mumbo: pumpkin joke
 * Structure: bottom=2, top=1
 * ============================================================ */
static DialogLine dad_b[] = {
    { MUMBO,            "\xA1" "CALABAZAS DAR HAMBRE A MUMBO! YO PREPARAR OLLA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine dad_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DAE - Mumbo: secret T-Rex spell
 * Structure: bottom=2, top=1
 * ============================================================ */
static DialogLine dae_b[] = {
    { MUMBO,            "\xA1" "AH, ENCONTRAR HECHIZO SECRETO! MUMBO CONVERTIR EN GRAN T-REX, \xA1" "DESPU\xC9S AYUDAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine dae_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DAF - Mumbo: T-Rex joke
 * Structure: bottom=4, top=1
 * ============================================================ */
static DialogLine daf_b[] = {
    { MUMBO,            "HOHOHO... MUMBO HACER" },
    { MUMBO,            "BUENA BROMA. \xA1" "NADA DE T-REX!" },
    { MUMBO,            "\xA1" "HECHIZO MUY BUENO, DEJAR PARA BANJO 2!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine daf_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DB3 - Banjo: finds egg (B:1, T:3)
 * NOTE: B has 1 entry C_ALT, T has real text
 * ============================================================ */
static DialogLine db3_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db3_t[] = {
    { BANJO,            "\xA1" "AH, UN HUEVO! \xA1" "QUI\xC9N" },
    { BANJO,            "SABE PARA QU\xC9 SERVIR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DB4 - Banjo: finds another egg (B:1, T:2)
 * ============================================================ */
static DialogLine db4_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db4_t[] = {
    { BANJO,            "\xA1" "HOHO, OTRO DE ESOS HUEVOS RAROS!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0DB5 - Kazooie: finds ice key (B:1, T:4)
 * ============================================================ */
static DialogLine db5_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine db5_t[] = {
    { KAZOOIE,          "\xA1" "VAYA! \xA1" "UNA LLAVE DE" },
    { KAZOOIE,          "HIELO! \xA1" "MEJOR LA" },
    { KAZOOIE,          "GUARDAMOS BIEN!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * BOTTLES BONUS GAME DIALOGS (0x0E21 - 0x0E38)
 * ============================================================ */

/* 0x0E21 - Bottles: finds secret game (B:4, T:4) - complex with COND_M */
static DialogLine e21_b[] = {
    { BOTTLES,              "\xA1" "VAYA, VAYA! \xA1" "HE ENCONTRADO UN JUEGO SECRETO ESCONDIDO EN EL C\xD3" "DIGO DEL JUEGO!" },
    { BOTTLES,              "\xBF" "QUIERES ECHAR UN VISTAZO?" },
    { BOTTLES,              "PULSA A PARA JUGAR O B PARA RECHAZAR." },
    { 0x01, "" },
};
static DialogLine e21_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "UN JUEGO SECRETO? \xA1" "SUENA ABURRIDO!" },
    { KAZOOIE,              "\xA1" "SEGURO QUE ES UNA PORQUER\xCD" "A!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E22 - Puzzle instructions (B:12, T:1) - 11 BOTTLES + C_ALT */
static DialogLine e22_b[] = {
    { BOTTLES,          "\xA1" "BIENVENIDO AL JUEGO BONUS" },
    { BOTTLES,          "DE BOTTLES! ES MUY SENCILLO:" },
    { BOTTLES,          "TIENES QUE COMPLETAR" },
    { BOTTLES,          "UN PUZZLE DE UNA" },
    { BOTTLES,          "IMAGEN DEL JUEGO." },
    { BOTTLES,          "USA EL STICK PARA" },
    { BOTTLES,          "MOVER EL CURSOR Y" },
    { BOTTLES,          "A PARA COLOCAR PIEZAS." },
    { BOTTLES,          "\xA1" "TIENES TIEMPO LIMITADO," },
    { BOTTLES,          "AS\xCD QUE DATE PRISA!" },
    { BOTTLES,          "\xA1" "BUENA SUERTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e22_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E23 - Z-trigger reminder (B:2, T:1) */
static DialogLine e23_b[] = {
    { BOTTLES,          "RECUERDA: PULSA Z PARA VER LA IMAGEN COMPLETA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e23_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E24 - Controls reminder (B:2, T:1) */
static DialogLine e24_b[] = {
    { BOTTLES,          "USA EL STICK PARA MOVERTE Y A PARA SELECCIONAR PIEZAS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e24_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E25 - Too hard? (B:3, T:1) */
static DialogLine e25_b[] = {
    { BOTTLES,          "\xBF" "MUY DIF\xCD" "CIL PARA TI?" },
    { BOTTLES,          "\xA1" "VAMOS, NO TE RINDAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e25_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E26 - Time's up (B:4, T:1) */
static DialogLine e26_b[] = {
    { BOTTLES,          "\xA1" "SE ACAB\xD3 EL TIEMPO!" },
    { BOTTLES,          "NO HAS COMPLETADO" },
    { BOTTLES,          "EL PUZZLE A TIEMPO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e26_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E27 - Completed! sandcastle code reveal (B:8, T:3)
 * complex with COND_M, code word BOTTLESBONUSONE */
static DialogLine e27_b[] = {
    { BOTTLES,              "\xA1" "GENIAL! \xA1" "HAS COMPLETADO" },
    { BOTTLES,              "EL PRIMER PUZZLE!" },
    { BOTTLES,              "COMO PREMIO, AQU\xCD" },
    { BOTTLES,              "TIENES UN C\xD3" "DIGO SECRETO" },
    { BOTTLES,              "PARA EL CASTILLO DE ARENA:" },
    { BOTTLES,              "BOTTLESBONUSONE" },
    { BOTTLES,              "\xA1" "RECUERDA ESAS LETRAS!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e27_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "VAYA C\xD3" "DIGO M\xC1S TONTO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E28 - Stage 2 (B:3, T:1) */
static DialogLine e28_b[] = {
    { BOTTLES,          "\xA1" "PREP\xC1RATE PARA LA SEGUNDA FASE!" },
    { BOTTLES,          "\xA1" "ESTA VEZ SER\xC1 M\xC1S DIF\xCD" "CIL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e28_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E29 - Stage 2 complete, code BOTTLESBONUSTWO (B:2, T:1) */
static DialogLine e29_b[] = {
    { BOTTLES,          "\xA1" "SEGUNDA FASE COMPLETADA! EL C\xD3" "DIGO ES: BOTTLESBONUSTWO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e29_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2A - Ready for stage 3? (B:2, T:1) */
static DialogLine e2a_b[] = {
    { BOTTLES,          "\xBF" "LISTO PARA LA TERCERA FASE? \xA1" "AQU\xCD VAMOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2B - Stage 3 complete, code BOTTLESBONUSTHREE (B:2, T:1) */
static DialogLine e2b_b[] = {
    { BOTTLES,          "\xA1" "TERCERA FASE COMPLETADA! C\xD3" "DIGO: BOTTLESBONUSTHREE" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2C - Stage 4 (B:3, T:1) */
static DialogLine e2c_b[] = {
    { BOTTLES,          "\xA1" "CUARTA FASE!" },
    { BOTTLES,          "\xA1" "ESTO SE PONE SERIO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2D - Stage 4 complete, code BOTTLESBONUSFOUR (B:4, T:1) */
static DialogLine e2d_b[] = {
    { BOTTLES,          "\xA1" "IMPRESIONANTE! \xA1" "CUARTA" },
    { BOTTLES,          "FASE COMPLETADA!" },
    { BOTTLES,          "C\xD3" "DIGO: BOTTLESBONUSFOUR" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2E - Stage 5 (B:2, T:1) */
static DialogLine e2e_b[] = {
    { BOTTLES,          "\xA1" "QUINTA FASE! \xA1" "CASI LLEGAS AL FINAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E2F - Stage 5 complete, code BOTTLESBONUSFIVE (B:2, T:1) */
static DialogLine e2f_b[] = {
    { BOTTLES,          "\xA1" "QUINTA FASE COMPLETADA! C\xD3" "DIGO: BOTTLESBONUSFIVE" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e2f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E30 - Last stage (B:2, T:1) */
static DialogLine e30_b[] = {
    { BOTTLES,          "\xA1\xDA" "LTIMA FASE! \xA1" "DA LO MEJOR DE TI!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e30_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E31 - Final complete, code BIGBOTTLESBONUS (B:3, T:1) */
static DialogLine e31_b[] = {
    { BOTTLES,          "\xA1" "INCRE\xCD" "BLE! \xA1" "HAS COMPLETADO TODAS LAS FASES!" },
    { BOTTLES,          "\xA1" "EL \xDA" "LTIMO C\xD3" "DIGO ES: BIGBOTTLESBONUS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e31_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E32 - Had enough (B:3, T:1) */
static DialogLine e32_b[] = {
    { BOTTLES,          "\xBF" "YA TUVISTE SUFICIENTE?" },
    { BOTTLES,          "\xA1" "VUELVE CUANDO QUIERAS INTENTARLO DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e32_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E33 - Special prize (B:5, T:3) - complex with COND_M */
static DialogLine e33_b[] = {
    { BOTTLES,              "\xA1" "ESPERA! \xA1" "HAY UN" },
    { BOTTLES,              "PREMIO ESPECIAL SI" },
    { BOTTLES,              "COMPLETAS TODOS LOS" },
    { BOTTLES,              "PUZZLES SIN FALLAR!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e33_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "OTRO PREMIO? \xA1" "SEGURO QUE ES UNA BASURA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E34 - Special complete, code WISHYWASHYBANJO (B:8, T:4) - complex with COND_M */
static DialogLine e34_b[] = {
    { BOTTLES,              "\xA1" "FANT\xC1STICO! \xA1" "HAS GANADO" },
    { BOTTLES,              "EL PREMIO ESPECIAL!" },
    { BOTTLES,              "VE AL CASTILLO DE ARENA" },
    { BOTTLES,              "EN LA PLAYA DE TESORO" },
    { BOTTLES,              "Y ESCRIBE ESTE C\xD3" "DIGO:" },
    { BOTTLES,              "WISHYWASHYBANJO" },
    { BOTTLES,              "\xA1" "ES UN HECHIZO SECRETO!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e34_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "WISHYWASHY?" },
    { KAZOOIE,              "\xA1" "SUENA A BA\xD1" "O DE BURBUJAS, NO A HECHIZO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E35 - Code reminder list (B:10, T:1) */
static DialogLine e35_b[] = {
    { BOTTLES,          "\xBF" "OLVIDASTE LOS C\xD3" "DIGOS?" },
    { BOTTLES,          "AQU\xCD VAN DE NUEVO:" },
    { BOTTLES,          "1: BOTTLESBONUSONE" },
    { BOTTLES,          "2: BOTTLESBONUSTWO" },
    { BOTTLES,          "3: BOTTLESBONUSTHREE" },
    { BOTTLES,          "4: BOTTLESBONUSFOUR" },
    { BOTTLES,          "5: BOTTLESBONUSFIVE" },
    { BOTTLES,          "FINAL: BIGBOTTLESBONUS" },
    { BOTTLES,          "ESPECIAL: WISHYWASHYBANJO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e35_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E36 - Washy transformation (B:3, T:1), code NOBONUS */
static DialogLine e36_b[] = {
    { BOTTLES,          "\xA1" "OH NO! \xA1" "ESE C\xD3" "DIGO ERA UNA TRAMPA!" },
    { BOTTLES,          "\xA1" "ESCRIBE NOBONUS PARA DESHACERLO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e36_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E37 - Don't waste time (B:5, T:1) */
static DialogLine e37_b[] = {
    { BOTTLES,          "NO PIERDAS EL TIEMPO" },
    { BOTTLES,          "POR AQU\xCD, \xA1" "HAY MUNDOS" },
    { BOTTLES,          "QUE EXPLORAR Y PIEZAS" },
    { BOTTLES,          "QUE RECOGER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e37_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E38 - Cheating warning 3rd code (B:9, T:1), ends with CLOSE (0x03) */
static DialogLine e38_b[] = {
    { BOTTLES,          "\xA1" "EH, EH, EH!" },
    { BOTTLES,          "\xBF" "DE D\xD3NDE SACASTE" },
    { BOTTLES,          "ESE C\xD3" "DIGO?" },
    { BOTTLES,          "\xA1" "ESO ES HACER TRAMPAS!" },
    { BOTTLES,          "SE SUPONE QUE DEBES" },
    { BOTTLES,          "GANAR LOS PUZZLES" },
    { BOTTLES,          "PARA CONSEGUIR" },
    { BOTTLES,          "LOS C\xD3" "DIGOS..." },
    { DIALOG_CLOSE,     "" },
};
static DialogLine e38_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * STOP'N'SWOP / MUMBO SECRETS (0x0E39 - 0x0E3E)
 * ============================================================ */

/* 0x0E39 - Find secret at beach (B:6, T:5) - complex */
static DialogLine e39_b[] = {
    { MUMBO,                "MUMBO SABER SECRETO..." },
    { MUMBO,                "EN PLAYA DE TESORO HAY ALGO" },
    { MUMBO,                "ESCONDIDO DENTRO DE" },
    { MUMBO,                "GRAN ESTATUA." },
    { MUMBO,                "\xA1" "ROMPER PARA ENCONTRAR!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e39_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "SECRETOS? \xA1" "SUENA INTERESANTE!" },
    { KAZOOIE,              "\xA1" "M\xC1S VALE QUE VALGA LA PENA, CABEZ\xD3N!" },
    { BANJO,                "\xA1" "VAMOS A INVESTIGAR!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E3A - Climb to top (B:7, T:9) - very complex */
static DialogLine e3a_b[] = {
    { MUMBO,                "MUMBO TENER OTRO SECRETO..." },
    { MUMBO,                "EN MUNDO DE INVIERNO," },
    { MUMBO,                "SUBIR HASTA LO M\xC1S" },
    { MUMBO,                "ALTO DEL \xC1RBOL NAVIDE\xD1" "O." },
    { MUMBO,                "\xA1" "ALL\xCD ESPERAR" },
    { MUMBO,                "SORPRESA!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e3a_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "SUBIR UN \xC1RBOL?" },
    { KAZOOIE,              "\xA1" "PARA ESO ESTOY YO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xBF" "Y QU\xC9 HAY AH\xCD ARRIBA?" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "D\xC9JATE DE PREGUNTAS" },
    { KAZOOIE,              "Y VAMOS DE UNA VEZ!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E3B - Next secret in cold snow (B:2, T:3) */
static DialogLine e3b_b[] = {
    { MUMBO,                "EN TIERRA DE NIEVE FR\xCD" "A HAY HUEVO SECRETO. \xA1" "MUMBO NO SABER M\xC1S!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e3b_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "OTRO HUEVO! \xBF" "QU\xC9 HAR\xC1N CON TANTOS HUEVOS?" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E3C - Wozza's cave ice key (B:3, T:8) - very complex */
static DialogLine e3c_b[] = {
    { MUMBO,                "MUMBO SABER DE LLAVE..." },
    { MUMBO,                "EN CUEVA DE MORSA MIEDOSA HAY LLAVE DE HIELO. \xA1" "MUY BRILLANTE!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e3c_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "UNA LLAVE DE HIELO?" },
    { KAZOOIE,              "\xA1" "GENIAL! \xBF" "Y D\xD3NDE SE USA?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xBF" "LA MORSA NO" },
    { BANJO,                "SE MOLESTAR\xC1?" },
    { KAZOOIE,              "\xA1" "QUE SE AGUANTE!" },
    { DIALOG_CLOSE_ALT,     "" },
};

/* 0x0E3D - Secret in hot desert (B:3, T:1) */
static DialogLine e3d_b[] = {
    { MUMBO,            "EN DESIERTO CALIENTE" },
    { MUMBO,            "TAMBI\xC9N HABER SECRETO. \xA1" "MUMBO NO AGUANTAR CALOR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e3d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0E3E - Mumbo won't tell (B:3, T:5) */
static DialogLine e3e_b[] = {
    { MUMBO,                "MUMBO NO DECIR M\xC1S..." },
    { MUMBO,                "\xA1" "SECRETOS SER SECRETOS POR ALGO!" },
    { DIALOG_CLOSE_ALT,     "" },
};
static DialogLine e3e_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "VAMOS, CABEZ\xD3N!" },
    { KAZOOIE,              "\xA1" "SUELTA TODO LO QUE SABES!" },
    { BANJO,                "D\xC9JALO, KAZOOIE. YA NOS HA AYUDADO BASTANTE." },
    { DIALOG_CLOSE_ALT,     "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef misc_defs[] = {
    DIALOG(0x0B4F, b4f_b, b4f_t),
    DIALOG(0x0B50, b50_b, b50_t),
    DIALOG(0x0C90, c90_b, c90_t),
    DIALOG(0x0C91, c91_b, c91_t),
    DIALOG(0x0C92, c92_b, c92_t),
    DIALOG(0x0C93, c93_b, c93_t),
    DIALOG(0x0C94, c94_b, c94_t),
    DIALOG(0x0C95, c95_b, c95_t),
    DIALOG(0x0C96, c96_b, c96_t),
    DIALOG(0x0C97, c97_b, c97_t),
    DIALOG(0x0C98, c98_b, c98_t),
    DIALOG(0x0CC7, cc7_b, cc7_t),
    DIALOG(0x0DAD, dad_b, dad_t),
    DIALOG(0x0DAE, dae_b, dae_t),
    DIALOG(0x0DAF, daf_b, daf_t),
    DIALOG(0x0DB3, db3_b, db3_t),
    DIALOG(0x0DB4, db4_b, db4_t),
    DIALOG(0x0DB5, db5_b, db5_t),
    DIALOG(0x0E21, e21_b, e21_t),
    DIALOG(0x0E22, e22_b, e22_t),
    DIALOG(0x0E23, e23_b, e23_t),
    DIALOG(0x0E24, e24_b, e24_t),
    DIALOG(0x0E25, e25_b, e25_t),
    DIALOG(0x0E26, e26_b, e26_t),
    DIALOG(0x0E27, e27_b, e27_t),
    DIALOG(0x0E28, e28_b, e28_t),
    DIALOG(0x0E29, e29_b, e29_t),
    DIALOG(0x0E2A, e2a_b, e2a_t),
    DIALOG(0x0E2B, e2b_b, e2b_t),
    DIALOG(0x0E2C, e2c_b, e2c_t),
    DIALOG(0x0E2D, e2d_b, e2d_t),
    DIALOG(0x0E2E, e2e_b, e2e_t),
    DIALOG(0x0E2F, e2f_b, e2f_t),
    DIALOG(0x0E30, e30_b, e30_t),
    DIALOG(0x0E31, e31_b, e31_t),
    DIALOG(0x0E32, e32_b, e32_t),
    DIALOG(0x0E33, e33_b, e33_t),
    DIALOG(0x0E34, e34_b, e34_t),
    DIALOG(0x0E35, e35_b, e35_t),
    DIALOG(0x0E36, e36_b, e36_t),
    DIALOG(0x0E37, e37_b, e37_t),
    DIALOG(0x0E38, e38_b, e38_t),
    DIALOG(0x0E39, e39_b, e39_t),
    DIALOG(0x0E3A, e3a_b, e3a_t),
    DIALOG(0x0E3B, e3b_b, e3b_t),
    DIALOG(0x0E3C, e3c_b, e3c_t),
    DIALOG(0x0E3D, e3d_b, e3d_t),
    DIALOG(0x0E3E, e3e_b, e3e_t),
};

DialogDefTable misc_table = {
    misc_defs,
    sizeof(misc_defs) / sizeof(misc_defs[0])
};
