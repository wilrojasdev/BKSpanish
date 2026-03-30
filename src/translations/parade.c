#include "translation.h"

/*
 * Parade/Credits Translations - Character parade at game end
 *
 * Portraits:
 *   0xB5 = Grunty (lair)
 *   0xB6 = Tooty (alt/normal)
 *   0xD8 = Dingpot
 *   0xDA = Grunty (endgame/under boulder)
 *   0xD2 = Klungo
 *   0xD3 = Grunty (hot/transformed)
 *   0xD4 = Tooty (endgame)
 *   0xCC = Tooty (ugly/transformed)
 *   0x80 = Banjo
 *   0x81 = Kazooie
 *   0x83 = Bottles
 *   0x84 = Mumbo
 */

#define GRUNTY        0xB5
#define TOOTY_ALT     0xB6
#define DINGPOT       0xD8
#define GRUNTY_END    0xDA
#define KLUNGO        0xD2
#define GRUNTY_HOT    0xD3
#define TOOTY_END     0xD4
#define TOOTY_UGLY    0xCC

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

/* ============================================================
 * 0x0E57 - Intro: Grunty asks Dingpot who's fairest (B:7 T:1)
 * ============================================================ */
static DialogLine e57_b[] = {
    { GRUNTY,           "DINGPOT, MI CALDERO, DIME YA," },
    { GRUNTY,           "\xBF" "QUI\xC9N ES LA M\xC1S BELLA DE AQU\xCD?" },
    { DINGPOT,          "\xBF" "QU\xC9 QUIERES QUE DIGA...?" },
    { DINGPOT,          "\xA1" "POR SUPUESTO QUE T\xDA, GRUNTILDA!" },
    { GRUNTY,           "BIEN DICHO, CALDERO SABIO," },
    { GRUNTY,           "\xA1" "TENGO LA CARA M\xC1S BELLA DEL BARRIO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e57_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E58 - Intro: Dingpot reveals Tooty is prettier (B:10 T:1)
 * ============================================================ */
static DialogLine e58_b[] = {
    { DINGPOT,          "HMMM... PERO HAY UNA CHICA..." },
    { GRUNTY,           "ESO NO PUEDE SER," },
    { GRUNTY,           "\xA1" "NADIE PUEDE SER M\xC1S BELLA QUE YO!" },
    { DINGPOT,          "TOOTY ES TAN DULCE Y PEQUE\xD1" "A," },
    { DINGPOT,          "\xA1" "ES LA M\xC1S BONITA DE TODAS!" },
    { GRUNTY,           "\xA1\xBF" "QU\xC9?! \xA1" "MALDITO CACHARRO VIEJO," },
    { GRUNTY,           "TE CONVERTIR\xC9 EN UN ESPEJO!" },
    { DINGPOT,          "TOOTY NO SOLO ES BONITA," },
    { DINGPOT,          "\xA1" "ES UN VERDADERO \xC1NGEL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e58_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E59 - Intro: Grunty threatens (B:2 T:1)
 * ============================================================ */
static DialogLine e59_b[] = {
    { GRUNTY,           "\xA1" "YA VER\xC1 ESA BESTIA LO QUE LE ESPERA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e59_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5A - Intro: Bottles greets Tooty (B:2 T:3)
 * ============================================================ */
static DialogLine e5a_b[] = {
    { BOTTLES,          "\xA1" "HOLA, TOOTY! \xBF" "QU\xC9 PLANES TIENES HOY?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5a_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY_ALT,        "\xA1" "EN CUANTO MI HERMANO DESPIERTE, NOS LANZAMOS A LA AVENTURA!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5B - Intro: Kazooie tells Banjo to wake up (B:1 T:2)
 * ============================================================ */
static DialogLine e5b_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5b_t[] = {
    { KAZOOIE,          "\xA1" "DESPIERTA DE UNA VEZ PARA QUE EMPIECE EL JUEGO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5C - Intro: Grunty threatens Tooty (B:3 T:1)
 * ============================================================ */
static DialogLine e5c_b[] = {
    { GRUNTY,           "DE TOOTY HAR\xC9 COMIDA PARA RATAS," },
    { GRUNTY,           "\xA1" "PRONTO SE VER\xC1 M\xC1S VIEJA QUE MIS BATAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5D - Intro: Bottles spots Grunty in sky (B:4 T:3)
 * ============================================================ */
static DialogLine e5d_b[] = {
    { BOTTLES,          "\xBF" "ESE ES TU HERMANO?" },
    { DIALOG_COND_MINIMIZE, "" },
    { BOTTLES,          "\xA1" "ALL\xCD ARRIBA, EN EL CIELO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5d_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY_ALT,        "\xBF" "D\xD3NDE, SE\xD1OR TOPO?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5E - Intro: Tooty doesn't believe it (B:1 T:2)
 * ============================================================ */
static DialogLine e5e_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5e_t[] = {
    { TOOTY_ALT,        "NO PUEDE SER..." },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E5F - Intro: Grunty grabs Tooty (B:3 T:1)
 * ============================================================ */
static DialogLine e5f_b[] = {
    { GRUNTY,           "POBRE RATONCITA INFELIZ," },
    { GRUNTY,           "\xA1" "SE ACAB\xD3 TU JUEGUITO FELIZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e5f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E60 - Intro: Tooty screams (B:1 T:2)
 * ============================================================ */
static DialogLine e60_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e60_t[] = {
    { TOOTY_ALT,        "\xA1" "AY! \xA1" "VIEJA ESPANTAP\xC1JAROS!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E61 - Intro: Grunty taunts Tooty (B:3 T:1)
 * ============================================================ */
static DialogLine e61_b[] = {
    { GRUNTY,           "DE NADA SIRVE QUE ARA\xD1" "ES," },
    { GRUNTY,           "\xA1" "TE DEJAR\xC9 LA CARA QUE NO TE RECONOZCAN NI LAS ARA\xD1" "AS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e61_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E62 - Intro: Bottles panics (B:2 T:1)
 * ============================================================ */
static DialogLine e62_b[] = {
    { BOTTLES,          "\xA1" "OH NO! \xA1" "LA BRUJA SE LLEV\xD3 A LA PEQUE\xD1" "A! \xA1\xA1" "SOCORRO!!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e62_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E63 - Intro: Kazooie wakes Banjo (B:1 T:2)
 * ============================================================ */
static DialogLine e63_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e63_t[] = {
    { KAZOOIE,          "\xA1" "BANJO! \xA1" "DESPIERTA DE UNA VEZ!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E64 - Intro: Banjo wakes up confused (B:1 T:2)
 * ============================================================ */
static DialogLine e64_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e64_t[] = {
    { BANJO,            "\xBF" "QU\xC9... QU\xC9 EST\xC1 PASANDO?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E65 - Intro: Kazooie says trouble outside (B:1 T:2)
 * ============================================================ */
static DialogLine e65_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e65_t[] = {
    { KAZOOIE,          "\xA1" "HAY PROBLEMAS ALL\xC1 FUERA!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E66 - Intro: Grunty's machine + Klungo + Tooty (B:12 T:6)
 * ============================================================ */
static DialogLine e66_b[] = {
    { GRUNTY,           "ESTA M\xC1QUINA ES GENIAL," },
    { GRUNTY,           "\xA1" "HAR\xC1 VIEJA A TOOTY Y YO SER\xC9 IDEAL!" },
    { DIALOG_COND_MINIMIZE, "" },
    { GRUNTY,           "SI ESE OSO SE ATREVE A VENIR," },
    { GRUNTY,           "\xA1" "LO PONDR\xC9 A HUIR!" },
    { GRUNTY,           "\xA1" "VAMOS, KLUNGO, PULSA" },
    { GRUNTY,           "EL INTERRUPTOR!" },
    { GRUNTY,           "\xA1" "QUIERO OLVIDAR MI VEJEZ CON FERVOR!" },
    { KLUNGO,           "\xA1" "AS\xCD SEA, AMA! TODOS LOS" },
    { KLUNGO,           "SISTEMAS EST\xC1N ACTIVADOS." },
    { KLUNGO,           "ENSEGUIDA COMENZAMOS..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e66_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY_ALT,        "\xA1" "D\xC9JAME EN PAZ," },
    { TOOTY_ALT,        "BRUJA ASQUEROSA! \xA1" "O MI HERMANO TE DAR\xC1 UNA PALIZA!" },
    { DIALOG_COND_MINIMIZE, "" },
    { TOOTY_ALT,        "\xA1" "BANJO... SOCORROOO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E67 - Grunty: Tooty is captive (B:3 T:1)
 * ============================================================ */
static DialogLine e67_b[] = {
    { GRUNTY,           "LA HERMANA DE BANJO AQU\xCD CAUTIVA EST\xC1," },
    { GRUNTY,           "\xA1" "LE ROBAR\xC9 TODA SU BELLEZA YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e67_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E68 - Klungo: transformation ready (B:4 T:1)
 * ============================================================ */
static DialogLine e68_b[] = {
    { KLUNGO,           "\xA1" "S\xCD, AMA! \xA1" "LA" },
    { KLUNGO,           "TRANSFORMACI\xD3N EST\xC1" },
    { KLUNGO,           "CASI COMPLETA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e68_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E69 - Bad ending: Klungo wins + ugly Tooty (B:3 T:2)
 * ============================================================ */
static DialogLine e69_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { KLUNGO,           "\xA1" "EL OSO Y EL AVE EST\xC1N ACABADOS! \xA1" "MI AMA HA GANADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e69_t[] = {
    { TOOTY_UGLY,       "\xFD" "h" "AYUDA " "\xFD" "h" "ME, " "\xFD" "h" "BANJO!" "\xFD" "l" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6A - Bad ending: hot Grunty + Klungo adores (B:4 T:1)
 * ============================================================ */
static DialogLine e6a_b[] = {
    { GRUNTY_HOT,       "AHORA SOY LA M\xC1S GUAPA DEL LUGAR," },
    { GRUNTY_HOT,       "\xA1" "PARA TOOTY SE ACAB\xD3 EL BRILLAR!" },
    { KLUNGO,           "AMA, ERES TAN BELLA... TAN BELLA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6B - Bad ending: ugly Tooty calls Banjo (B:1 T:2)
 * ============================================================ */
static DialogLine e6b_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6b_t[] = {
    { TOOTY_UGLY,       "BANJO......." },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6C - Bad ending: ugly Tooty calls Banjo again (B:1 T:2)
 * ============================================================ */
static DialogLine e6c_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6c_t[] = {
    { TOOTY_UGLY,       "BANJO......." },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6D - Good ending: Tooty wants to talk (B:3 T:1)
 * ============================================================ */
static DialogLine e6d_b[] = {
    { TOOTY_END,        "\xA1" "BANJO! \xA1" "QUIERO HABLAR CONTIGO!" },
    { TOOTY_END,        "AHORA MISMO..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6E - Credits: Mumbo helped a lot (B:4 T:1)
 * ============================================================ */
static DialogLine e6e_b[] = {
    { MUMBO,            "OSO Y P\xC1JARO RARO" },
    { MUMBO,            "AYUDAR MUCHO A MUMBO," },
    { MUMBO,            "\xA1" "VENCER A BRUJA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E6F - Credits: Bottles brags about moves (B:4 T:1)
 * ============================================================ */
static DialogLine e6f_b[] = {
    { BOTTLES,          "S\xCD, PERO SIN MIS" },
    { BOTTLES,          "GENIALES MOVIMIENTOS" },
    { BOTTLES,          "\xA1" "NUNCA LO HABR\xCD" "AN LOGRADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e6f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E70 - Credits: Kazooie claims real heroes (B:1 T:3)
 * ============================================================ */
static DialogLine e70_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e70_t[] = {
    { KAZOOIE,          "\xA1" "CUIDADO, AMIGOS!" },
    { KAZOOIE,          "\xA1" "BANJO Y YO SOMOS LOS VERDADEROS H\xC9ROES DEL JUEGO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E71 - Credits: Tooty warns about Grunty (B:1 T:3)
 * ============================================================ */
static DialogLine e71_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e71_t[] = {
    { TOOTY_ALT,        "\xBF" "QU\xC9 FIESTA ES ESTA?" },
    { TOOTY_ALT,        "\xA1" "LA BRUJA SE HA ESCAPADO! \xA1" "ACABEN CON ELLA!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E72 - Credits: Kazooie reluctant, Banjo insists (B:1 T:4)
 * ============================================================ */
static DialogLine e72_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e72_t[] = {
    { KAZOOIE,          "\xA1" "NO TENGO GANAS!" },
    { BANJO,            "\xA1" "CLARO QUE TIENES GANAS!" },
    { BANJO,            "\xA1" "VAMOS A LA BATALLA!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E73 - Credits: Mumbo flirts with Tooty (B:3 T:1)
 * ============================================================ */
static DialogLine e73_b[] = {
    { MUMBO,            "\xA1" "OH, T\xDA SER BONITA! \xBF" "VISITAR" },
    { MUMBO,            "A MUMBO EN CUEVA, S\xCD?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e73_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E74 - Credits: Banjo relaxes (B:1 T:2)
 * ============================================================ */
static DialogLine e74_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e74_t[] = {
    { BANJO,            "AHHH... \xA1" "MARAVILLOSO! \xA1" "HORA DE RELAJARSE! \xBF" "VERDAD, HERMANITA?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E75 - Credits: Tooty congratulates (B:1 T:2)
 * ============================================================ */
static DialogLine e75_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e75_t[] = {
    { TOOTY_ALT,        "\xA1" "CLARO! T\xDA Y KAZOOIE \xA1" "SON VERDADEROS H\xC9ROES!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E76 - Credits: Kazooie is a star (B:1 T:2)
 * ============================================================ */
static DialogLine e76_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e76_t[] = {
    { KAZOOIE,          "\xBF" "OYES ESO, ENANO? \xA1" "SOY UNA ESTRELLA!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E77 - Credits: Bottles compliments Kazooie (B:2 T:1)
 * ============================================================ */
static DialogLine e77_b[] = {
    { BOTTLES,          "OK... ESTUVISTE MUY BIEN, KAZOOIE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e77_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E78 - Credits: Kazooie thanks, Banjo says enough (B:1 T:3)
 * ============================================================ */
static DialogLine e78_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e78_t[] = {
    { KAZOOIE,          "\xA1" "GRACIAS, CUATRO OJOS!" },
    { BANJO,            "\xA1" "YA BASTA! \xA1" "VEAMOS LOS CR\xC9" "DITOS!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E79 - Credits: Mumbo has secret pictures (B:2 T:1)
 * ============================================================ */
static DialogLine e79_b[] = {
    { MUMBO,            "\xA1" "PSST... MUMBO TENER FOTOS SECRETAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e79_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7A - Credits: Kazooie excited about secrets (B:1 T:2)
 * ============================================================ */
static DialogLine e7a_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7a_t[] = {
    { KAZOOIE,          "\xBF" "FOTOS SECRETAS? \xA1" "GENIAL!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7B - Credits: Mumbo shows pics for next game (B:2 T:1)
 * ============================================================ */
static DialogLine e7b_b[] = {
    { MUMBO,            "\xA1" "FOTOS MOSTRAR COSAS QUE MUMBO USAR EN PR\xD3XIMO JUEGO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7C - Credits: Banjo+Kazooie excited about sequel (B:1 T:4)
 * ============================================================ */
static DialogLine e7c_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7c_t[] = {
    { BANJO,            "\xBF" "HAS O\xCD" "DO ESO, KAZOOIE? \xA1" "VAN A HACER" },
    { BANJO,            "OTRO JUEGO CON NOSOTROS!" },
    { KAZOOIE,          "\xA1" "ENSE\xD1" "A TUS FOTOS, CABEZA DE HUESO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7D - Credits: Mumbo asks about 100 puzzles (B:2 T:1)
 * ============================================================ */
static DialogLine e7d_b[] = {
    { MUMBO,            "\xBF" "ENCONTRAR TODAS LAS 100 PIEZAS DE PUZZLE?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7E - Credits: Banjo says how many found (~ = dynamic) (B:1 T:3)
 * ============================================================ */
static DialogLine e7e_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7e_t[] = {
    { BANJO,            "BUENO... ME TEMO QUE SOLO ENCONTRAMOS ~..." },
    { 0x09, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E7F - Credits: Mumbo only best see pics (B:2 T:1)
 * ============================================================ */
static DialogLine e7f_b[] = {
    { MUMBO,            "\xA1" "SOLO MEJORES JUGADORES VER FOTOS! \xA1" "ENCONTRAR 100 PIEZAS Y MUMBO MOSTRAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e7f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E80 - Credits: Kazooie complains, unfair (B:1 T:2)
 * ============================================================ */
static DialogLine e80_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e80_t[] = {
    { KAZOOIE,          "\xA1" "ESO NO ES JUSTO! \xBF" "NI UN ADELANTO?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E81 - Credits: Mumbo leaves, has date (B:2 T:1)
 * ============================================================ */
static DialogLine e81_b[] = {
    { MUMBO,            "\xA1" "NO! \xA1" "MUMBO IRSE AHORA, TENER CITA CALIENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e81_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E82 - Credits: Tooty suggests find missing puzzles (B:1 T:2)
 * ============================================================ */
static DialogLine e82_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e82_t[] = {
    { TOOTY_ALT,        "\xBF" "POR QU\xC9 NO BUSCAN LAS PIEZAS DE PUZZLE QUE FALTAN?" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E83 - Credits: Kazooie wants Mumbo pics (B:1 T:2)
 * ============================================================ */
static DialogLine e83_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e83_t[] = {
    { KAZOOIE,          "\xA1" "EXACTO! \xA1" "QUIERO VER LAS FOTOS DE MUMBO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E84 - Credits: Grunty vows return (B:4 T:1)
 * ============================================================ */
static DialogLine e84_b[] = {
    { GRUNTY_END,       "OSO TONTO Y KAZOOIE BOBA," },
    { GRUNTY_END,       "\xA1" "VOLVER\xC9 EN" },
    { GRUNTY_END,       "BANJO-TOOIE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e84_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E85 - Credits: Banjo+Kazooie want secrets (B:1 T:3)
 * ============================================================ */
static DialogLine e85_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e85_t[] = {
    { BANJO,            "\xA1" "CLARO QUE S\xCD, MUMBO!" },
    { KAZOOIE,          "\xA1" "MUESTRA TUS SECRETOS, FARSANTE!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E86 - Credits: Mumbo pics for next game (B:3 T:1)
 * ============================================================ */
static DialogLine e86_b[] = {
    { MUMBO,            "FOTOS MOSTRAR COSAS QUE NO ENCONTRAR. \xA1" "USAR EN NUEVO JUEGO" },
    { MUMBO,            "BANJO-TOOIE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e86_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E87 - Credits: Banjo likes sequel name (B:1 T:2)
 * ============================================================ */
static DialogLine e87_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e87_t[] = {
    { BANJO,            "\xBF" "BANJO-TOOIE!? \xA1" "SUENA BASTANTE BIEN!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E88 - Credits: Mumbo agrees (B:2 T:1)
 * ============================================================ */
static DialogLine e88_b[] = {
    { MUMBO,            "\xA1" "S\xCD, SONAR MUY BIEN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e88_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E89 - Credits: Kazooie wants name in title (B:1 T:2)
 * ============================================================ */
static DialogLine e89_b[] = {
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e89_t[] = {
    { KAZOOIE,          "\xBF" "POR QU\xC9 NO SE LLAMA BANJO-KAZOOIE-TOOIE? \xA1" "YO TAMBI\xC9N SALGO!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8A - Credits: Mumbo shows pics (B:2 T:1)
 * ============================================================ */
static DialogLine e8a_b[] = {
    { MUMBO,            "\xA1" "NUEVO JUEGO SER \xC9XITO TOTAL! \xA1" "MUMBO ENSE\xD1" "AR BUENAS FOTOS! MIREN..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e8a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8B - Credits: Mumbo won't tell more (B:4 T:3)
 * ============================================================ */
static DialogLine e8b_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { MUMBO,            "\xA1" "MUMBO NO REVELAR NADA! \xA1" "DESCUBRIR EN" },
    { MUMBO,            "BANJO-TOOIE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e8b_t[] = {
    { BANJO,            "\xA1" "WOW! \xA1" "GENIALES FOTOS!" },
    { BANJO,            "\xA1" "CU\xC9NTANOS M\xC1S!" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8C - Credits: Grunty all puzzles taunt (B:4 T:1)
 * ============================================================ */
static DialogLine e8c_b[] = {
    { GRUNTY_END,       "ENCONTRARON TODAS LAS" },
    { GRUNTY_END,       "PIEZAS DE PUZZLE," },
    { GRUNTY_END,       "\xA1" "LA PR\xD3XIMA VEZ LES DAR\xC9 UNA TUNDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e8c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8D - Credits: Klungo will clear boulder (B:2 T:1)
 * ============================================================ */
static DialogLine e8d_b[] = {
    { KLUNGO,           "\xA1" "KLUNGO QUITAR ESTA ROCA! \xA1" "YO RESCATARTE, AMA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e8d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8E - Credits: Klungo boulder is heavy (B:2 T:1)
 * ============================================================ */
static DialogLine e8e_b[] = {
    { KLUNGO,           "ESTA ROCA ES TAN PESADA... \xA1" "PERO DEBO RESCATAR A MI AMA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e8e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E8F - Credits: Grunty growls (B:2 T:1)
 * ============================================================ */
static DialogLine e8f_b[] = {
    { GRUNTY_END,       "GRRR..." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine e8f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E90 - Credits: Grunty growls more (B:2 T:1)
 * ============================================================ */
static DialogLine e90_b[] = {
    { GRUNTY_END,       "GRRRRRR..." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine e90_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E91 - Credits: Grunty struggles (B:2 T:1)
 * ============================================================ */
static DialogLine e91_b[] = {
    { GRUNTY_END,       "ARGH... MUY... PESADA..." },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine e91_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x0E92 - Credits: Grunty trapped under boulder (B:4 T:1)
 * ============================================================ */
static DialogLine e92_b[] = {
    { GRUNTY_END,       "ESTE NO PUEDE SER" },
    { GRUNTY_END,       "MI DESTINO," },
    { GRUNTY_END,       "\xA1" "KLUNGO, L\xCD" "BRAME DE ESTA PIEDRA, MEZQUINO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine e92_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
static DialogDef parade_defs[] = {
    DIALOG(0x0E57, e57_b, e57_t),   /* Intro: Grunty asks Dingpot */
    DIALOG(0x0E58, e58_b, e58_t),   /* Intro: Dingpot reveals Tooty */
    DIALOG(0x0E59, e59_b, e59_t),   /* Intro: Grunty threatens */
    DIALOG(0x0E5A, e5a_b, e5a_t),   /* Intro: Bottles greets Tooty */
    DIALOG(0x0E5B, e5b_b, e5b_t),   /* Intro: Kazooie wake up */
    DIALOG(0x0E5C, e5c_b, e5c_t),   /* Intro: Grunty threatens Tooty */
    DIALOG(0x0E5D, e5d_b, e5d_t),   /* Intro: Bottles spots Grunty */
    DIALOG(0x0E5E, e5e_b, e5e_t),   /* Intro: Tooty disbelief */
    DIALOG(0x0E5F, e5f_b, e5f_t),   /* Intro: Grunty grabs Tooty */
    DIALOG(0x0E60, e60_b, e60_t),   /* Intro: Tooty screams */
    DIALOG(0x0E61, e61_b, e61_t),   /* Intro: Grunty taunts */
    DIALOG(0x0E62, e62_b, e62_t),   /* Intro: Bottles panics */
    DIALOG(0x0E63, e63_b, e63_t),   /* Intro: Kazooie wakes Banjo */
    DIALOG(0x0E64, e64_b, e64_t),   /* Intro: Banjo confused */
    DIALOG(0x0E65, e65_b, e65_t),   /* Intro: Kazooie trouble */
    DIALOG(0x0E66, e66_b, e66_t),   /* Intro: Grunty's machine */
    DIALOG(0x0E67, e67_b, e67_t),   /* Grunty: Tooty captive */
    DIALOG(0x0E68, e68_b, e68_t),   /* Klungo: transform ready */
    DIALOG(0x0E69, e69_b, e69_t),   /* Bad end: Klungo wins */
    DIALOG(0x0E6A, e6a_b, e6a_t),   /* Bad end: hot Grunty */
    DIALOG(0x0E6B, e6b_b, e6b_t),   /* Bad end: ugly Tooty 1 */
    DIALOG(0x0E6C, e6c_b, e6c_t),   /* Bad end: ugly Tooty 2 */
    DIALOG(0x0E6D, e6d_b, e6d_t),   /* Good end: Tooty talks */
    DIALOG(0x0E6E, e6e_b, e6e_t),   /* Credits: Mumbo helped */
    DIALOG(0x0E6F, e6f_b, e6f_t),   /* Credits: Bottles moves */
    DIALOG(0x0E70, e70_b, e70_t),   /* Credits: Kazooie heroes */
    DIALOG(0x0E71, e71_b, e71_t),   /* Credits: Tooty warns */
    DIALOG(0x0E72, e72_b, e72_t),   /* Credits: Kazooie reluctant */
    DIALOG(0x0E73, e73_b, e73_t),   /* Credits: Mumbo flirts */
    DIALOG(0x0E74, e74_b, e74_t),   /* Credits: Banjo relaxes */
    DIALOG(0x0E75, e75_b, e75_t),   /* Credits: Tooty congrats */
    DIALOG(0x0E76, e76_b, e76_t),   /* Credits: Kazooie star */
    DIALOG(0x0E77, e77_b, e77_t),   /* Credits: Bottles praises */
    DIALOG(0x0E78, e78_b, e78_t),   /* Credits: enough, credits */
    DIALOG(0x0E79, e79_b, e79_t),   /* Credits: Mumbo secrets */
    DIALOG(0x0E7A, e7a_b, e7a_t),   /* Credits: Kazooie cool */
    DIALOG(0x0E7B, e7b_b, e7b_t),   /* Credits: Mumbo next game */
    DIALOG(0x0E7C, e7c_b, e7c_t),   /* Credits: sequel excited */
    DIALOG(0x0E7D, e7d_b, e7d_t),   /* Credits: 100 puzzles? */
    DIALOG(0x0E7E, e7e_b, e7e_t),   /* Credits: ~ found */
    DIALOG(0x0E7F, e7f_b, e7f_t),   /* Credits: best only */
    DIALOG(0x0E80, e80_b, e80_t),   /* Credits: unfair */
    DIALOG(0x0E81, e81_b, e81_t),   /* Credits: Mumbo leaves */
    DIALOG(0x0E82, e82_b, e82_t),   /* Credits: find puzzles */
    DIALOG(0x0E83, e83_b, e83_t),   /* Credits: Kazooie pics */
    DIALOG(0x0E84, e84_b, e84_t),   /* Credits: Grunty returns */
    DIALOG(0x0E85, e85_b, e85_t),   /* Credits: want secrets */
    DIALOG(0x0E86, e86_b, e86_t),   /* Credits: Mumbo pics */
    DIALOG(0x0E87, e87_b, e87_t),   /* Credits: sequel name */
    DIALOG(0x0E88, e88_b, e88_t),   /* Credits: Mumbo agrees */
    DIALOG(0x0E89, e89_b, e89_t),   /* Credits: Kazooie name */
    DIALOG(0x0E8A, e8a_b, e8a_t),   /* Credits: Mumbo shows */
    DIALOG(0x0E8B, e8b_b, e8b_t),   /* Credits: Mumbo secret */
    DIALOG(0x0E8C, e8c_b, e8c_t),   /* Credits: all puzzles */
    DIALOG(0x0E8D, e8d_b, e8d_t),   /* Credits: Klungo clear */
    DIALOG(0x0E8E, e8e_b, e8e_t),   /* Credits: boulder heavy */
    DIALOG(0x0E8F, e8f_b, e8f_t),   /* Credits: Grunty growl */
    DIALOG(0x0E90, e90_b, e90_t),   /* Credits: Grunty growl 2 */
    DIALOG(0x0E91, e91_b, e91_t),   /* Credits: Grunty struggle */
    DIALOG(0x0E92, e92_b, e92_t),   /* Credits: Grunty trapped */
};

DialogDefTable parade_table = {
    parade_defs,
    sizeof(parade_defs) / sizeof(parade_defs[0])
};
