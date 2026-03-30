#include "translation.h"

/*
 * Spiral Mountain Translations (46 assets: 0xDF3 - 0xE20)
 *
 * Structure EXACTLY matches German mod (BK64/BK-german)
 * Latin-1 chars: \xC1=A \xC9=E \xCD=I \xD1=N \xD3=O \xDA=U \xBF=? \xA1=!
 */

// 0xE20 BOTTOM
static DialogLine e20_b[] = {
    { BOTTLES,              "BUENO... \xA1" "LO SIENTO" },
    { BOTTLES,              "AMIGOS! ESTE SECRETO" },
    { BOTTLES,              "SOLO SE LO CUENTO" },
    { BOTTLES,              "CUANDO HAYAN RESUELTO" },
    { BOTTLES,              "EL PUZLE DEL CASTILLO" },
    { BOTTLES,              "DE ARENA EN TREASURE" },
    { BOTTLES,              "TROVE COVE." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "NI HABLAR! \xA1" "SIN EL PUZZLETEIL DEL CASTILLO DE ARENA NO HAY NADA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE20 TOP
static DialogLine e20_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "NO SEAS AS\xCD," },
    { KAZOOIE,              "GORDITO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "D\xC9JALO, KAZOOIE. \xA1" "VOLVEREMOS DESPU\xC9S!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1F BOTTOM
static DialogLine e1f_b[] = {
    { BOTTLES,              "\xBF" "QUIEREN APRENDER MOVIMIENTOS? PULSEN A. \xBF" "YA LO SABEN TODO? PULSEN B." },
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xE1F TOP
static DialogLine e1f_t[] = {
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xE1E BOTTOM
static DialogLine e1e_b[] = {
    { BOTTLES,              "\xBF" "EST\xC1N LISTOS PARA ENFRENTAR A LA ASQUEROSA BRUJA?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "AL OTRO LADO DEL PUENTE" },
    { BOTTLES,              "EST\xC1 EL REINO DE" },
    { BOTTLES,              "GRUNTILDA. NOS VEMOS" },
    { BOTTLES,              "ALL\xCD. \xA1" "BUENA SUERTE!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1E TOP
static DialogLine e1e_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "CLARO QUE S\xCD! \xBF" "POR D\xD3NDE SE VA, COME GUSANOS?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1D BOTTOM
static DialogLine e1d_b[] = {
    { BOTTLES,              "PULSA A PARA APRENDER, O B PARA IR DIRECTO A LA ACCI\xD3N." },
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xE1D TOP
static DialogLine e1d_t[] = {
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xE1C BOTTOM
static DialogLine e1c_b[] = {
    { BOTTLES,              "MANT\xC9N EL GATILLO Z" },
    { BOTTLES,              "Y PULSA A. \xA1" "VAMOS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1C TOP
static DialogLine e1c_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1B BOTTOM
static DialogLine e1b_b[] = {
    { BOTTLES,              "\xA1" "NO SEAS AS\xCD, BANJO! \xA1" "SALTA Y PULSA A EN EL AIRE PARA EL DOBLE SALTO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1B TOP
static DialogLine e1b_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1A BOTTOM
static DialogLine e1a_b[] = {
    { BOTTLES,              "PARA SALTAR PULSAS" },
    { BOTTLES,              "A. \xA1" "F\xC1" "CIL!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE1A TOP
static DialogLine e1a_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE19 BOTTOM
static DialogLine e19_b[] = {
    { BOTTLES,              "\xA1" "AHORA S\xCD SABEN" },
    { BOTTLES,              "PELEAR DE VERDAD!" },
    { BOTTLES,              "\xA1" "MIREN POR AH\xCD!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE19 TOP
static DialogLine e19_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE18 BOTTOM
static DialogLine e18_b[] = {
    { BOTTLES,              "\xA1" "NADA MAL, PATITO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE18 TOP
static DialogLine e18_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "ESTO EMPIEZA A SER DIVERTIDO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE17 BOTTOM
static DialogLine e17_b[] = {
    { BOTTLES,              "AHORA LE ENSE\xD1O AL" },
    { BOTTLES,              "PAJARRACO UN TRUCO" },
    { BOTTLES,              "NUEVO." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "EN EL AIRE, PULSA B" },
    { BOTTLES,              "PARA QUE KAZOOIE ATAQUE" },
    { BOTTLES,              "CON SU PICO! \xBF" "D\xD3NDE EST\xC1 COLLYWOBBLE?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE17 TOP
static DialogLine e17_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "M\xC1S VALE QUE SEA BUENO, CIEGO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE16 BOTTOM
static DialogLine e16_b[] = {
    { BOTTLES,              "\xA1" "DIRECTO! UNO" },
    { BOTTLES,              "MENOS QUE QUEDA..." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE16 TOP
static DialogLine e16_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "ME ESTOY MAREANDO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE15 BOTTOM
static DialogLine e15_b[] = {
    { BOTTLES,              "AHORA TE ENSE\xD1O LA" },
    { BOTTLES,              "TEMIBLE RODADA DE OSO." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "CORRE Y PULSA B PARA" },
    { BOTTLES,              "RODAR! BUSCAR\xC9 UN" },
    { BOTTLES,              "BUEN OBJETIVO PARA" },
    { BOTTLES,              "QUE PRACTIQUES." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE15 TOP
static DialogLine e15_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "QUIERO APRENDER A" },
    { KAZOOIE,              "VOLAR! \xA1" "AHORA MISMO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE14 BOTTOM
static DialogLine e14_b[] = {
    { BOTTLES,              "\xA1" "WOW... NADA MAL!" },
    { BOTTLES,              "\xA1" "OTRA VEZ!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE14 TOP
static DialogLine e14_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "Y QU\xC9 PASA CONMIGO?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE13 BOTTOM
static DialogLine e13_b[] = {
    { BOTTLES,              "\xA1" "BUEN TRABAJO, AMIGOS!" },
    { BOTTLES,              "\xA1" "AHORA MUESTRA A ESA BRUJA QUI\xC9N MANDA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "HE REPARADO EL PUENTE," },
    { BOTTLES,              "EL CAMINO AL REINO DE" },
    { BOTTLES,              "GRUNTILDA EST\xC1 LIBRE." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "NOS VEMOS EN EL REINO" },
    { BOTTLES,              "DEL MAL. \xA1" "BUENA SUERTE!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE13 TOP
static DialogLine e13_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "POR SUPUESTO! \xBF" "POR D\xD3NDE, TOPITO?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "GRACIAS, BOTTLES." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE12 BOTTOM
static DialogLine e12_b[] = {
    { BOTTLES,              "OK, ES HORA. EN EL" },
    { BOTTLES,              "SPIRAL MOUNTAIN LES" },
    { BOTTLES,              "CONTAR\xC9 C\xD3MO SEGUIR." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE12 TOP
static DialogLine e12_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE11 BOTTOM
static DialogLine e11_b[] = {
    { BOTTLES,              "\xA1" "MIENTRAS NO APRENDAN" },
    { BOTTLES,              "TODOS LOS MOVIMIENTOS" },
    { BOTTLES,              "NO PUEDEN SEGUIR!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE11 TOP
static DialogLine e11_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE10 BOTTOM
static DialogLine e10_b[] = {
    { BOTTLES,              "\xA1" "HEY! \xBF" "QU\xC9 HACEN AH\xCD?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "A\xDA" "N NO SABEN TODOS" },
    { BOTTLES,              "LOS MOVIMIENTOS!" },
    { BOTTLES,              "\xA1" "LA BRUJA LES VA A" },
    { BOTTLES,              "PARTIR EL TRASERO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "NO ARREGLO EL PUENTE HASTA QUE EST\xC9N LISTOS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE10 TOP
static DialogLine e10_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "VAMOS A DARLE UNA" },
    { BANJO,                "PALIZA A ESA BRUJA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "QUE LO INTENTE," },
    { KAZOOIE,              "ESA VIEJA BRUJA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "BUENO KAZOOIE, VAMOS" },
    { BANJO,                "A BUSCAR LOS" },
    { BANJO,                "MONTICULITOS. \xA1" "VAMOS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0F BOTTOM
static DialogLine e0f_b[] = {
    { BOTTLES,              "\xA1" "NO PIERDAN EL TIEMPO, BANJO! \xA1" "TOOTY LOS ESPERA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0F TOP
static DialogLine e0f_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0E BOTTOM
static DialogLine e0e_b[] = {
    { BOTTLES,              "\xA1" "SE LO BUSCARON!" },
    { BOTTLES,              "\xA1" "VOY A BORRAR LA" },
    { BOTTLES,              "PARTIDA!" },
    { BOTTLES,              "3....." },
    { BOTTLES,              "2....." },
    { BOTTLES,              "1....." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "BUENO, VAMOS A RESCATAR A LA POBRE TOOTY DE UNA VEZ." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0E TOP
static DialogLine e0e_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "PARA! \xA1" "PERD\xD3N BOTTLES, NO LO HAREMOS M\xC1S!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0D BOTTOM
static DialogLine e0d_b[] = {
    { BOTTLES,              "\xA1\xDA" "LTIMA ADVERTENCIA! \xA1" "NO LO INTENTEN DE NUEVO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0D TOP
static DialogLine e0d_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0C BOTTOM
static DialogLine e0c_b[] = {
    { BOTTLES,              "\xA1" "ESTO YA NO ES GRACIOSO, D\xC9JENME EN PAZ!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0C TOP
static DialogLine e0c_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0B BOTTOM
static DialogLine e0b_b[] = {
    { BOTTLES,              "\xA1" "NO LES AYUDO!" },
    { BOTTLES,              "\xA1" "FUERA DE AQU\xCD!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0B TOP
static DialogLine e0b_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0A BOTTOM
static DialogLine e0a_b[] = {
    { BOTTLES,              "DIJERON QUE PUEDEN SOLOS. \xA1" "A VER C\xD3MO LLEGAN HASTA LA BRUJA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE0A TOP
static DialogLine e0a_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE09 BOTTOM
static DialogLine e09_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "MMM... \xA1" "COMO QUIERAN! LES ENSE\xD1O LOS PRIMEROS MOVIMIENTOS PARA QUE EMPIECEN." },
    { DIALOG_TRIGGER,       "\x06" },
    { BOTTLES,              "NOS VEMOS EN EL SPIRAL MOUNTAIN." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE09 TOP
static DialogLine e09_t[] = {
    { KAZOOIE,              "\xA1" "PODEMOS SIN TU AYUDA, TOPO CIEGO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE08 BOTTOM
static DialogLine e08_b[] = {
    { BOTTLES,              "BUSCA EL PR\xD3XIMO" },
    { BOTTLES,              "MONTICULITO Y" },
    { BOTTLES,              "PULSA B. \xA1" "NOS" },
    { BOTTLES,              "VEMOS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE08 TOP
static DialogLine e08_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE07 BOTTOM
static DialogLine e07_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "BUSQUEN MIS MONTICULITOS" },
    { BOTTLES,              "POR AH\xCD!" },
    { BOTTLES,              "\xA1" "P\xD3NGANSE AL LADO Y" },
    { BOTTLES,              "PULSEN B! \xA1" "HASTA LUEGO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE07 TOP
static DialogLine e07_t[] = {
    { BANJO,                "BOTTLES, PODR\xCD" "AMOS" },
    { BANJO,                "USAR TU AYUDA." },
    { BANJO,                "\xBF" "QU\xC9 HAY QUE HACER?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE06 BOTTOM
static DialogLine e06_b[] = {
    { BOTTLES,              "CON EL GATILLO Z" },
    { BOTTLES,              "PULSADO Y B PUEDES" },
    { BOTTLES,              "EMBESTIR CON EL PICO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE06 TOP
static DialogLine e06_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE05 BOTTOM
static DialogLine e05_b[] = {
    { BOTTLES,              "\xBF" "VES BANJO? \xA1" "ESA" },
    { BOTTLES,              "GALLINA S\xCD SIRVE" },
    { BOTTLES,              "PARA ALGO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE05 TOP
static DialogLine e05_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "LA PR\xD3XIMA VEZ TE" },
    { KAZOOIE,              "TOCA A TI, ENANO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE04 BOTTOM
static DialogLine e04_b[] = {
    { BOTTLES,              "PARA LA EMBESTIDA NECESITAMOS A ESE PAJARRACO LOCO DE TU MOCHILA." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "MANT\xC9N Z Y PULSA B PARA EMBESTIR CON EL PICO!" },
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xE04 TOP
static DialogLine e04_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "AL MENOS YO TENGO PATAS, AMIGUITO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE03 BOTTOM
static DialogLine e03_b[] = {
    { BOTTLES,              "SALTA CONTRA UN \xC1RBOL" },
    { BOTTLES,              "Y USA EL STICK PARA" },
    { BOTTLES,              "ESCALAR ARRIBA Y" },
    { BOTTLES,              "ABAJO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE03 TOP
static DialogLine e03_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE02 BOTTOM
static DialogLine e02_b[] = {
    { BOTTLES,              "\xA1" "RECUERDA! NO SOLO SE" },
    { BOTTLES,              "PUEDE TREPAR A \xC1RBOLES," },
    { BOTTLES,              "BANJO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE02 TOP
static DialogLine e02_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE01 BOTTOM
static DialogLine e01_b[] = {
    { BOTTLES,              "\xA1" "HEY BANJO! ESPERO QUE" },
    { BOTTLES,              "NO LE TENGAS V\xC9RTIGO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "LUEGO! BANJO, SALTA" },
    { BOTTLES,              "CONTRA UN \xC1RBOL Y USA" },
    { BOTTLES,              "EL STICK PARA TREPAR" },
    { BOTTLES,              "HACIA ARRIBA." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE01 TOP
static DialogLine e01_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "YO S\xCD! \xA1" "HABLA DE UNA VEZ DE VOLAR, COME GUSANOS!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE00 BOTTOM
static DialogLine e00_b[] = {
    { BOTTLES,              "PULSA B QUIETO PARA EL ZARPAZO. B CORRIENDO PARA RODAR. B EN EL AIRE PARA PICOTAZO. Z M\xC1S B PARA PICOTAZO AL SUELO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xE00 TOP
static DialogLine e00_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFF BOTTOM
static DialogLine dff_b[] = {
    { BOTTLES,              "BANJO, ES HORA DE" },
    { BOTTLES,              "APRENDER EL ZARPAZO." },
    { BOTTLES,              "\xBF" "LISTOS?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "PULSA B ESTANDO QUIETO" },
    { BOTTLES,              "O MOVI\xC9NDOTE" },
    { BOTTLES,              "DESPACIO." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xBF" "QU\xC9 TAL CON EL" },
    { BOTTLES,              "PAJARRACO ESE?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "ERA BROMA." },
    { BOTTLES,              "BUSCAR\xC9 UN OBJETIVO" },
    { BOTTLES,              "DE VERDAD PARA" },
    { BOTTLES,              "TI. \xBF" "OK?" },
    { DIALOG_TRIGGER,       "\x04" },
    { BOTTLES,              "\xA1" "AH\xCD VIENE TOPPER! \xA1" "DALE, BANJO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFF TOP
static DialogLine dff_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "SUENA INTERESANTE!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "GENIAL! \xBF" "CON QU\xC9 PUEDO PRACTICAR?" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "VEN AQU\xCD," },
    { KAZOOIE,              "CULEBRA CIEGA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFE BOTTOM
static DialogLine dfe_b[] = {
    { BOTTLES,              "PULSA B PARA BUCEAR." },
    { BOTTLES,              "BAJO EL AGUA, A PARA" },
    { BOTTLES,              "NADAR LENTO Y B PARA NADAR R\xC1PIDO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFE TOP
static DialogLine dfe_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFD BOTTOM
static DialogLine dfd_b[] = {
    { BOTTLES,              "CON EL STICK NADAS EN" },
    { BOTTLES,              "LA SUPERFICIE." },
    { BOTTLES,              "PULSA B PARA BUCEAR." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFD TOP
static DialogLine dfd_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFC BOTTOM
static DialogLine dfc_b[] = {
    { BOTTLES,              "BAJO EL AGUA BANJO" },
    { BOTTLES,              "PATALEA SI PULSAS A." },
    { BOTTLES,              "NUESTRO TALENTO" },
    { BOTTLES,              "EMPLUMADO ENTRA EN" },
    { BOTTLES,              "ACCI\xD3N AL PULSAR B." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFC TOP
static DialogLine dfc_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFB BOTTOM
static DialogLine dfb_b[] = {
    { BOTTLES,              "\xBF" "LES APETECE UN" },
    { BOTTLES,              "PASEO SUBMARINO?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "CON EL STICK" },
    { BOTTLES,              "NADAS EN LA" },
    { BOTTLES,              "SUPERFICIE. PULSA B" },
    { BOTTLES,              "PARA BUCEAR. \xA1" "VAMOS!" },
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xDFB TOP
static DialogLine dfb_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "\xA1" "MEJOR NO! PREFIERO IRME A CASA..." },
    { KAZOOIE,              "\xA1" "BANJO, NO SEAS GALLINA!" },
    { KAZOOIE,              "\xA1" "YO QUIERO NADAR! \xA1" "SUELTA" },
    { KAZOOIE,              "TODO, T\xCD" "O TOPO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFA BOTTOM
static DialogLine dfa_b[] = {
    { BOTTLES,              "PULSA A PARA SALTAR Y OTRA VEZ A PARA DOBLE SALTO. CON Z Y A HACES UN SALTO MORTAL." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDFA TOP
static DialogLine dfa_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF9 BOTTOM
static DialogLine df9_b[] = {
    { BOTTLES,              "ESOS FUERON TODOS LOS SALTOS." },
    { BOTTLES,              "\xA1" "SIGAN PRACTICANDO!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF9 TOP
static DialogLine df9_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF8 BOTTOM
static DialogLine df8_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "NO SIN ANTES CONOCER" },
    { BOTTLES,              "ESTE MOVIMIENTO." },
    { BOTTLES,              "P\xD3NGANSE AS\xCD..." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "PICO! MANTENGAN Z Y PULSEN A PARA HACER UN SALTO MORTAL." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF8 TOP
static DialogLine df8_t[] = {
    { KAZOOIE,              "\xA1" "YA LO SABEMOS TODO!" },
    { KAZOOIE,              "\xA1" "PODEMOS IRNOS!" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "C\xD3MO? \xBF" "PONERSE UNOS LENTES" },
    { KAZOOIE,              "RID\xCD" "CULOS Y ASOMARSE COMO IDIOTA DESDE UN AGUJERO?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF7 BOTTOM
static DialogLine df7_b[] = {
    { BOTTLES,              "\xA1" "PAJARRACO, MUESTRA LO" },
    { BOTTLES,              "QUE SABES HACER!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "SALTEN Y PULSEN A EN EL AIRE PARA HACER UN DOBLE SALTO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF7 TOP
static DialogLine df7_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "POR QU\xC9? SEGURO ME" },
    { KAZOOIE,              "VER\xC9 TOTALMENTE" },
    { KAZOOIE,              "RID\xCD" "CULA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF6 BOTTOM
static DialogLine df6_b[] = {
    { BOTTLES,              "HMMM... SALTANDO NO SON NINGUNOS CAMPEONES." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "M\xC1S QUE T\xDA, FLAUTA! PARA SALTAR PULSEN A. SI MANTIENEN A, BANJO SALTA M\xC1S ALTO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF6 TOP
static DialogLine df6_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "BAH! \xBF" "QU\xC9 SABEN LOS TOPOS" },
    { KAZOOIE,              "CIEGOS SOBRE SALTAR?" },
    { KAZOOIE,              "\xA1" "NADA!" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF5 BOTTOM
static DialogLine df5_b[] = {
    { BOTTLES,              "PUEDES MOVER LA C\xC1MARA CON LOS BOTONES C. PULSA R PARA PONERLA DETR\xC1S DE TI. MANT\xC9N R PARA QUE SE QUEDE AH\xCD." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF5 TOP
static DialogLine df5_t[] = {
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF4 BOTTOM
static DialogLine df4_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "HOLA! EMPECEMOS CON EL CONTROL DE C\xC1MARA. LA MUEVEN CON LOS BOTONES C." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "MUESTRA LO QUE SABES!" },
    { BOTTLES,              "PULSA EL BOT\xD3N R PARA" },
    { BOTTLES,              "PONER LA C\xC1MARA" },
    { BOTTLES,              "DETR\xC1S DE BANJO." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "NO, MANT\xC9N R PULSADO" },
    { BOTTLES,              "PARA MANTENER LA" },
    { BOTTLES,              "C\xC1MARA DETR\xC1S DE TU" },
    { BOTTLES,              "TRASERO EMPLUMADO. NOS VEMOS EN EL SIGUIENTE MONTICULITO." },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF4 TOP
static DialogLine df4_t[] = {
    { BANJO,                "\xA1" "HOLA BOTTLES!" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "QU\xC9 ROLLO! \xBF" "ESTAMOS EN LA ESCUELA?" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xBF" "ESO ES TODO," },
    { KAZOOIE,              "AMIGO DE LOS GUSANOS?" },
    { DIALOG_CLOSE_ALT,     "" },
};

// 0xDF3 BOTTOM
static DialogLine df3_b[] = {
    { BOTTLES,              "\xA1" "HOLA! SOY BOTTLES, EL TOPO CORTO DE VISTA." },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "QU\xC9 AMIGA M\xC1S RARA! \xBF" "ESA COSA PUEDE HABLAR?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "LA MALVADA BRUJA GRUNTILDA BAJ\xD3 DEL CIELO Y SE LA HA LLEVADO!" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,              "\xA1" "VOL\xD3 HASTA SU ESPANTOSA GUARIDA!" },
    { DIALOG_TRIGGER,       "\x03" },
    { BOTTLES,              "\xA1" "ESTO NO SER\xC1 UN PASEO, AMIGOS! NECESITAN ALGUNAS LECCIONES ANTES DE PODER IR." },
    { DIALOG_TRIGGER,       "\x05" },
    { DIALOG_CLOSE_MIN,     "" },
};

// 0xDF3 TOP
static DialogLine df3_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,                "SOY BANJO Y ESTA ES MI AMIGA KAZOOIE." },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "\xA1" "MEJOR QUE T\xDA, CUATRO OJOS!" },
    { BANJO,                "\xBF" "QU\xC9 FUE ESO? \xBF" "D\xD3NDE" },
    { BANJO,                "EST\xC1 MI DULCE" },
    { BANJO,                "HERMANA TOOTY?" },
    { DIALOG_COND_MINIMIZE, "" },
    { KAZOOIE,              "C\xC1LMATE, PEQUE\xD1O." },
    { KAZOOIE,              "\xA1" "RESCATAREMOS A TOOTY! \xBF" "A D\xD3NDE SE FUE ESA HORRIBLE BRUJA?" },
    { DIALOG_CLOSE_MIN,     "" },
};

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef sm_defs[] = {
    DIALOG(0x0DF3, df3_b, df3_t),
    DIALOG(0x0DF4, df4_b, df4_t),
    DIALOG(0x0DF5, df5_b, df5_t),
    DIALOG(0x0DF6, df6_b, df6_t),
    DIALOG(0x0DF7, df7_b, df7_t),
    DIALOG(0x0DF8, df8_b, df8_t),
    DIALOG(0x0DF9, df9_b, df9_t),
    DIALOG(0x0DFA, dfa_b, dfa_t),
    DIALOG(0x0DFB, dfb_b, dfb_t),
    DIALOG(0x0DFC, dfc_b, dfc_t),
    DIALOG(0x0DFD, dfd_b, dfd_t),
    DIALOG(0x0DFE, dfe_b, dfe_t),
    DIALOG(0x0DFF, dff_b, dff_t),
    DIALOG(0x0E00, e00_b, e00_t),
    DIALOG(0x0E01, e01_b, e01_t),
    DIALOG(0x0E02, e02_b, e02_t),
    DIALOG(0x0E03, e03_b, e03_t),
    DIALOG(0x0E04, e04_b, e04_t),
    DIALOG(0x0E05, e05_b, e05_t),
    DIALOG(0x0E06, e06_b, e06_t),
    DIALOG(0x0E07, e07_b, e07_t),
    DIALOG(0x0E08, e08_b, e08_t),
    DIALOG(0x0E09, e09_b, e09_t),
    DIALOG(0x0E0A, e0a_b, e0a_t),
    DIALOG(0x0E0B, e0b_b, e0b_t),
    DIALOG(0x0E0C, e0c_b, e0c_t),
    DIALOG(0x0E0D, e0d_b, e0d_t),
    DIALOG(0x0E0E, e0e_b, e0e_t),
    DIALOG(0x0E0F, e0f_b, e0f_t),
    DIALOG(0x0E10, e10_b, e10_t),
    DIALOG(0x0E11, e11_b, e11_t),
    DIALOG(0x0E12, e12_b, e12_t),
    DIALOG(0x0E13, e13_b, e13_t),
    DIALOG(0x0E14, e14_b, e14_t),
    DIALOG(0x0E15, e15_b, e15_t),
    DIALOG(0x0E16, e16_b, e16_t),
    DIALOG(0x0E17, e17_b, e17_t),
    DIALOG(0x0E18, e18_b, e18_t),
    DIALOG(0x0E19, e19_b, e19_t),
    DIALOG(0x0E1A, e1a_b, e1a_t),
    DIALOG(0x0E1B, e1b_b, e1b_t),
    DIALOG(0x0E1C, e1c_b, e1c_t),
    DIALOG(0x0E1D, e1d_b, e1d_t),
    DIALOG(0x0E1E, e1e_b, e1e_t),
    DIALOG(0x0E1F, e1f_b, e1f_t),
    DIALOG(0x0E20, e20_b, e20_t),
};

DialogDefTable sm_table = {
    sm_defs,
    sizeof(sm_defs) / sizeof(sm_defs[0])
};
