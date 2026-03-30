#include "translation.h"

/*
 * Bubblegloop Swamp (World 4) - BGS
 * Faithful to German structure - only text changed
 * Portraits: 0x8B=Mr.Vile, 0x8C=Tanktup, 0x8D=Tiptup, 0x8E=Flibit,
 *   0xA7=Piranha, 0xB4=Croctus, 0xB5=Grunty
 */

#define MR_VILE   0x8B
#define TANKTUP   0x8C
#define TIPTUP    0x8D
#define FLIBIT    0x8E
#define PIRANHA   0xA7
#define CROCTUS   0xB4
#define GRUNTY_P  0xB5

// ============================================================
// MR. VILE (0xC63-0xC71, 0xC8D-0xC8F)
// ============================================================

// 0xC63 - Mr. Vile intro (B:3 T:1) - NOTE: B[2] is 0x01 (player choice)
static DialogLine c63_b[] = {
    { MR_VILE,         "\xA1" "HOLA! \xA1" "SOY MR. VILE, EL COCODRILO M\xC1S GENIAL DE TODOS LOS TIEMPOS!" },
    { MR_VILE,         "\xA1" "PULSA A PARA JUGAR, O B SI TIENES MIEDO, GALLINA!" },
    { 0x01, "" },
};
static DialogLine c63_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC64 - Mr. Vile round 1 start (B:9 T:1)
static DialogLine c64_b[] = {
    { MR_VILE,         "\xA1" "EL JUEGO ES SIMPLE!" },
    { MR_VILE,         "\xA1" "COME M\xC1S YUMBLIES" },
    { MR_VILE,         "ROJOS QUE YO!" },
    { MR_VILE,         "\xBF" "LISTO?" },
    { MR_VILE,         "3..." },
    { MR_VILE,         "2..." },
    { MR_VILE,         "1..." },
    { MR_VILE,         "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c64_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC65 - Mr. Vile player refuses (B:2 T:1)
static DialogLine c65_b[] = {
    { MR_VILE,         "\xA1" "MIRA, EL PEQUE\xD1" "O ES UN COBARDE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c65_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC66 - Mr. Vile player loses (B:4 T:1)
static DialogLine c66_b[] = {
    { MR_VILE,         "\xA1" "PERDEDOR! \xA1" "TE VOY A" },
    { MR_VILE,         "MORDER PARA QUE" },
    { MR_VILE,         "ESPABILES UN POCO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c66_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC67 - Mr. Vile round 2 start (B:6 T:1)
static DialogLine c67_b[] = {
    { MR_VILE,         "GRRRR... GANASTE. \xA1" "AHORA SUBIMOS LA DIFICULTAD!" },
    { MR_VILE,         "3..." },
    { MR_VILE,         "2..." },
    { MR_VILE,         "1..." },
    { MR_VILE,         "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c67_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC68 - Mr. Vile wins easily (B:4 T:1)
static DialogLine c68_b[] = {
    { MR_VILE,         "\xA1" "JA! \xA1" "GAN\xC9 F\xC1" "CILMENTE!" },
    { MR_VILE,         "\xA1" "COMO CASTIGO TE VOY" },
    { MR_VILE,         "A MORDER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c68_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC69 - Mr. Vile round 3 start (B:10 T:1)
static DialogLine c69_b[] = {
    { MR_VILE,         "\xA1" "BAH! \xA1" "SUERTE DE PRINCIPIANTE!" },
    { MR_VILE,         "\xA1" "AHORA VIENE LA RONDA" },
    { MR_VILE,         "FINAL! \xA1" "SOLO COME LO" },
    { MR_VILE,         "QUE SE MUESTRA ARRIBA" },
    { MR_VILE,         "EN LA PANTALLA! \xBF" "LISTO?" },
    { MR_VILE,         "3..." },
    { MR_VILE,         "2..." },
    { MR_VILE,         "1..." },
    { MR_VILE,         "\xA1" "YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c69_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6A - Mr. Vile wins final (B:2 T:1)
static DialogLine c6a_b[] = {
    { MR_VILE,         "\xA1" "EL MARAVILLOSO MR. VILE HA GANADO! \xA1" "AHORA MUERDE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c6a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6B - Mr. Vile loses final (B:5 T:1)
static DialogLine c6b_b[] = {
    { MR_VILE,         "\xA1" "PERO SI YO NUNCA..." },
    { MR_VILE,         "HE PERDIDO! \xA1" "TOMA TU" },
    { MR_VILE,         "RECOMPENSA!" },
    { MR_VILE,         "" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c6b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6C - Mr. Vile rematch intro (B:5 T:1) - 0x01 = player choice
static DialogLine c6c_b[] = {
    { MR_VILE,         "\xBF" "TE ATREVES A VOLVER?" },
    { MR_VILE,         "\xA1" "PULSA A PARA JUGAR," },
    { MR_VILE,         "O B PARA SALIR" },
    { MR_VILE,         "CORRIENDO CON MAM\xC1!" },
    { 0x01, "" },
};
static DialogLine c6c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6D - Mr. Vile rematch R1 (B:4 T:1)
static DialogLine c6d_b[] = {
    { MR_VILE,         "\xA1" "MUY BIEN, EMPEZAMOS" },
    { MR_VILE,         "DESPACIO!" },
    { MR_VILE,         "\xA1" "LISTO... YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c6d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6E - Mr. Vile rematch R2 (B:5 T:1)
static DialogLine c6e_b[] = {
    { MR_VILE,         "HMMM... NO ESTABA EN" },
    { MR_VILE,         "FORMA. \xA1" "A LA SIGUIENTE" },
    { MR_VILE,         "RONDA!" },
    { MR_VILE,         "\xA1" "LISTO... YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c6e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC6F - Mr. Vile rematch R3 (B:4 T:1)
static DialogLine c6f_b[] = {
    { MR_VILE,         "GRRR... \xA1" "AHORA ES LA" },
    { MR_VILE,         "RONDA DECISIVA!" },
    { MR_VILE,         "\xA1" "LISTO... YA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c6f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC70 - Mr. Vile replay R2 (B:2 T:1)
static DialogLine c70_b[] = {
    { MR_VILE,         "\xA1" "REPETIMOS EL SEGUNDO JUEGO! \xA1" "RECUERDA, COME SOLO LO QUE SE MUESTRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c70_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC71 - Mr. Vile replay R3 (B:4 T:1)
static DialogLine c71_b[] = {
    { MR_VILE,         "\xA1" "REPETIMOS EL \xDALTIMO" },
    { MR_VILE,         "JUEGO!" },
    { MR_VILE,         "\xA1" "COME SOLO LO QUE SE MUESTRA EN LA PANTALLA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c71_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC8D - Mr. Vile special challenge (B:6 T:1) - 0x01 = player choice
static DialogLine c8d_b[] = {
    { MR_VILE,         "SI QUIERES, PODEMOS" },
    { MR_VILE,         "JUGAR UN JUEGO ESPECIAL." },
    { MR_VILE,         "\xA1" "DEBES GANAR LAS TRES" },
    { MR_VILE,         "PR\xD3XIMAS RONDAS PARA GANAR TRES VIDAS EXTRA!" },
    { MR_VILE,         "\xA1" "PULSA A PARA JUGAR, O B PARA HUIR!" },
    { 0x01, "" },
};
static DialogLine c8d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC8E - Mr. Vile brave (B:2 T:1)
static DialogLine c8e_b[] = {
    { MR_VILE,         "\xA1" "ERES MUY VALIENTE! \xA1" "ESTOY DESEANDO UN NUEVO DESAF\xCD" "O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c8e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC8F - Mr. Vile coward (B:5 T:1)
static DialogLine c8f_b[] = {
    { MR_VILE,         "JAJAJA... PARECES SER" },
    { MR_VILE,         "UN VERDADERO COBARDE." },
    { MR_VILE,         "\xA1" "MEJOR VETE DE AQU\xCD" },
    { MR_VILE,         "ANTES DE QUE CAMBIE DE IDEA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c8f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// TANKTUP & TIPTUP CHOIR (0xC72-0xC80)
// ============================================================

// 0xC72 - Tanktup intro (B:5 T:1)
static DialogLine c72_b[] = {
    { TANKTUP,         "\xA1" "SILENCIO POR FAVOR! \xA1" "EL" },
    { TANKTUP,         "FAMOSO CORO DE TIPTUP" },
    { TANKTUP,         "INTERPRETAR\xC1 MI NUEVA" },
    { TANKTUP,         "OBRA MAESTRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c72_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC73 - Tanktup lesson start (B:3 T:2)
static DialogLine c73_b[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { TANKTUP,         "\xA1" "ESPERA! \xA1" "REPITE ESTO PARA PASAR LA PRIMERA LECCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c73_t[] = {
    { KAZOOIE,         "\xBF" "BASTANTE CORTO, NO?" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC74 - Tanktup lesson resume (B:4 T:1)
static DialogLine c74_b[] = {
    { TANKTUP,         "\xBF" "EN QU\xC9 LECCI\xD3N" },
    { TANKTUP,         "NOS QUEDAMOS?" },
    { TANKTUP,         "\xA1" "AH S\xCD, YA RECUERDO...!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c74_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC75 - Tanktup wrong answer (B:3 T:1)
static DialogLine c75_b[] = {
    { TANKTUP,         "\xA1" "NO, AS\xCD NO!" },
    { TANKTUP,         "\xA1" "INT\xC9NTALO DE NUEVO, O P\xCD" "DEME QUE REPITA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c75_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC76 - Tiptup excited (B:4 T:1) - portrait 0xAE not 0x8D
static DialogLine c76_b[] = {
    { 0xAE,            "\xA1" "OYE GORDO! \xA1" "SEREMOS" },
    { 0xAE,            "M\xC1S FAMOSOS QUE LOS" },
    { 0xAE,            "COROS DE LA TELE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c76_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC77 - Tanktup lesson 1 pass (B:4 T:1)
static DialogLine c77_b[] = {
    { TANKTUP,         "HMMM... \xA1" "NADA MAL!" },
    { TANKTUP,         "\xA1" "INTENTA LA SEGUNDA" },
    { TANKTUP,         "LECCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c77_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC78 - Tanktup try again (B:4 T:1)
static DialogLine c78_b[] = {
    { TANKTUP,         "\xBF" "D\xD3NDE TIENEN LA" },
    { TANKTUP,         "CABEZA? \xA1" "BUENO, LO" },
    { TANKTUP,         "CANTAMOS DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c78_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC79 - Tanktup lesson 2 pass (B:4 T:1)
static DialogLine c79_b[] = {
    { TANKTUP,         "\xA1" "SON GENIOS MUSICALES!" },
    { TANKTUP,         "\xA1" "AQU\xCD VIENE LA \xDALTIMA" },
    { TANKTUP,         "LECCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c79_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7A - Tanktup concentrate (B:2 T:1)
static DialogLine c7a_b[] = {
    { TANKTUP,         "\xA1" "ESTA VEZ DEBER\xCD" "AN CONCENTRARSE DE VERDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7B - Tanktup final pass (B:5 T:1)
static DialogLine c7b_b[] = {
    { TANKTUP,         "\xA1" "MARAVILLOSO! \xA1" "UNA" },
    { TANKTUP,         "VERDADERA OBRA" },
    { TANKTUP,         "MAESTRA! \xA1" "TOMEN ESTA" },
    { TANKTUP,         "JOYA \xDANICA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7C - Tanktup knew it (B:4 T:1)
static DialogLine c7c_b[] = {
    { TANKTUP,         "SAB\xCD" "A QUE ESTA PIEZA" },
    { TANKTUP,         "LES DAR\xCD" "A" },
    { TANKTUP,         "PROBLEMAS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7D - Tanktup no more songs (B:4 T:1)
static DialogLine c7d_b[] = {
    { TANKTUP,         "LO SIENTO, PERO ESAS" },
    { TANKTUP,         "FUERON TODAS LAS" },
    { TANKTUP,         "PIEZAS QUE TENEMOS." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7E - Tiptup cold feet (B:4 T:1)
static DialogLine c7e_b[] = {
    { TIPTUP,          "AY... \xA1" "MIS PIES SE" },
    { TIPTUP,          "CONGELAN Y EST\xC1N" },
    { TIPTUP,          "ENTUMECIDOS! OHHHH..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC7F - Tiptup Tanktup feels better (B:6 T:1)
static DialogLine c7f_b[] = {
    { TIPTUP,          "\xA1" "TANKTUP SE SIENTE" },
    { TIPTUP,          "MUCHO MEJOR! \xA1" "AHORA" },
    { TIPTUP,          "ESTOY CALIENTITO!" },
    { TIPTUP,          "\xA1" "QUIZ\xC1S PUEDAN USAR" },
    { TIPTUP,          "ESTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c7f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC80 - Tiptup feels better (B:3 T:1)
static DialogLine c80_b[] = {
    { TIPTUP,          "AHHH... \xA1" "ESO EST\xC1" },
    { TIPTUP,          "MUCHO MEJOR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c80_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// FLIBBITS (0xC81-0xC84)
// ============================================================

// 0xC81 - Flibbits meet bear (B:2 T:1)
static DialogLine c81_b[] = {
    { FLIBIT,          "\xA1" "PUAJ! \xA1" "UN INTRUSO PELUDO! \xA1" "QUIERE NUESTRO TESORO! \xA1" "A POR \xC9L!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c81_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC82 - Flibbits defeat (B:4 T:1)
static DialogLine c82_b[] = {
    { FLIBIT,          "\xA1" "CROAC! \xA1" "SON DEMASIADO" },
    { FLIBIT,          "FUERTES PARA NOSOTROS!" },
    { FLIBIT,          "\xA1" "TOMEN NUESTRO ORO! \xA1" "CROAC!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c82_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC83 - Flibbits return (B:3 T:1)
static DialogLine c83_b[] = {
    { FLIBIT,          "\xA1" "VOLVI\xD3! \xA1" "A POR \xC9L" },
    { FLIBIT,          "CON TODO! \xA1" "CROAC!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c83_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC84 - Flibbits meet croc (B:2 T:1)
static DialogLine c84_b[] = {
    { FLIBIT,          "\xA1" "PUAJ! \xA1" "UN BOLSO CON PATAS! \xA1" "PROTEJAN NUESTRO ORO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c84_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// PIRANHA, CROCTUS (0xC85-0xC87)
// ============================================================

// 0xC85 - Piranha warning (B:4 T:1) portrait 0xA7
static DialogLine c85_b[] = {
    { PIRANHA,         "\xA1" "ESTE PANTANO ES" },
    { PIRANHA,         "NUESTRO! \xA1" "A LAS PIRA\xD1" "AS" },
    { PIRANHA,         "NO NOS GUSTAN LOS PIES APESTOSOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c85_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC86 - Croctus yummy (B:2 T:1)
static DialogLine c86_b[] = {
    { CROCTUS,         "\xA1" "RICO! \xA1" "A CROCTUS LE GUSTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c86_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC87 - Croctus wants egg (B:3 T:1)
static DialogLine c87_b[] = {
    { CROCTUS,         "\xA1" "YO TAMBI\xC9N QUIERO UN" },
    { CROCTUS,         "HUEVITO DELICIOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c87_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// BOTTLES BGS (0xC88-0xC8A) + ENTRANCE (0xF6B)
// ============================================================

// 0xF6B - Bottles BGS entrance (B:4 T:1)
static DialogLine f6b_b[] = {
    { BOTTLES,         "\xA1" "BUSCA UN NUEVO" },
    { BOTTLES,         "MOVIMIENTO, P\xC1JARO" },
    { BOTTLES,         "DORMIL\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f6b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC88 - Wading Boots learn (B:5 T:3)
static DialogLine c88_b[] = {
    { BOTTLES,         "\xA1" "ESAS SON BOTAS DE AGUA!" },
    { DIALOG_TRIGGER,  "\x01" },
    { BOTTLES,         "\xA1" "LA GALLINA EN TU ESPALDA PUEDE PON\xC9RSELAS Y CAMINAR POR ZONAS PELIGROSAS!" },
    { DIALOG_TRIGGER,  "\x02" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine c88_t[] = {
    { DIALOG_COND_MINIMIZE, "" },
    { BANJO,           "\xA1" "OK KAZOOIE, PROBEMOS ESTAS BOTAS DE AGUA!" },
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC89 - Wading Boots refresher (B:6 T:1)
static DialogLine c89_b[] = {
    { BOTTLES,         "KAZOOIE PUEDE CON LAS" },
    { BOTTLES,         "BOTAS DE AGUA CAMINAR" },
    { BOTTLES,         "POR UN TIEMPO POR" },
    { BOTTLES,         "ZONAS PELIGROSAS" },
    { BOTTLES,         "\xA1" "COMO ESTE PANTANO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c89_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC8A - Bottles all BGS moves (B:4 T:1)
static DialogLine c8a_b[] = {
    { BOTTLES,         "\xA1" "MARAVILLOSO! \xA1" "YA CONOCEN" },
    { BOTTLES,         "TODOS LOS NUEVOS" },
    { BOTTLES,         "MOVIMIENTOS DEL PANTANO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c8a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// ============================================================
// GRUNTY BGS TAUNTS (0xC8B-0xC8C)
// ============================================================

// 0xC8B - Grunty taunt 1 (B:3 T:1)
static DialogLine c8b_b[] = {
    { GRUNTY_P,        "ANTES DE QUE MI ORO EST\xC9 EN SU PODER," },
    { GRUNTY_P,        "\xA1" "TOOTY SER\xC1 VIEJA DE TANTO ESPERAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c8b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

// 0xC8C - Grunty taunt 2 (B:3 T:1)
static DialogLine c8c_b[] = {
    { GRUNTY_P,        "ESTE OSO NO SOLO ES MANSO," },
    { GRUNTY_P,        "\xA1" "ENCIMA TAMBI\xC9N ES MUY LENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine c8c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef bgs_defs[] = {
    // Mr. Vile
    DIALOG(0xC63, c63_b, c63_t),
    DIALOG(0xC64, c64_b, c64_t),
    DIALOG(0xC65, c65_b, c65_t),
    DIALOG(0xC66, c66_b, c66_t),
    DIALOG(0xC67, c67_b, c67_t),
    DIALOG(0xC68, c68_b, c68_t),
    DIALOG(0xC69, c69_b, c69_t),
    DIALOG(0xC6A, c6a_b, c6a_t),
    DIALOG(0xC6B, c6b_b, c6b_t),
    DIALOG(0xC6C, c6c_b, c6c_t),
    DIALOG(0xC6D, c6d_b, c6d_t),
    DIALOG(0xC6E, c6e_b, c6e_t),
    DIALOG(0xC6F, c6f_b, c6f_t),
    DIALOG(0xC70, c70_b, c70_t),
    DIALOG(0xC71, c71_b, c71_t),
    DIALOG(0xC8D, c8d_b, c8d_t),
    DIALOG(0xC8E, c8e_b, c8e_t),
    DIALOG(0xC8F, c8f_b, c8f_t),
    // Tanktup & Tiptup Choir
    DIALOG(0xC72, c72_b, c72_t),
    DIALOG(0xC73, c73_b, c73_t),
    DIALOG(0xC74, c74_b, c74_t),
    DIALOG(0xC75, c75_b, c75_t),
    DIALOG(0xC76, c76_b, c76_t),
    DIALOG(0xC77, c77_b, c77_t),
    DIALOG(0xC78, c78_b, c78_t),
    DIALOG(0xC79, c79_b, c79_t),
    DIALOG(0xC7A, c7a_b, c7a_t),
    DIALOG(0xC7B, c7b_b, c7b_t),
    DIALOG(0xC7C, c7c_b, c7c_t),
    DIALOG(0xC7D, c7d_b, c7d_t),
    // Tiptup
    DIALOG(0xC7E, c7e_b, c7e_t),
    DIALOG(0xC7F, c7f_b, c7f_t),
    DIALOG(0xC80, c80_b, c80_t),
    // Flibbits
    DIALOG(0xC81, c81_b, c81_t),
    DIALOG(0xC82, c82_b, c82_t),
    DIALOG(0xC83, c83_b, c83_t),
    DIALOG(0xC84, c84_b, c84_t),
    // Piranha & Croctus
    DIALOG(0xC85, c85_b, c85_t),
    DIALOG(0xC86, c86_b, c86_t),
    DIALOG(0xC87, c87_b, c87_t),
    // Bottles BGS
    DIALOG(0xF6B, f6b_b, f6b_t),
    DIALOG(0xC88, c88_b, c88_t),
    DIALOG(0xC89, c89_b, c89_t),
    DIALOG(0xC8A, c8a_b, c8a_t),
    // Grunty BGS
    DIALOG(0xC8B, c8b_b, c8b_t),
    DIALOG(0xC8C, c8c_b, c8c_t),
};

DialogDefTable bgs_table = {
    bgs_defs,
    sizeof(bgs_defs) / sizeof(bgs_defs[0])
};
