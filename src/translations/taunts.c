#include "translation.h"

/*
 * Grunty's Random Lair Taunts (0x0F82 - 0x0FA4)
 * All are B:3 or B:4, T:1 with portrait GRUNTY (0xB5) and C_ALT ending.
 * Grunty ALWAYS speaks in rhymes in Spanish.
 */

#define GRUNTY 0xB5

/* 0x0F82 - B:3 T:1 */
static DialogLine f82_b[] = {
    { GRUNTY,           "\xA1" "LA PUERTA AL MUNDO SE HA ABIERTO," },
    { GRUNTY,           "\xA1" "PREP\xC1RENSE, PORQUE EST\xC1N MUERTOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f82_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F86 - B:3 T:1 */
static DialogLine f86_b[] = {
    { GRUNTY,           "COMO TONTOS CORREN SIN PARAR," },
    { GRUNTY,           "\xA1" "SON TAN D\xC9" "BILES QUE DAN ASCO AL CAMINAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f86_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F87 - B:3 T:1 */
static DialogLine f87_b[] = {
    { GRUNTY,           "\xBF" "ME QUIEREN DESAFIAR?" },
    { GRUNTY,           "\xA1" "LES FALTA CEREBRO PARA PENSAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f87_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F88 - B:3 T:1 */
static DialogLine f88_b[] = {
    { GRUNTY,           "TIEMBLAN COMO HOJA EN EL VIENTO," },
    { GRUNTY,           "\xA1" "MEJOR HUYAN EN ESTE MOMENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f88_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F89 - B:4 T:1 */
static DialogLine f89_b[] = {
    { GRUNTY,           "EL OSO PELUDO TIENE NOVIA," },
    { GRUNTY,           "\xA1" "PERO ES TAN TONTA" },
    { GRUNTY,           "QUE DA CONGOJA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f89_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8A - B:4 T:1 */
static DialogLine f8a_b[] = {
    { GRUNTY,           "\xA1" "ESE CALZ\xD3N AMARILLO" },
    { GRUNTY,           "SOLO LO LLEVA" },
    { GRUNTY,           "UN COBARDILLO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8B - B:4 T:1 */
static DialogLine f8b_b[] = {
    { GRUNTY,           "EL P\xC1JARO PRONTO NO" },
    { GRUNTY,           "PODR\xC1 ESCAPAR," },
    { GRUNTY,           "\xA1" "EN MI PARRILLA LO VOY A ASAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8C - B:3 T:1 */
static DialogLine f8c_b[] = {
    { GRUNTY,           "OSO Y P\xC1JARO SON TAN TONTOS," },
    { GRUNTY,           "\xA1" "QUE DAN VUELTAS COMO BOBOS REDONDOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8D - B:3 T:1 */
static DialogLine f8d_b[] = {
    { GRUNTY,           "LA AVENTURA PRONTO ACABAR\xC1," },
    { GRUNTY,           "\xA1" "MEJOR V\xC1YANSE A SU HOGAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8E - B:3 T:1 */
static DialogLine f8e_b[] = {
    { GRUNTY,           "A ESTE P\xC1JARO RID\xCD" "CULO," },
    { GRUNTY,           "\xA1" "PRONTO SE LE ACABAR\xC1 EL OX\xCD" "GENO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F8F - B:3 T:1 */
static DialogLine f8f_b[] = {
    { GRUNTY,           "EL JUEGO SE PONE CADA VEZ MEJOR," },
    { GRUNTY,           "\xA1" "USTEDES VAN DIRECTO AL HORROR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f8f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F90 - B:4 T:1 */
static DialogLine f90_b[] = {
    { GRUNTY,           "GRUNTILDA LES VA A DAR" },
    { GRUNTY,           "UNA LECCI\xD3N," },
    { GRUNTY,           "\xA1" "LES AZOTAR\xC9 EL TRASERO SIN COMPASI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f90_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F91 - B:3 T:1 */
static DialogLine f91_b[] = {
    { GRUNTY,           "POBRE OSO, GORDO Y REDONDO," },
    { GRUNTY,           "\xA1" "PRONTO LO MANDAR\xC9 AL OTRO MUNDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f91_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F92 - B:3 T:1 */
static DialogLine f92_b[] = {
    { GRUNTY,           "CUANDO EL JUEGO TERMINE AL FIN," },
    { GRUNTY,           "\xA1" "LE ARRANCAR\xC9 LAS PLUMAS AL ZOPILOTE RUIN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f92_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F93 - B:3 T:1 */
static DialogLine f93_b[] = {
    { GRUNTY,           "AL P\xC1JARO YA LO HE HUMILLADO," },
    { GRUNTY,           "\xA1" "PRONTO CANTAR\xC1 EN EL GALLINERO OXIDADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f93_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F94 - B:3 T:1 */
static DialogLine f94_b[] = {
    { GRUNTY,           "DISPARA TUS HUEVOS AZULES SI QUIERES," },
    { GRUNTY,           "\xA1" "BUITRE APESTOSO, NO ME HIERES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f94_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F95 - B:3 T:1 */
static DialogLine f95_b[] = {
    { GRUNTY,           "SI SIGUEN A ESTE PASO TAN LENTO," },
    { GRUNTY,           "\xA1" "EL MUNDO ENTERO SE REIR\xC1 DEL CUENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f95_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F96 - B:3 T:1 */
static DialogLine f96_b[] = {
    { GRUNTY,           "LAS PATAS DE P\xC1JARO ME ENCANTAN," },
    { GRUNTY,           "\xA1" "SON UN POSTRE QUE ME ESPANTAN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f96_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F97 - B:3 T:1 */
static DialogLine f97_b[] = {
    { GRUNTY,           "LES QUIERO COMPARTIR UNA RECETA," },
    { GRUNTY,           "\xA1" "EL MEJOR ASADO DE OSO EN MI BANQUETA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f97_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F98 - B:3 T:1 */
static DialogLine f98_b[] = {
    { GRUNTY,           "LOS VEO DESDE AQU\xCD ARRIBA," },
    { GRUNTY,           "\xA1" "EN MI CAMA BAILAN LAS PULGAS VIVAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f98_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F99 - B:3 T:1 */
static DialogLine f99_b[] = {
    { GRUNTY,           "EL PELO GRASIENTO NO ME IMPORTA," },
    { GRUNTY,           "\xA1" "LAS VERRUGAS ADORNAN MI CARA TONTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f99_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9A - B:3 T:1 */
static DialogLine f9a_b[] = {
    { GRUNTY,           "ME VOY A VENGAR CON AMARGURA," },
    { GRUNTY,           "\xA1" "LOS ROMPER\xC9 COMO RAMITAS DE BASURA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9B - B:3 T:1 */
static DialogLine f9b_b[] = {
    { GRUNTY,           "A LOS ANIMALES LOS QUIERO MUCHO," },
    { GRUNTY,           "\xA1" "CUANDO DUERMEN EN SU ATA\xDA" "D, LOS ESCUCHO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9C - B:3 T:1 */
static DialogLine f9c_b[] = {
    { GRUNTY,           "SU FINAL LO VEO CLARO," },
    { GRUNTY,           "\xA1" "USTEDES SON GUSANOS, YO SOY EL P\xC1JARO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9D - B:3 T:1 */
static DialogLine f9d_b[] = {
    { GRUNTY,           "\xBF" "USTEDES SON LOS H\xC9ROES DE VERDAD?" },
    { GRUNTY,           "\xA1" "UN P\xC1JARO FLACO Y UN OSO DE OBESIDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9E - B:3 T:1 */
static DialogLine f9e_b[] = {
    { GRUNTY,           "TOOTY LLORA, POBRECITA," },
    { GRUNTY,           "\xA1" "SU HERMANO CORRE COMO CUCARACHITA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0F9F - B:3 T:1 */
static DialogLine f9f_b[] = {
    { GRUNTY,           "PRONTO CAE EL \xDA" "LTIMO TEL\xD3N," },
    { GRUNTY,           "\xA1" "PARA EXTRAS NO HAY NING\xDA" "N DOBL\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine f9f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0FA0 - B:3 T:1 */
static DialogLine fa0_b[] = {
    { GRUNTY,           "MI PODER ES INMENSO Y BRUTAL," },
    { GRUNTY,           "\xA1" "TOOTY ENVEJECER\xC1 EN MI CORRAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0FA1 - B:3 T:1 */
static DialogLine fa1_b[] = {
    { GRUNTY,           "EL P\xC1JARO SOLO DICE TONTER\xCD" "AS," },
    { GRUNTY,           "\xA1" "EL OSO ARRASTRA SU PAPADA TODOS LOS D\xCD" "AS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0FA2 - B:3 T:1 */
static DialogLine fa2_b[] = {
    { GRUNTY,           "PARA M\xCD SON UN TRAPO ROJO," },
    { GRUNTY,           "\xA1" "PRONTO LES LANZAR\xC9 OTRO EMBROJO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0FA3 - B:3 T:1 */
static DialogLine fa3_b[] = {
    { GRUNTY,           "NO ME MOLESTA NI UN POQUITO," },
    { GRUNTY,           "\xA1" "O\xCDR LOS GRITOS DE TOOTY, QU\xC9 BONITO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x0FA4 - B:3 T:1 */
static DialogLine fa4_b[] = {
    { GRUNTY,           "\xA1" "OH, PANDILLA DE MISERABLES!" },
    { GRUNTY,           "\xA1" "MI ESCOBA LOS HAR\xC1 LAMENTABLES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine fa4_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef taunts_defs[] = {
    DIALOG(0x0F82, f82_b, f82_t),
    DIALOG(0x0F86, f86_b, f86_t),
    DIALOG(0x0F87, f87_b, f87_t),
    DIALOG(0x0F88, f88_b, f88_t),
    DIALOG(0x0F89, f89_b, f89_t),
    DIALOG(0x0F8A, f8a_b, f8a_t),
    DIALOG(0x0F8B, f8b_b, f8b_t),
    DIALOG(0x0F8C, f8c_b, f8c_t),
    DIALOG(0x0F8D, f8d_b, f8d_t),
    DIALOG(0x0F8E, f8e_b, f8e_t),
    DIALOG(0x0F8F, f8f_b, f8f_t),
    DIALOG(0x0F90, f90_b, f90_t),
    DIALOG(0x0F91, f91_b, f91_t),
    DIALOG(0x0F92, f92_b, f92_t),
    DIALOG(0x0F93, f93_b, f93_t),
    DIALOG(0x0F94, f94_b, f94_t),
    DIALOG(0x0F95, f95_b, f95_t),
    DIALOG(0x0F96, f96_b, f96_t),
    DIALOG(0x0F97, f97_b, f97_t),
    DIALOG(0x0F98, f98_b, f98_t),
    DIALOG(0x0F99, f99_b, f99_t),
    DIALOG(0x0F9A, f9a_b, f9a_t),
    DIALOG(0x0F9B, f9b_b, f9b_t),
    DIALOG(0x0F9C, f9c_b, f9c_t),
    DIALOG(0x0F9D, f9d_b, f9d_t),
    DIALOG(0x0F9E, f9e_b, f9e_t),
    DIALOG(0x0F9F, f9f_b, f9f_t),
    DIALOG(0x0FA0, fa0_b, fa0_t),
    DIALOG(0x0FA1, fa1_b, fa1_t),
    DIALOG(0x0FA2, fa2_b, fa2_t),
    DIALOG(0x0FA3, fa3_b, fa3_t),
    DIALOG(0x0FA4, fa4_b, fa4_t),
};

DialogDefTable taunts_table = {
    taunts_defs,
    sizeof(taunts_defs) / sizeof(taunts_defs[0])
};
