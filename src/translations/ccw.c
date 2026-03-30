#include "translation.h"

/*
 * Click Clock Wood (World 9) - CCW
 * Portraits: 0xC4=Nabnut, 0xC1=Gnawty, 0xC6=Eyrie baby, 0xC7=Eyrie young,
 *   0xC8=Eyrie teen, 0xC9=Eyrie adult, 0x91=Gobi, 0xC3=Zubbas,
 *   0xA4=Mumbo sign, 0x84=Mumbo
 * Faithful to German structure
 */

#define NABNUT      0xC4
#define GNAWTY      0xC1
#define EYRIE_BABY  0xC6
#define EYRIE_YOUNG 0xC7
#define EYRIE_TEEN  0xC8
#define EYRIE_ADULT 0xC9
#define GOBI_P      0x91
#define ZUBBAS      0xC3
#define MUMBO_SIGN  0xA4
#define GRUNTY_P    0xB5

// ============================================================
// NABNUT - Squirrel (portrait 0xC4)
// ============================================================

// 0xCC8 - Nabnut spring (B:4 T:1)
static DialogLine cc8_b[] = {
    { NABNUT,          "\xA1" "NABNUT ADORA LAS BELLOTAS!" },
    { NABNUT,          "VOY A SEGUIR COMIENDO" },
    { NABNUT,          "UN RATITO M\xC1S..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cc8_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCC9 - Nabnut summer no acorns (B:2 T:1)
static DialogLine cc9_b[] = {
    { NABNUT,          "NABNUT SE HA COMIDO MUCHAS BELLOTAS. \xA1" "AHORA NO TENGO RESERVAS PARA EL INVIERNO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cc9_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCCA - Nabnut autumn needs acorns (B:2 T:1)
static DialogLine cca_b[] = {
    { NABNUT,          "\xA1" "HOLA, OSO! NECESITO SEIS BELLOTAS DELICIOSAS ANTES DE QUE LLEGUE EL INVIERNO." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cca_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCCB - Nabnut still needs more (B:3 T:1)
static DialogLine ccb_b[] = {
    { NABNUT,          "AY, NABNUT TODAV\xCD" "A" },
    { NABNUT,          "NO TIENE SUFICIENTES BELLOTAS. QU\xC9 PENA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ccb_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCCC - Nabnut enough acorns (B:2 T:1)
static DialogLine ccc_b[] = {
    { NABNUT,          "\xA1" "GENIAL, AS\xCD PASAR\xC9 BIEN EL INVIERNO! \xA1" "TOMA ESTO! \xA1" "NOS VEMOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ccc_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCCD - Nabnut winter sleeping (B:2 T:1)
static DialogLine ccd_b[] = {
    { NABNUT,          "ZZZZ... MMMM... ZZZ... BELLOTAS... ZZZZZ..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ccd_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// GNAWTY - Beaver (portrait 0xC1)
// ============================================================

// 0xCCE - Gnawty spring boulder (B:2 T:1)
static DialogLine cce_b[] = {
    { GNAWTY,          "ALGUIEN TIENE QUE QUITAR ESTA ROCA. \xA1" "GNAWTY NO PUEDE ENTRAR A SU CASA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cce_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCCF - Gnawty summer ask help (B:2 T:1)
static DialogLine ccf_b[] = {
    { GNAWTY,          "\xA1" "PARECES MUY FUERTE! \xBF" "PUEDES AYUDARME A QUITAR ESTA ROCA?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ccf_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD0 - Gnawty summer helped (B:5 T:1)
static DialogLine cd0_b[] = {
    { GNAWTY,          "\xA1" "VAYA, QU\xC9 FUERTE ERES!" },
    { GNAWTY,          "\xA1" "ENTRA Y TE DAR\xC9" },
    { GNAWTY,          "UNA GRAN" },
    { GNAWTY,          "RECOMPENSA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd0_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD1 - Gnawty autumn cold outside (B:2 T:1)
static DialogLine cd1_b[] = {
    { GNAWTY,          "CADA VEZ HACE M\xC1S FR\xCD" "O AQU\xCD FUERA. \xA1" "OJALÁ ESTUVIERA DENTRO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd1_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD2 - Gnawty autumn waited (B:2 T:1)
static DialogLine cd2_b[] = {
    { GNAWTY,          "\xA1" "POR FIN LLEGASTE! \xA1" "LLEVO MESES ESPER\xC1NDOTE PARA DARTE ESTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd2_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD3 - Gnawty winter freezing (B:2 T:1)
static DialogLine cd3_b[] = {
    { GNAWTY,          "BRRR... \xA1" "ME CONGELO MISERABLEMENTE! \xA1" "ES TODA TU CULPA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd3_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD4 - Gnawty winter icy swim (B:7 T:1)
static DialogLine cd4_b[] = {
    { GNAWTY,          "PARECE QUE DE VERDAD" },
    { GNAWTY,          "NECESITABAS ESTO SI" },
    { GNAWTY,          "INCLUSO NADASTE" },
    { GNAWTY,          "POR EL AGUA" },
    { GNAWTY,          "HELADA" },
    { GNAWTY,          "\xA1" "VOLUNTARIAMENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd4_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD5 - Gnawty winter no visitors (B:4 T:1)
static DialogLine cd5_b[] = {
    { GNAWTY,          "\xA1" "UPS! NORMALMENTE" },
    { GNAWTY,          "NO RECIBO VISITAS" },
    { GNAWTY,          "EN INVIERNO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd5_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// EYRIE - Eagle growth stages
// ============================================================

// 0xCD6 - Eyrie baby spring (B:5 T:1)
static DialogLine cd6_b[] = {
    { EYRIE_BABY,      "P\xCD" "O... \xA1" "SOY EYRIE!" },
    { EYRIE_BABY,      "BEB\xC9 QUIERE SER UN" },
    { EYRIE_BABY,      "\xC1GUILA PODEROSA." },
    { EYRIE_BABY,      "BEB\xC9 TIENE SUE\xD1O..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd6_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD7 - Eyrie young summer hungry (B:3 T:1)
static DialogLine cd7_b[] = {
    { EYRIE_YOUNG,     "\xA1" "EYRIE TIENE HAMBRE!" },
    { EYRIE_YOUNG,     "\xA1" "QUIERE CINCO ORUGAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd7_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD8 - Eyrie young yum (B:2 T:1)
static DialogLine cd8_b[] = {
    { EYRIE_YOUNG,     "MMM... \xA1" "BIEN JUGOSAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd8_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCD9 - Eyrie young full (B:3 T:1)
static DialogLine cd9_b[] = {
    { EYRIE_YOUNG,     "\xA1" "BUUURP! YA ESTOY" },
    { EYRIE_YOUNG,     "LLENO. QUIERO DORMIR..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cd9_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCDA - Eyrie teen autumn hungry (B:4 T:1)
static DialogLine cda_b[] = {
    { EYRIE_TEEN,      "\xA1" "OSO TRAER M\xC1S COMIDA!" },
    { EYRIE_TEEN,      "\xA1" "BEB\xC9 TIENE HAMBRE!" },
    { EYRIE_TEEN,      "\xA1" "QUIERE DIEZ ORUGAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cda_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCDB - Eyrie teen full (B:2 T:1)
static DialogLine cdb_b[] = {
    { EYRIE_TEEN,      "\xA1" "GRACIAS, OSO! \xA1" "PRONTO SER\xC9 UN GRAN \xC1GUILA! AHORA DEBO DORMIR..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cdb_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCDC - Eyrie adult winter fly (B:5 T:1)
static DialogLine cdc_b[] = {
    { EYRIE_ADULT,     "\xA1" "M\xCDRAME VOLAR! \xA1" "QU\xC9" },
    { EYRIE_ADULT,     "BIEN LO HAGO! \xA1" "YA SOY" },
    { EYRIE_ADULT,     "UN \xC1GUILA" },
    { EYRIE_ADULT,     "ADULTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cdc_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCDD - Eyrie adult reward (B:4 T:1)
static DialogLine cdd_b[] = {
    { EYRIE_ADULT,     "TENGO UNA RECOMPENSA" },
    { EYRIE_ADULT,     "PARA TI, AMIGO." },
    { EYRIE_ADULT,     "AQU\xCD EST\xC1..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cdd_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// GOBI returns (portrait 0x91)
// ============================================================

// 0xCDE - Gobi CCW meet (B:2 T:1)
static DialogLine cde_b[] = {
    { GOBI_P,          "\xA1" "OH NO! \xA1" "USTEDES DOS DE NUEVO! \xA1" "GOBI PENSABA QUE AQU\xCD ESTAR\xCD" "A A SALVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cde_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCDF - Gobi CCW stop it (B:5 T:1)
static DialogLine cdf_b[] = {
    { GOBI_P,          "\xA1" "DEJEN DE HACER ESO!" },
    { GOBI_P,          "\xA1" "ME TOMAR\xC1 A\xD1OS" },
    { GOBI_P,          "ENCONTRAR TANTA" },
    { GOBI_P,          "AGUA DE NUEVO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine cdf_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE0 - Gobi CCW leaves (B:2 T:1)
static DialogLine ce0_b[] = {
    { GOBI_P,          "\xA1" "TENGO UNA IDEA! \xA1" "ME VOY AL MUNDO DE LAVA! \xA1" "AH\xCD NO ME ENCONTRAR\xC1N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce0_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// ZUBBAS - Bees (portrait 0xC3)
// ============================================================

// 0xCE1 - Zubbas spring meet (B:2 T:1)
static DialogLine ce1_b[] = {
    { ZUBBAS,          "BZZZ... \xA1" "HOLA, ABEJA GORDA! \xA1" "LAS ZUBBAS CUSTODIAMOS EL ORO DE GRUNTILDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce1_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE2 - Zubbas alarm (B:2 T:1)
static DialogLine ce2_b[] = {
    { ZUBBAS,          "BZZZ... \xA1" "ALARMA! \xA1" "AH\xCD EST\xC1 EL OSO GORDO! \xA1" "QUIERE EL ORO DE GRUNTILDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce2_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE3 - Zubbas he's back (B:3 T:1)
static DialogLine ce3_b[] = {
    { ZUBBAS,          "BZZZ... \xA1" "HA VUELTO!" },
    { ZUBBAS,          "\xA1" "PIQUEN AL PELUDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce3_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE4 - Zubbas defeated (B:4 T:1)
static DialogLine ce4_b[] = {
    { ZUBBAS,          "BZZZ... \xA1" "NOS HA VENCIDO!" },
    { ZUBBAS,          "BUENO, DE TODAS FORMAS" },
    { ZUBBAS,          "ERA UN TRABAJO ABURRIDO VIGILAR ESA COSA TODO EL D\xCD" "A..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce4_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE5 - Zubbas gone (B:5 T:1)
static DialogLine ce5_b[] = {
    { ZUBBAS,          "BZZZ... \xA1" "AQU\xCD YA NO" },
    { ZUBBAS,          "QUEDA NADA, OSO!" },
    { ZUBBAS,          "\xA1" "TODAS NOS HEMOS" },
    { ZUBBAS,          "IDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce5_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// GRUNTY CCW + MMM TAUNTS
// ============================================================

// 0xCE6 - Grunty MMM brambles (B:3 T:1)
static DialogLine ce6_b[] = {
    { GRUNTY_P,        "AH\xCD SUFRE ESE POBRE ANIMAL," },
    { GRUNTY_P,        "\xA1" "OJALÁ FUERA UN FAQUIR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce6_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE7 - Grunty CCW icy water swim (B:3 T:1)
static DialogLine ce7_b[] = {
    { GRUNTY_P,        "\xA1" "BUCEA EN EL AGUA HELADA," },
    { GRUNTY_P,        "TUS RESERVAS DE AIRE SE ACABAR\xC1N PRONTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce7_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xCE8 - Grunty CCW icy water dive (B:3 T:1)
static DialogLine ce8_b[] = {
    { GRUNTY_P,        "PARA BUCEAR EN AGUA HELADA," },
    { GRUNTY_P,        "\xA1" "NECESITAR\xC1S EL DOBLE DE AIRE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine ce8_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// ============================================================
// MUMBO CCW SEASONS
// ============================================================

// 0xDA7 - Mumbo CCW summer (B:2 T:1)
static DialogLine da7_b[] = {
    { MUMBO,           "\xA1" "MUCHO CALOR PARA MAGIA! \xA1" "MUMBO PREFERIR BA\xD1O DE SOL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da7_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xDA8 - Mumbo CCW autumn (B:2 T:1)
static DialogLine da8_b[] = {
    { MUMBO,           "\xA1" "PUF! \xA1" "MUMBO MUCHO TRABAJO CON HOJAS EN SUELO! \xA1" "HOY NADA DE MAGIA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da8_t[] = { { DIALOG_CLOSE_ALT, "" }, };

// 0xDA9 - Mumbo CCW vacation sign (B:2 T:1)
static DialogLine da9_b[] = {
    { MUMBO_SIGN,      "\xA1" "MUMBO EST\xC1 DE VACACIONES! \xA1" "VUELVAN EN PRIMAVERA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine da9_t[] = { { DIALOG_CLOSE_ALT, "" }, };

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef ccw_defs[] = {
    // Nabnut
    DIALOG(0xCC8, cc8_b, cc8_t),
    DIALOG(0xCC9, cc9_b, cc9_t),
    DIALOG(0xCCA, cca_b, cca_t),
    DIALOG(0xCCB, ccb_b, ccb_t),
    DIALOG(0xCCC, ccc_b, ccc_t),
    DIALOG(0xCCD, ccd_b, ccd_t),
    // Gnawty
    DIALOG(0xCCE, cce_b, cce_t),
    DIALOG(0xCCF, ccf_b, ccf_t),
    DIALOG(0xCD0, cd0_b, cd0_t),
    DIALOG(0xCD1, cd1_b, cd1_t),
    DIALOG(0xCD2, cd2_b, cd2_t),
    DIALOG(0xCD3, cd3_b, cd3_t),
    DIALOG(0xCD4, cd4_b, cd4_t),
    DIALOG(0xCD5, cd5_b, cd5_t),
    // Eyrie
    DIALOG(0xCD6, cd6_b, cd6_t),
    DIALOG(0xCD7, cd7_b, cd7_t),
    DIALOG(0xCD8, cd8_b, cd8_t),
    DIALOG(0xCD9, cd9_b, cd9_t),
    DIALOG(0xCDA, cda_b, cda_t),
    DIALOG(0xCDB, cdb_b, cdb_t),
    DIALOG(0xCDC, cdc_b, cdc_t),
    DIALOG(0xCDD, cdd_b, cdd_t),
    // Gobi returns
    DIALOG(0xCDE, cde_b, cde_t),
    DIALOG(0xCDF, cdf_b, cdf_t),
    DIALOG(0xCE0, ce0_b, ce0_t),
    // Zubbas
    DIALOG(0xCE1, ce1_b, ce1_t),
    DIALOG(0xCE2, ce2_b, ce2_t),
    DIALOG(0xCE3, ce3_b, ce3_t),
    DIALOG(0xCE4, ce4_b, ce4_t),
    DIALOG(0xCE5, ce5_b, ce5_t),
    // Grunty CCW + MMM
    DIALOG(0xCE6, ce6_b, ce6_t),
    DIALOG(0xCE7, ce7_b, ce7_t),
    DIALOG(0xCE8, ce8_b, ce8_t),
    // Mumbo CCW seasons
    DIALOG(0xDA7, da7_b, da7_t),
    DIALOG(0xDA8, da8_b, da8_t),
    DIALOG(0xDA9, da9_b, da9_t),
};

DialogDefTable ccw_table = {
    ccw_defs,
    sizeof(ccw_defs) / sizeof(ccw_defs[0])
};
