#include "translation.h"

/*
 * Brentilda Translations - Gossip about Gruntilda
 *
 * Brentilda (portrait 0xCB) is Grunty's nice sister.
 * She reveals embarrassing facts about Grunty.
 * Each gossip has: 1 question line with ~! + 3 choices + close.
 *
 * Assets 0x1083-0x10A0: 30 gossip facts (10 encounters x 3 facts)
 * Asset 0x10A1: Brentilda intro dialog
 * Asset 0x10A2: Brentilda heal dialog
 *
 * Portraits:
 *   0xCB = Brentilda
 */

#define BRENTILDA 0xCB

/* ============================================================
 * 0x1083 - Gossip: Grunty brushes her teeth with...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1083_b[] = {
    { BRENTILDA,        "GRUNTILDA SE LAVA LOS DIENTES CON ~!" },
    { 0x08,             "BARRO" },
    { 0x08,             "PIEL DE MURCI\xC9LAGO" },
    { 0x08,             "QUESO APESTOSO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1083_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1084 - Gossip: Grunty washes her hair with...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1084_b[] = {
    { BRENTILDA,        "SE LAVA EL PELO CON ~!" },
    { 0x08,             "CACA DE MURCI\xC9LAGO" },
    { 0x08,             "ACEITE DE MOTOR" },
    { 0x08,             "LECHE RANCIA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1084_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1085 - Gossip: Grunty gets her clothes from...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1085_b[] = {
    { BRENTILDA,        "SU ROPA LA CONSIGUE EN ~!" },
    { 0x08,             "EL CONTENEDOR DE BASURA" },
    { 0x08,             "LA BOUTIQUE DE SAGGY MAGGY" },
    { 0x08,             "EL BAZAR DE LAS BRUJAS" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x1085_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1086 - Gossip: Grunty's nickname at witch school...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1086_b[] = {
    { BRENTILDA,        "EN LA ESCUELA DE BRUJAS SU APODO ERA ~!" },
    { 0x08,             "CARA DE BUITRE" },
    { 0x08,             "NARIZ DE \xC1GUILA" },
    { 0x08,             "CABEZA DE VERRUGA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1086_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1087 - Gossip: Grunty's favorite smell...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1087_b[] = {
    { BRENTILDA,        "EL OLOR FAVORITO DE LA VIEJA VERRUGOSA ES ~!" },
    { 0x08,             "AZUFRE APESTOSO" },
    { 0x08,             "PIE DE MONO SUDADO" },
    { 0x08,             "GRASA DE SERPIENTE RANCIA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1087_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1088 - Gossip: Grunty's favorite color...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1088_b[] = {
    { BRENTILDA,        "TAMBI\xC9N SE DICE QUE SU COLOR FAVORITO ES ~!" },
    { 0x08,             "GRIS L\xC1PIDA" },
    { 0x08,             "ROJO NARANJA SANGRE" },
    { 0x08,             "VERDE V\xD3MITO" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x1088_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1089 - Gossip: Grunty's favorite sport...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1089_b[] = {
    { BRENTILDA,        "EL DEPORTE FAVORITO DE MI HERMANA ES ~!" },
    { 0x08,             "LEVANTAR CALDEROS" },
    { 0x08,             "LANZAR LIBROS DE HECHIZOS" },
    { 0x08,             "CARRERAS DE ESCOBA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1089_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108A - Gossip: Grunty graduated from...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108A_b[] = {
    { BRENTILDA,        "AUNQUE ES TAN BOBA, SE GRADU\xD3 EN LA ~ \xA1" "INCRE\xCD" "BLE!" },
    { 0x08,             "UNIVERSIDAD DE BRUJAS" },
    { 0x08,             "FREIDUR\xCD" "A DE PATATAS" },
    { 0x08,             "PARADA DE AUTOB\xDA" "S" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x108A_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108B - Gossip: Grunty's party trick...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108B_b[] = {
    { BRENTILDA,        "LA MAN\xCD" "A DE GRUNTILDA EN LAS FIESTAS ES ~!" },
    { 0x08,             "COMERSE A LOS INVITADOS" },
    { 0x08,             "TOMAR REHENES" },
    { 0x08,             "BEBER DEL INODORO" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x108B_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108C - Gossip: Grunty eats for breakfast...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108C_b[] = {
    { BRENTILDA,        "PARA DESAYUNAR COME ~!" },
    { 0x08,             "GRILLOS A LA PARRILLA" },
    { 0x08,             "OJOS DE RANA APLASTADOS" },
    { 0x08,             "ORUGAS EN TOSTADA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x108C_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108D - Gossip: Grunty's dinner is...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108D_b[] = {
    { BRENTILDA,        "PARA CENAR SE COME ~!" },
    { 0x08,             "BABA DE CARACOL" },
    { 0x08,             "HAMBURGUESA DE MURCI\xC9LAGO" },
    { 0x08,             "FILETE DE GATO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x108D_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108E - Gossip: Grunty's favorite dessert...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108E_b[] = {
    { BRENTILDA,        "A LA CARA VERRUGA LE ENCANTA DE POSTRE ~. \xA1" "QU\xC9" " ASCO!" },
    { 0x08,             "HELADO DE GLOBO OCULAR" },
    { 0x08,             "CARNE PICADA CON MERMELADA" },
    { 0x08,             "ENSALADA DE GUSANOS" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x108E_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x108F - Gossip: Things hanging from Grunty's bedroom ceiling...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x108F_b[] = {
    { BRENTILDA,        "DEL TECHO DEL DORMITORIO DE GRUNTILDA CUELGAN ~!" },
    { 0x08,             "PESCADOS PODRIDOS" },
    { 0x08,             "CALCETINES APESTOSOS" },
    { 0x08,             "GUSANOS MOHOSOS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x108F_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1090 - Gossip: Plant growing in Grunty's window...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1090_b[] = {
    { BRENTILDA,        "EN SU VENTANA HAY UNA MACETA DONDE CRECE ~!" },
    { 0x08,             "UN \xC1RBOL DE OJOS SALTONES" },
    { 0x08,             "UNA VENUS ATRAPAMOSCAS" },
    { 0x08,             "UNA ROSA DE ESPINAS VENENOSAS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1090_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1091 - Gossip: Grunty's underwear color...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1091_b[] = {
    { BRENTILDA,        "LA ROPA INTERIOR DE GRUNTILDA ES ~!" },
    { 0x08,             "DE RAYAS NEGRIAZULES" },
    { 0x08,             "DE LUNARES ROSIVERDE" },
    { 0x08,             "AMARILLO VENENO SALPICADA" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x1091_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1092 - Gossip: Grunty's best friend at witch school...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1092_b[] = {
    { BRENTILDA,        "EL MEJOR AMIGO DE GRUNTILDA EN LA ESCUELA DE BRUJAS ERA ~!" },
    { 0x08,             "UNA SERPIENTE DE CASCABEL" },
    { 0x08,             "LA PIZARRA" },
    { 0x08,             "EL CONSERJE" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1092_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1093 - Gossip: Grunty reads to relax...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1093_b[] = {
    { BRENTILDA,        "PARA RELAJARSE LEE ~!" },
    { 0x08,             "EL MUNDO DE LAS BRUJAS" },
    { 0x08,             "LA REVISTA BRUJIL" },
    { 0x08,             "EL CORREO DEL CALDERO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1093_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1094 - Gossip: Grunty's favorite drink...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1094_b[] = {
    { BRENTILDA,        "Y MIENTRAS TANTO SORBE CON GUSTO UN ~!" },
    { 0x08,             "BATIDO DE RATA" },
    { 0x08,             "C\xD3" "CTEL DE PATAS DE ARA\xD1" "A" },
    { 0x08,             "BEBIDA DE BABA DE SAPO" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x1094_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1095 - Gossip: Grunty sleeps in...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1095_b[] = {
    { BRENTILDA,        "MI PEREZOSA HERMANA SUELE DORMIR EN ~!" },
    { 0x08,             "UNA CAMA DE CLAVOS" },
    { 0x08,             "UN CONTENEDOR DE BASURA" },
    { 0x08,             "UNA POCILGA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1095_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1096 - Gossip: Grunty won first prize at...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1096_b[] = {
    { BRENTILDA,        "GRUNTILDA GAN\xD3 EL PRIMER PREMIO EN EL CONCURSO DE ~!" },
    { 0x08,             "CARAS VERRUGOSAS" },
    { 0x08,             "AGUAFIESTAS" },
    { 0x08,             "CALCETINES APESTOSOS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1096_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1097 - Gossip: Grunty on magazine cover...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1097_b[] = {
    { BRENTILDA,        "UNA VEZ SALI\xD3 EN LA PORTADA DE BRUJAS ESPECIAL. LA FOTO MUESTRA C\xD3MO ELLA ~!" },
    { 0x08,             "PEGA A NI\xD1OS PEQUE\xD1OS" },
    { 0x08,             "POSA EN ROPA INTERIOR" },
    { 0x08,             "SE HURGA LA NARIZ" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x1097_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1098 - Gossip: Grunty's favorite hobby...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1098_b[] = {
    { BRENTILDA,        "EL PASATIEMPO FAVORITO DE GRUNTILDA ES ~!" },
    { 0x08,             "COMER CHOCOLATE DE HORMIGAS" },
    { 0x08,             "REVENTARSE LOS GRANOS" },
    { 0x08,             "MORDERSE LAS U\xD1" "AS DE LOS PIES" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1098_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1099 - Gossip: Grunty's only boyfriend...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x1099_b[] = {
    { BRENTILDA,        "UN POBRE TIPO LLAMADO ~ FUE SU PRIMER Y \xDA" "NICO NOVIO!" },
    { 0x08,             "PEPE LETRINA" },
    { 0x08,             "JUAN SIN GRACIA" },
    { 0x08,             "MEMO CABEZA HUECA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x1099_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109A - Gossip: Grunty's pet years ago...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109A_b[] = {
    { BRENTILDA,        "HACE MUCHOS A\xD1OS GRUNTILDA TEN\xCD" "A ~ COMO MASCOTA!" },
    { 0x08,             "UNA RANA MUERTA" },
    { 0x08,             "UN MURCI\xC9LAGO DE TRES CABEZAS" },
    { 0x08,             "UNA GALLINA SIN CABEZA" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x109A_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109B - Gossip: Grunty's lucky charm...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109B_b[] = {
    { BRENTILDA,        "LA VIEJA BRUJA LLEVA ~ COMO AMULETO EN SU BOLSILLO!" },
    { 0x08,             "UNA CABEZA REDUCIDA" },
    { 0x08,             "UNA COLA DE MOFETA" },
    { 0x08,             "UNA PATA DE CERDO" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x109B_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109C - Gossip: Grunty cuddles at night with...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109C_b[] = {
    { BRENTILDA,        "DICEN QUE POR LAS NOCHES EN LA CAMA SE ABRAZA A ~!" },
    { 0x08,             "UNA CALAVERA" },
    { 0x08,             "UNA COBRA VIVA" },
    { 0x08,             "UN MU\xD1" "ECO DE VUD\xDA" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x109C_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109D - Gossip: Grunty's broomstick speed...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109D_b[] = {
    { BRENTILDA,        "LA ESCOBA M\xC1GICA DE GRUNTILDA VUELA M\xC1S R\xC1PIDO QUE ~!" },
    { 0x08,             "EL SONIDO" },
    { 0x08,             "LA LUZ" },
    { 0x08,             "UNA MOSCA COJA" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x109D_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109E - Gossip: What Grunty wears under her clothes...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109E_b[] = {
    { BRENTILDA,        "\xBF" "SAB\xCD" "AS QUE GRUNTILDA LLEVA ~ BAJO SU TRAJE DE BRUJA?" },
    { 0x08,             "UNA RATA MUERTA" },
    { 0x08,             "UN BABERO" },
    { 0x08,             "UN CIRCO DE PULGAS" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x109E_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x109F - Gossip: Grunty's horrible dog's name...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x109F_b[] = {
    { BRENTILDA,        "TAMBI\xC9N TEN\xCD" "A UN PERRO HORRIBLE QUE SE LLAMABA ~!" },
    { 0x08,             "CHUCHI" },
    { 0x08,             "DESTRIPADOR" },
    { 0x08,             "LASSIE" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x109F_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10A0 - Gossip: Grunty's band name...
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x10A0_b[] = {
    { BRENTILDA,        "MI HERMANA CANTA EN SU PROPIA BANDA ~. \xA1" "QU\xC9 M\xDA" "SICA TAN HORRIBLE!" },
    { 0x08,             "GRUNTY Y LOS MONSTRUOS" },
    { 0x08,             "LAS CAZABRUJOS DE GRUNTY" },
    { 0x08,             "GRUNTY Y LOS CALDEROS" },
    { DIALOG_CLOSE_MIN, "" },
};
static DialogLine x10A0_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10A1 - Brentilda intro dialog
 * Structure: bottom=5, top=1
 * ============================================================ */
static DialogLine x10A1_b[] = {
    { BRENTILDA,        "\xA1" "HOLA, MIS H\xC9ROES! SOY BRENTILDA, LA HERMANA MENOR DE GRUNTILDA. QUIERO AYUDARLES. \xA1" "YA ES HORA DE QUE ALGUIEN LE D\xC9 UNA LECCI\xD3N A ESA VIEJA BRUJA!" },
    { BRENTILDA,        "LO S\xC9 TODO SOBRE GRUNTILDA Y EN CADA ENCUENTRO LES REVELAR\xC9 TRES DE SUS VERGONZOSOS SECRETOS." },
    { BRENTILDA,        "NO OLVIDEN MIS PISTAS, PORQUE LAS VAN A NECESITAR." },
    { BRENTILDA,        "PULSEN B CUANDO QUIERAN O\xCD" "R ALGO SOBRE GRUNTILDA." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x10A1_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10A2 - Brentilda heal dialog
 * Structure: bottom=4, top=1
 * ============================================================ */
static DialogLine x10A2_b[] = {
    { BRENTILDA,        "\xA1" "OH, POBRECITOS! SU ENERG\xCD" "A EST\xC1 UN POCO BAJA. \xA1" "LES VOY A REFRESCAR UN POCO!" },
    { DIALOG_TRIGGER,   "\x01" },
    { BRENTILDA,        "AS\xCD EST\xC1 MEJOR, \xBF" "VERDAD?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine x10A2_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

static DialogDef brentilda_defs[] = {
    DIALOG(0x1083, x1083_b, x1083_t),
    DIALOG(0x1084, x1084_b, x1084_t),
    DIALOG(0x1085, x1085_b, x1085_t),
    DIALOG(0x1086, x1086_b, x1086_t),
    DIALOG(0x1087, x1087_b, x1087_t),
    DIALOG(0x1088, x1088_b, x1088_t),
    DIALOG(0x1089, x1089_b, x1089_t),
    DIALOG(0x108A, x108A_b, x108A_t),
    DIALOG(0x108B, x108B_b, x108B_t),
    DIALOG(0x108C, x108C_b, x108C_t),
    DIALOG(0x108D, x108D_b, x108D_t),
    DIALOG(0x108E, x108E_b, x108E_t),
    DIALOG(0x108F, x108F_b, x108F_t),
    DIALOG(0x1090, x1090_b, x1090_t),
    DIALOG(0x1091, x1091_b, x1091_t),
    DIALOG(0x1092, x1092_b, x1092_t),
    DIALOG(0x1093, x1093_b, x1093_t),
    DIALOG(0x1094, x1094_b, x1094_t),
    DIALOG(0x1095, x1095_b, x1095_t),
    DIALOG(0x1096, x1096_b, x1096_t),
    DIALOG(0x1097, x1097_b, x1097_t),
    DIALOG(0x1098, x1098_b, x1098_t),
    DIALOG(0x1099, x1099_b, x1099_t),
    DIALOG(0x109A, x109A_b, x109A_t),
    DIALOG(0x109B, x109B_b, x109B_t),
    DIALOG(0x109C, x109C_b, x109C_t),
    DIALOG(0x109D, x109D_b, x109D_t),
    DIALOG(0x109E, x109E_b, x109E_t),
    DIALOG(0x109F, x109F_b, x109F_t),
    DIALOG(0x10A0, x10A0_b, x10A0_t),
    DIALOG(0x10A1, x10A1_b, x10A1_t),
    DIALOG(0x10A2, x10A2_b, x10A2_t),
};

DialogDefTable brentilda_table = {
    brentilda_defs,
    sizeof(brentilda_defs) / sizeof(brentilda_defs[0])
};
