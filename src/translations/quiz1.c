#include "translation.h"

/*
 * Quiz / Final Battle Dialog Translations (0x10E7 - 0x1158)
 *
 * Contains:
 *   - Final battle Grunty taunts (flying broom phase)
 *   - Jinjonator activation sequences
 *   - Jinjo battle dialog
 *   - Bottles/Kazooie flying pad dialog
 *   - Battle phase transitions
 *
 * Portraits:
 *   0xB5 = Grunty
 *   0x83 = Bottles
 *   0x96 = Jinjonator
 *   0x97 = Jinjo
 *
 * Grunty ALWAYS rhymes in Spanish.
 */

#define GRUNTY       0xB5
#define BOTTLES_PORT 0x83
#define JINJONATOR   0x96
#define JINJO        0x97

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }

/* ============================================================
 * 0x10E7 - B:5 T:2 - Grunty opening battle taunt (4 lines)
 * DE: "SO EIN LÄCHERLICHES PAAR / SEHE ICH NICHT JEDES JAHR!
 *      KÄMPFE NUR, DU DOOFER BÄR, / MEIN SIEG WIRD SICHER LEGENDÄR!"
 * ============================================================ */
static DialogLine _10e7_b[] = {
    { GRUNTY,           "\xA1" "QU\xC9 PAREJA TAN PAT\xC9TICA VEO," },
    { GRUNTY,           "NO VER\xC9 OTRA IGUAL, ESO LO CREO!" },
    { GRUNTY,           "PELEA, OSO TONTO Y SIN RAZ\xD3N," },
    { GRUNTY,           "\xA1" "MI VICTORIA SER\xC1 UNA GRAN LECCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10e7_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10E8 - B:3 T:2 - Grunty: dare them again?
 * DE: "IHR WAGT ES NOCH EIN WEITERES MAL? / WILLKOMMEN HIER IM JAMMERTAL!"
 * ============================================================ */
static DialogLine _10e8_b[] = {
    { GRUNTY,           "\xBF" "SE ATREVEN A INTENTAR OTRA VEZ?" },
    { GRUNTY,           "\xA1" "BIENVENIDOS AL VALLE DE LA ESTUPIDEZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10e8_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10E9 - B:3 T:2
 * DE: "SICHER WERDET IHR MICH HASSEN, / DOCH ICH KANN EUCH DEN SIEG NICHT LASSEN!"
 * ============================================================ */
static DialogLine _10e9_b[] = {
    { GRUNTY,           "SEGURO ME VAN A DETESTAR," },
    { GRUNTY,           "\xA1" "PERO LA VICTORIA NO LES VOY A DAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10e9_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10EA - B:3 T:2
 * DE: "ZU STARK IST MEIN FLUCH, / SCHEITERN WIRD AUCH DER NÄCHSTE VERSUCH!"
 * ============================================================ */
static DialogLine _10ea_b[] = {
    { GRUNTY,           "MI MALDICI\xD3N ES MUY POTENTE," },
    { GRUNTY,           "\xA1" "FALLAR\xC1N DE NUEVO, EVIDENTEMENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ea_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10EB - B:3 T:2
 * DE: "NOCH EINMAL WOLLT IHR EUCH TRAUEN? / ICH WERDE EUCH DEN HINTERN VERHAUEN!"
 * ============================================================ */
static DialogLine _10eb_b[] = {
    { GRUNTY,           "\xBF" "OTRA VEZ QUIEREN PROBAR CONMIGO?" },
    { GRUNTY,           "\xA1" "LES DAR\xC9 UNA PALIZA, SE LOS DIGO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10eb_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10EC - B:3 T:2
 * DE: "HOCH DIE TELLER UND DIE TASSEN, / JETZT WERDET IHR VOR NEID ERBLASSEN!"
 * ============================================================ */
static DialogLine _10ec_b[] = {
    { GRUNTY,           "\xA1" "ARRIBA PLATOS Y LAS TAZAS!" },
    { GRUNTY,           "\xA1" "VAN A PALIDECER DE MIS AMENAZAS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ec_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10ED - B:3 T:2
 * DE: "NA, DU ARMER KLEINER BÄR, / MACHT DER BESEN DIR DAS LEBEN SCHWER?"
 * ============================================================ */
static DialogLine _10ed_b[] = {
    { GRUNTY,           "POBRE OSITO MISERABLE," },
    { GRUNTY,           "\xBF" "MI ESCOBA TE HACE LA VIDA INSOPORTABLE?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ed_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10EE - B:3 T:2
 * DE: "MEIN BESEN UND ICH, SOVIEL IST KLAR, / WIR SIND EIN UNSCHLAGBARES PAAR!"
 * ============================================================ */
static DialogLine _10ee_b[] = {
    { GRUNTY,           "MI ESCOBA Y YO, QUE QUEDE CLARO," },
    { GRUNTY,           "\xA1" "SOMOS UN D\xDA" "O INVENCIBLE Y RARO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ee_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10EF - B:3 T:2
 * DE: "VORBEI NUN IST DIE ZEIT DER LIEBE, / MEIN BESEN VERTEILT KRÄFTIG HIEBE!"
 * ============================================================ */
static DialogLine _10ef_b[] = {
    { GRUNTY,           "SE ACAB\xD3 EL TIEMPO DEL AMOR," },
    { GRUNTY,           "\xA1" "MI ESCOBA REPARTE GOLPES CON FUROR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ef_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F0 - B:3 T:2
 * DE: "ES IST SCHON IMMER SO GEWESEN, / ICH TEILE AUS MIT MEINEM BESEN!"
 * ============================================================ */
static DialogLine _10f0_b[] = {
    { GRUNTY,           "SIEMPRE HA SIDO AS\xCD Y SER\xC1," },
    { GRUNTY,           "\xA1" "MI ESCOBA GOLPES REPARTIR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f0_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F1 - B:3 T:2
 * DE: "ES IST EIN WAHRES TRAUERSPIEL, / DER BÄR KASSIERT DER HIEBE VIEL!"
 * ============================================================ */
static DialogLine _10f1_b[] = {
    { GRUNTY,           "ES UNA TRISTE COMEDIA EN VERDAD," },
    { GRUNTY,           "\xA1" "EL OSO RECIBE GOLPES SIN PIEDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f1_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F2 - B:3 T:2
 * DE: "JETZT STEIGT DAS GROSSE ABENTEUER, / MACHT BEKANNTSCHAFT MIT DEM FEUER!"
 * ============================================================ */
static DialogLine _10f2_b[] = {
    { GRUNTY,           "AHORA EMPIEZA LA GRAN AVENTURA," },
    { GRUNTY,           "\xA1" "CONOZCAN EL FUEGO Y SU LOCURA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f2_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F3 - B:3 T:2
 * DE: "ACH, WIE LIEBE ICH DIESE BLITZE, / DENN ICH MACHE KEINE WITZE!"
 * ============================================================ */
static DialogLine _10f3_b[] = {
    { GRUNTY,           "\xA1" "AY, C\xD3MO AMO ESTOS RAYOS M\xCD" "OS," },
    { GRUNTY,           "NO SON BROMAS NI DESVAR\xCD" "OS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f3_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F4 - B:3 T:2
 * DE: "ICH BIN EINFACH EIN GENIE, / GETROFFEN IST DAS FEDERVIEH!"
 * ============================================================ */
static DialogLine _10f4_b[] = {
    { GRUNTY,           "SOY SIMPLEMENTE UN GENIO TOTAL," },
    { GRUNTY,           "\xA1" "LE DI AL PAJARRACO INFERNAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f4_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F5 - B:3 T:2
 * DE: "DER FEUERBALL AUS MEINER HAND, / HAT DEM BÄREN DEN PELZ VERBRANNT!"
 * ============================================================ */
static DialogLine _10f5_b[] = {
    { GRUNTY,           "LA BOLA DE FUEGO DE MI MANO," },
    { GRUNTY,           "\xA1" "LE QUEM\xD3 EL PELAJE AL OSO ENANO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f5_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F6 - B:3 T:2
 * DE: "MEIN HERZ IST NICHT AUS HOLZ, / EIN TREFFER MACHT MICH STOLZ!"
 * ============================================================ */
static DialogLine _10f6_b[] = {
    { GRUNTY,           "MI CORAZ\xD3N NO ES DE MADERA," },
    { GRUNTY,           "\xA1" "CADA GOLPE ME ALEGRA DE MANERA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f6_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F7 - B:3 T:2
 * DE: "DAFÜR WERDET IHR MIR BÜSSEN, / BALD LIEGT IHR FLACH ZU MEINEN FÜSSEN!"
 * ============================================================ */
static DialogLine _10f7_b[] = {
    { GRUNTY,           "POR ESTO ME VAN A PAGAR," },
    { GRUNTY,           "\xA1" "PRONTO A MIS PIES VAN A QUEDAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f7_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F8 - B:3 T:2
 * DE: "DAS WAR NUR DER ERSTE STREICH, / MEINE RACHE FOLGT SOGLEICH!"
 * ============================================================ */
static DialogLine _10f8_b[] = {
    { GRUNTY,           "ESO FUE SOLO EL PRIMER GOLPE," },
    { GRUNTY,           "\xA1" "MI VENGANZA VIENE, QUE NADIE SE ASOMBRE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f8_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10F9 - B:3 T:2
 * DE: "ICH REDE NICHT SO GERNE HERUM, / ABER ETWAS LÄUFT HIER DUMM!"
 * ============================================================ */
static DialogLine _10f9_b[] = {
    { GRUNTY,           "NO ME GUSTA HABLAR EN EXCESO," },
    { GRUNTY,           "\xA1" "PERO ALGO HUELE AQU\xCD A QUESO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10f9_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FA - B:3 T:2
 * DE: "SO LANGSAM HABE ICH ES SATT, / GLEICH SEID IHR SCHACHMATT!"
 * ============================================================ */
static DialogLine _10fa_b[] = {
    { GRUNTY,           "YA ME ESTOY CANSANDO DE VERDAD," },
    { GRUNTY,           "\xA1" "PRONTO LES DAR\xC9 JAQUE Y MATE SIN PIEDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10fa_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FB - B:3 T:2
 * DE: "AUA! DAS TUT WIRKLICH WEH, / ICH EUCH LIEBER LEIDEN SEH'!"
 * ============================================================ */
static DialogLine _10fb_b[] = {
    { GRUNTY,           "\xA1" "AY! ESO S\xCD QUE ME DOLI\xD3," },
    { GRUNTY,           "\xA1" "PREFIERO QUE EL DOLOR SEA PARA TI, NO YO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10fb_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FC - B:3 T:2
 * DE: "HÖRT JETZT ENDLICH AUF ZU LACHEN, / KÜMMERT EUCH UM EURE SACHEN!"
 * ============================================================ */
static DialogLine _10fc_b[] = {
    { GRUNTY,           "\xA1" "DEJEN DE RE\xCD" "RSE DE UNA VEZ!" },
    { GRUNTY,           "\xA1" "OC\xDA" "PENSE DE LO SUYO CON SENSATEZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10fc_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FD - B:3 T:2
 * DE: "IHR HABT EUCH MÄCHTIG ANGESTRENGT, / GRUNTY IN DEN SEILEN HÄNGT."
 * ============================================================ */
static DialogLine _10fd_b[] = {
    { GRUNTY,           "SE HAN ESFORZADO CON VALOR," },
    { GRUNTY,           "GRUNTY EST\xC1 CONTRA LAS CUERDAS CON DOLOR." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10fd_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FE - B:3 T:2
 * DE: "VOM KAMPF BRAUCHE ICH EINE PAUSE, / DARUM GEHT BESSER JETZT NACH HAUSE!"
 * ============================================================ */
static DialogLine _10fe_b[] = {
    { GRUNTY,           "DE LA PELEA NECESITO UN DESCANSO," },
    { GRUNTY,           "\xA1" "AS\xCD QUE V\xC1YANSE A CASA, NO ES UN ROMANCE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10fe_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x10FF - B:3 T:2
 * DE: "MIR KLINGELN HEFTIG NOCH DIE OHREN, / - UPS - DEN HONIG HABE ICH VERLOREN!"
 * ============================================================ */
static DialogLine _10ff_b[] = {
    { GRUNTY,           "LOS O\xCD" "DOS ME SIGUEN ZUMBANDO," },
    { GRUNTY,           "\xA1" "AY, LA MIEL PERD\xCD, QU\xC9 NEFANDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _10ff_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1100 - B:3 T:2
 * DE: "ICH KANN ES MIR NICHT ERKLÄREN, / VERLOR ICH GEGEN EINEN BÄREN!"
 * ============================================================ */
static DialogLine _1100_b[] = {
    { GRUNTY,           "NO ME LO PUEDO EXPLICAR," },
    { GRUNTY,           "\xBF\xA1" "PERD\xCD CONTRA UN OSO SIN PENSAR?!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1100_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1101 - B:3 T:2
 * DE: "MIT LUSTIG IST JETZT SCHLUSS, / ES GIBT WAS AUF DIE NUSS!"
 * ============================================================ */
static DialogLine _1101_b[] = {
    { GRUNTY,           "SE ACAB\xD3 LA DIVERSI\xD3N AQUELLA," },
    { GRUNTY,           "\xA1" "AHORA RECIBIR\xC1N UNA BUENA ESTRELLA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1101_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1102 - B:3 T:2
 * DE: "DIESER ZAUBER IST DIE MACHT, / MEIN HERZ VOR FREUDE LACHT!"
 * ============================================================ */
static DialogLine _1102_b[] = {
    { GRUNTY,           "ESTE HECHIZO ES MI PODER," },
    { GRUNTY,           "\xA1" "MI CORAZ\xD3N R\xCD" "E DE PLACER!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1102_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1103 - B:3 T:2
 * DE: "EUCH WIRD HEUTE NICHTS ERSPART, / MEIN NÄCHSTER ZAUBER TRIFFT EUCH HART!"
 * ============================================================ */
static DialogLine _1103_b[] = {
    { GRUNTY,           "HOY NO SE SALVAR\xC1N DE NADA," },
    { GRUNTY,           "\xA1" "MI PR\xD3XIMO HECHIZO SER\xC1 UNA ESTOCADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1103_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1104 - B:3 T:2
 * DE: "DIESER ZAUBER KANN RECHT VIEL, / DES BÄREN HINTERN IST SEIN ZIEL!"
 * ============================================================ */
static DialogLine _1104_b[] = {
    { GRUNTY,           "ESTE HECHIZO PUEDE MUCHO LOGRAR," },
    { GRUNTY,           "\xA1" "EL TRASERO DEL OSO VA A QUEMAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1104_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1105 - B:3 T:2
 * DE: "ES FOLGT EIN WAHRER AUGENSCHMAUS, / BÄR UND VOGEL RASTEN AUS!"
 * ============================================================ */
static DialogLine _1105_b[] = {
    { GRUNTY,           "LO QUE SIGUE ES UN DELEITE VISUAL," },
    { GRUNTY,           "\xA1" "OSO Y P\xC1JARO DESCANSAR\xC1N AL FINAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1105_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1106 - B:3 T:2
 * DE: "HALLO, MEIN LIEBER BÄRENSCHATZ, / ICH WECHSELE JETZT MEINEN PLATZ!"
 * ============================================================ */
static DialogLine _1106_b[] = {
    { GRUNTY,           "HOLA, MI QUERIDO OSO ENCANTADOR," },
    { GRUNTY,           "\xA1" "AHORA CAMBIO DE LUGAR CON VALOR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1106_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1107 - B:3 T:2
 * DE: "DAS WAR WOHL DOCH ETWAS ZU LEICHT, / MAL SEHEN, WAS IHR JETZT ERREICHT!"
 * ============================================================ */
static DialogLine _1107_b[] = {
    { GRUNTY,           "ESO FUE DEMASIADO F\xC1" "CIL EN VERDAD," },
    { GRUNTY,           "\xA1" "VEAMOS QU\xC9 LOGRAN CON MI MALDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1107_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1108 - B:3 T:2
 * DE: "LASST EUCH NICHT ZU FRÜH LOBEN, / ICH SCHALTE EINEN GANG NACH OBEN!"
 * ============================================================ */
static DialogLine _1108_b[] = {
    { GRUNTY,           "NO SE ALABEN TAN TEMPRANO," },
    { GRUNTY,           "\xA1" "SUBO LA MARCHA, PAR DE GUSANOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1108_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1109 - B:3 T:2
 * DE: "JETZT IST SCHLUSS MIT DEM GEKICHER, / HIER OBEN BIN ICH VOR EUCH SICHER!"
 * ============================================================ */
static DialogLine _1109_b[] = {
    { GRUNTY,           "SE ACAB\xD3 LA RISA PARA USTEDES," },
    { GRUNTY,           "\xA1" "AQU\xCD ARRIBA ESTOY SEGURA ENTRE PAREDES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1109_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110A - B:3 T:2
 * DE: "IHR HABT MICH LANGE GENUG GEREIZT, / JETZT WIRD MIT SCHLÄGEN NICHT GEGEIZT!"
 * ============================================================ */
static DialogLine _110a_b[] = {
    { GRUNTY,           "ME HAN PROVOCADO LO SUFICIENTE," },
    { GRUNTY,           "\xA1" "AHORA GOLPEAR\xC9 BRUTALMENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110a_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110B - B:3 T:2
 * DE: "DIESES WAR DER ERSTE TREFFER, / JETZT GEBE ICH EUCH MÄCHTIG PFEFFER!"
 * ============================================================ */
static DialogLine _110b_b[] = {
    { GRUNTY,           "ESE FUE EL PRIMER IMPACTO DEL D\xCD" "A," },
    { GRUNTY,           "\xA1" "AHORA LES DOY CON TODA MI ENERG\xCD" "A!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110b_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110C - B:3 T:2
 * DE: "DAS SPIELCHEN IST GLEICH AUS, / IHR FLIEGT IN HOHEM BOGEN RAUS!"
 * ============================================================ */
static DialogLine _110c_b[] = {
    { GRUNTY,           "EL JUEGUITO PRONTO ACABAR\xC1," },
    { GRUNTY,           "\xA1" "POR LOS AIRES LOS MANDAR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110c_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110D - B:3 T:2
 * DE: "DU ARMER, KLEINER BÄRENWICHT, / DIE ANGST GRÄBT SICH IN DEIN GESICHT!"
 * ============================================================ */
static DialogLine _110d_b[] = {
    { GRUNTY,           "POBRE OSITO INSIGNIFICANTE," },
    { GRUNTY,           "\xA1" "EL MIEDO SE GRABA EN TU SEMBLANTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110d_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110E - B:3 T:2
 * DE: "PECH GEHABT, DU BÄRENSOHN, / SPÜRE MEINEN SPOTT UND HOHN!"
 * ============================================================ */
static DialogLine _110e_b[] = {
    { GRUNTY,           "MALA SUERTE, HIJO DE OSO," },
    { GRUNTY,           "\xA1" "SIENTE MI BURLA, QU\xC9 ESPANTOSO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110e_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x110F - B:3 T:2
 * DE: "WAS RIECHE ICH SO SCHNELL? / IST DAS NICHT VERBRANNTES FELL?"
 * ============================================================ */
static DialogLine _110f_b[] = {
    { GRUNTY,           "\xBF" "QU\xC9 ES ESE OLOR TAN PECULIAR?" },
    { GRUNTY,           "\xBF\xA1" "NO SER\xC1 PELAJE AL QUEMAR?!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _110f_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1110 - B:3 T:2
 * DE: "AUA! DAS HAT WEH GETAN, / ÄNDERN MUSS ICH MEINEN PLAN!"
 * ============================================================ */
static DialogLine _1110_b[] = {
    { GRUNTY,           "\xA1" "AY! ESO S\xCD QUE ME HA DOLIDO," },
    { GRUNTY,           "\xA1" "CAMBIAR MI PLAN ES LO QUE HE DECIDIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1110_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1111 - B:3 T:2
 * DE: "ES PLAGT MICH DAS GEPÄCK, / ICH KRIEGE EINEN SCHRECK!"
 * ============================================================ */
static DialogLine _1111_b[] = {
    { GRUNTY,           "ME ATORMENTA ESTE EQUIPAJE," },
    { GRUNTY,           "\xA1" "ME LLEV\xC9 UN SUSTO DE ESTE VIAJE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1111_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1112 - B:3 T:2
 * DE: "ICH GING EUCH AUF DEN LEIM, / DAS ZAHLE ICH EUCH HEIM!"
 * ============================================================ */
static DialogLine _1112_b[] = {
    { GRUNTY,           "CA\xCD EN SU TRAMPA, ES VERDAD," },
    { GRUNTY,           "\xA1" "PERO SE LAS PAGAR\xC1N SIN PIEDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1112_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1113 - B:3 T:2
 * DE: "SEID IHR DENN NOCH GESCHEIT? / ICH WAR NOCH NICHT BEREIT!"
 * ============================================================ */
static DialogLine _1113_b[] = {
    { GRUNTY,           "\xBF" "ACASO HAN PERDIDO LA RAZ\xD3N?" },
    { GRUNTY,           "\xA1" "A\xDA" "N NO ESTABA LISTA PARA LA ACCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1113_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1114 - B:3 T:2
 * DE: "KOMPLETT IST NOCH NICHT EUER GLÜCK, / GRUNTY SCHLÄGT JETZT VOLL ZURÜCK!"
 * ============================================================ */
static DialogLine _1114_b[] = {
    { GRUNTY,           "A\xDA" "N NO HAN COMPLETADO SU FORTUNA," },
    { GRUNTY,           "\xA1" "GRUNTY CONTRAATACA COMO NINGUNA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1114_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1115 - B:3 T:2
 * DE: "WIE HERRLICH IST DAS FLIEGEN, / KÖNNT IHR MICH SO BESIEGEN?"
 * ============================================================ */
static DialogLine _1115_b[] = {
    { GRUNTY,           "\xA1" "QU\xC9 MARAVILLA ES VOLAR!" },
    { GRUNTY,           "\xBF" "AS\xCD PODR\xC1N SIQUIERA INTENTAR?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1115_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1116 - B:3 T:2
 * DE: "DER KLEINE BÄR SOLL EINMAL MUCKEN, / AUF DEN KOPF KANN ICH IHM SPUCKEN!"
 * ============================================================ */
static DialogLine _1116_b[] = {
    { GRUNTY,           "QUE EL OSITO SE ATREVA A CHISTAR," },
    { GRUNTY,           "\xA1" "EN LA CABEZA LE VOY A ESCUPIR SIN PARAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1116_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1117 - B:3 T:2
 * DE: "FLIEGEN FINDE ICH SO TOLL, / HABT IHR SCHON DIE HOSEN VOLL?"
 * ============================================================ */
static DialogLine _1117_b[] = {
    { GRUNTY,           "VOLAR ME PARECE GENIAL," },
    { GRUNTY,           "\xBF" "YA SE LES HIZO ALGO EN EL PA\xD1" "AL?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1117_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1118 - B:3 T:2
 * DE: "IHR STEHT DA UNTEN WIE IN TRANCE, / IHR SEID OHNE JEDE CHANCE!"
 * ============================================================ */
static DialogLine _1118_b[] = {
    { GRUNTY,           "AH\xCD ABAJO EST\xC1N COMO EN UN TRANCE," },
    { GRUNTY,           "\xA1" "NO TIENEN NI LA MENOR CHANCE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1118_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1119 - B:3 T:2
 * DE: "ICH BIN DIE KÖNIGIN DER LÜFTE / UND VERSTRÖME LECKERE DÜFTE!"
 * ============================================================ */
static DialogLine _1119_b[] = {
    { GRUNTY,           "SOY LA REINA DE LOS CIELOS," },
    { GRUNTY,           "\xA1" "Y DESPIDO AROMAS DE MIS VUELOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1119_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111A - B:7 T:2 - Bottles: "old witch takes off, Banjo!"
 * DE: Bottles: "DIE ALTE HEXE HEBT AB, BANJO!" / "DIESE FLUGPLATTE KÖNNTE
 *     EUCH HELFEN, IHR AUF DEN / FERSEN ZU BLEIBEN!"
 * ============================================================ */
static DialogLine _111a_b[] = {
    { BOTTLES_PORT,     "LA VIEJA BRUJA DESPEGA," },
    { BOTTLES_PORT,     "\xA1" "BANJO!" },
    { DIALOG_TRIGGER,   "\x01" },
    { BOTTLES_PORT,     "ESTA PLATAFORMA DE VUELO" },
    { BOTTLES_PORT,     "PODR\xCD" "A AYUDARLES A NO" },
    { BOTTLES_PORT,     "\xA1" "PERDERLE EL RASTRO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111a_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111B - B:6 T:2 - Bottles: "not bad, Banjo! Show flight skills"
 * DE: "NICHT SCHLECHT, BANJO!" / "ZEIGE DEINE FLUGKÜNSTE / UND FEGE
 *     DIE ALTE VOM / HIMMEL!"
 * ============================================================ */
static DialogLine _111b_b[] = {
    { BOTTLES_PORT,     "\xA1" "NADA MAL, BANJO!" },
    { DIALOG_TRIGGER,   "\x01" },
    { BOTTLES_PORT,     "\xA1" "MUESTRA TUS HABILIDADES DE VUELO" },
    { BOTTLES_PORT,     "Y SACA A LA VIEJA" },
    { BOTTLES_PORT,     "\xA1" "DEL CIELO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111b_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111C - B:7 T:2 - Bottles: "with this flight pad..."
 * DE: Bottles: (choice ctrl) (trigger) / "MIT DIESER FLUGPLATTE / KANNST DU
 *     DER HEXE EINE / LEKTION ERTEILEN, DIE / SIE NIE MEHR VERGISST!"
 * ============================================================ */
static DialogLine _111c_b[] = {
    { BOTTLES_PORT,     "" },
    { DIALOG_TRIGGER,   "\x01" },
    { BOTTLES_PORT,     "CON ESTA PLATAFORMA DE VUELO" },
    { BOTTLES_PORT,     "PUEDES DARLE A LA BRUJA UNA" },
    { BOTTLES_PORT,     "LECCI\xD3N QUE" },
    { BOTTLES_PORT,     "\xA1" "NUNCA M\xC1S OLVIDAR\xC1!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111c_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111D - B:3 T:2
 * DE: "DU SCHON WIEDER, BÄRENSCHATZ? / HIER OBEN BIST DU FEHL AM PLATZ!"
 * ============================================================ */
static DialogLine _111d_b[] = {
    { GRUNTY,           "\xBF" "T\xDA OTRA VEZ, OSITO QUERIDO?" },
    { GRUNTY,           "\xA1" "AQU\xCD ARRIBA EST\xC1S MUY PERDIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111d_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111E - B:3 T:2
 * DE: "IN DER LUFT, AUF MEINEM BESEN, / BIN STETS DIE BESTE ICH GEWESEN!"
 * ============================================================ */
static DialogLine _111e_b[] = {
    { GRUNTY,           "EN EL AIRE, SOBRE MI ESCOBA MONTADA," },
    { GRUNTY,           "\xA1" "SIEMPRE FUI LA M\xC1S DESTACADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111e_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x111F - B:3 T:2
 * DE: "ICH FLIEGE EINE FLOTTE RUNDE, / GESCHLAGEN HAT EURE LETZTE STUNDE!"
 * ============================================================ */
static DialogLine _111f_b[] = {
    { GRUNTY,           "VUELO UNA RONDA BIEN VELOZ," },
    { GRUNTY,           "\xA1" "SON\xD3 SU \xDA" "LTIMA HORA, O\xCD" "GAN MI VOZ!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _111f_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1120 - B:3 T:2
 * DE: "JA, SO GEHT DAS BÖSE SPIEL, / SPASS HABT IHR NICHT VIEL!"
 * ============================================================ */
static DialogLine _1120_b[] = {
    { GRUNTY,           "AS\xCD VA ESTE JUEGO MALVADO," },
    { GRUNTY,           "\xA1" "DIVERSI\xD3N NO TENDR\xC1N NI UN RATO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1120_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1121 - B:3 T:2
 * DE: "ICH SETZE AN ZU EINER WENDE, / IHR BEIDEN SEID JETZT GLEICH AM ENDE!"
 * ============================================================ */
static DialogLine _1121_b[] = {
    { GRUNTY,           "ME PREPARO PARA UN GRAN GIRO," },
    { GRUNTY,           "\xA1" "USTEDES DOS EST\xC1N EN SU \xDA" "LTIMO SUSPIRO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1121_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1122 - B:3 T:2
 * DE: "MEINE HEISSE HEXEREI / MACHT DEN HIMMEL BÄRENFREI!"
 * ============================================================ */
static DialogLine _1122_b[] = {
    { GRUNTY,           "MI BRUJER\xCD" "A TAN CANDENTE" },
    { GRUNTY,           "\xA1" "LIMPIA EL CIELO DE OSOS, EVIDENTE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1122_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1123 - B:3 T:2
 * DE: "GRUNTY IST JETZT AM ZUG, / ICH ERWISCHE EUCH IM FLUG!"
 * ============================================================ */
static DialogLine _1123_b[] = {
    { GRUNTY,           "GRUNTY TIENE AHORA LA MOVIDA," },
    { GRUNTY,           "\xA1" "EN EL VUELO LES QUITO LA VIDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1123_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1124 - B:3 T:2
 * DE: "WIE IHR SELBST SCHON SEHT, / IST ES FÜR EUCH GLEICH ZU SPÄT!"
 * ============================================================ */
static DialogLine _1124_b[] = {
    { GRUNTY,           "COMO YA PUEDEN NOTAR," },
    { GRUNTY,           "\xA1" "PARA USTEDES ES TARDE PARA ESCAPAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1124_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1125 - B:3 T:2
 * DE: "EUCH ZU TREFFEN IST NICHT SCHWER, / DIESES SPIEL GEFÄLLT MIR SEHR!"
 * ============================================================ */
static DialogLine _1125_b[] = {
    { GRUNTY,           "DARLES NO ES NADA COMPLICADO," },
    { GRUNTY,           "\xA1" "ESTE JUEGO ME TIENE ENCANTADO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1125_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1126 - B:3 T:2
 * DE: "DAS GING MIR FAST ZU SCHNELL, / IM KÖPFCHEN SEID IHR NICHT SO HELL!"
 * ============================================================ */
static DialogLine _1126_b[] = {
    { GRUNTY,           "ESO FUE CASI MUY R\xC1PIDO PARA M\xCD," },
    { GRUNTY,           "\xA1" "DE CEREBRO NO ANDAN MUY BIEN, AY DE T\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1126_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1127 - B:3 T:2
 * DE: "AUTSCH! SEID IHR DENN KRANK? / NEHMT DIES ALS MEINEN DANK!"
 * ============================================================ */
static DialogLine _1127_b[] = {
    { GRUNTY,           "\xA1" "AUCH! \xBF" "EST\xC1N LOCOS O QU\xC9?" },
    { GRUNTY,           "\xA1" "TOMEN ESTO COMO AGRADECIMIENTO DE M\xCD FE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1127_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1128 - B:3 T:2
 * DE: "IIIIIH! DAS WAR KEIN SPASS, / JETZT GEBE ICH RICHTIG GAS!"
 * ============================================================ */
static DialogLine _1128_b[] = {
    { GRUNTY,           "\xA1" "IIIIIH! ESO NO FUE DIVERTIDO!" },
    { GRUNTY,           "\xA1" "AHORA S\xCD VOY CON TODO, VAMOS SEGUIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1128_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1129 - B:3 T:2
 * DE: "DAS WERDET IHR MIR BÜSSEN, / BALD LIEGT IHR MIR ZU FÜSSEN!"
 * ============================================================ */
static DialogLine _1129_b[] = {
    { GRUNTY,           "ESTO ME LO VAN A PAGAR," },
    { GRUNTY,           "\xA1" "PRONTO A MIS PIES VAN A ESTAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1129_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112A - B:3 T:2
 * DE: "WER ES MIT MIR BÖSE MEINT, / IST DER HEXE GRÖSSTER FEIND!"
 * ============================================================ */
static DialogLine _112a_b[] = {
    { GRUNTY,           "QUIEN SE METE CONMIGO EN VERDAD," },
    { GRUNTY,           "\xA1" "ES ENEMIGO DE LA BRUJA SIN PIEDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112a_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112B - B:3 T:2
 * DE: "UMSONST DER GANZE KRACH, / FÜR EUCH BIN ICH ZU SCHWACH!"
 * ============================================================ */
static DialogLine _112b_b[] = {
    { GRUNTY,           "TODO ESTE ESTRUENDO EN VANO," },
    { GRUNTY,           "\xA1" "SOY D\xC9" "BIL ANTE USTEDES, QU\xC9 INHUMANO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112b_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112C - B:3 T:2
 * DE: "IHR HABT MIR SOVIEL ANGETAN, / JETZT HABE ICH EINEN NEUEN PLAN!"
 * ============================================================ */
static DialogLine _112c_b[] = {
    { GRUNTY,           "ME HAN HECHO TANTO DA\xD1O FATAL," },
    { GRUNTY,           "\xA1" "AHORA TENGO UN PLAN GENIAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112c_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112D - B:3 T:2
 * DE: "AB JETZT IST ALLES NICHT SO WILD, / ICH SCHÜTZE MICH MIT DIESEM SCHILD!"
 * ============================================================ */
static DialogLine _112d_b[] = {
    { GRUNTY,           "A PARTIR DE AHORA NO ES TAN FIERO," },
    { GRUNTY,           "\xA1" "ME PROTEJO CON ESTE ESCUDO DE ACERO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112d_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112E - B:3 T:2
 * DE: "SITZT NICHT SCHMOLLEND IN DER ECKE, / WEIL ICH MICH HINTER EINEM SCHILD VERSTECKE!"
 * ============================================================ */
static DialogLine _112e_b[] = {
    { GRUNTY,           "NO SE ENFURRU\xD1" "EN EN UN RINC\xD3N," },
    { GRUNTY,           "\xA1" "ME ESCONDO TRAS MI ESCUDO, QU\xC9 PROTECCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112e_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x112F - B:3 T:2
 * DE: "HOFFENTLICH SIEHT MICH KEINER HIER, / VERSTECKE MICH WIE EIN SCHEUES TIER!"
 * ============================================================ */
static DialogLine _112f_b[] = {
    { GRUNTY,           "ESPERO QUE NADIE ME VEA AQU\xCD," },
    { GRUNTY,           "\xA1" "ME ESCONDO COMO ANIMAL COBARDE, S\xCD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _112f_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1130 - B:3 T:2
 * DE: "ICH BIN ZWAR NICHT DIE JÜNGSTE MEHR, / DOCH DIESER SCHILD HIER HILFT MIR SEHR!"
 * ============================================================ */
static DialogLine _1130_b[] = {
    { GRUNTY,           "YA NO SOY LA M\xC1S JOVEN, ES VERDAD," },
    { GRUNTY,           "\xA1" "PERO ESTE ESCUDO ME DA SEGURIDAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1130_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1136 - B:7 T:2 - Jinjo: "thank you for freeing us, we stand by Banjo!"
 * DE: Jinjo: "ALS DANK FÜR UNSERE / BEFREIUNG STEHEN WIR / JETZT UNSEREM FREUND / BANJO BEI!"
 *     Grunty: "ICH HATTE EUCH DOCH EINGESPERRT, / IHR JETZT AN MEINEN NERVEN ZERRT!"
 * ============================================================ */
static DialogLine _1136_b[] = {
    { JINJO,            "COMO AGRADECIMIENTO" },
    { JINJO,            "POR LIBERARNOS, ESTAMOS" },
    { JINJO,            "AHORA CON NUESTRO AMIGO" },
    { JINJO,            "\xA1" "BANJO!" },
    { GRUNTY,           "LOS TEN\xCD" "A BIEN ENCERRADOS," },
    { GRUNTY,           "\xA1" "Y AHORA ME TIENEN LOS NERVIOS DESTROZADOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1136_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1137 - B:6 T:2 - Jinjo: "chirp chirp, we love bear and bird!"
 * DE: Jinjo: "PIEP, PIEP, PIEP, VOGEL / UND BÄR HABEN WIR SO / LIEB!"
 *     Grunty: "IHR LASST MIR SOMIT KEINE WAHL, / DANN TRIFFT AUCH EUCH DIE BÖSE QUAL!"
 * ============================================================ */
static DialogLine _1137_b[] = {
    { JINJO,            "\xA1" "P\xCD" "O, P\xCD" "O, P\xCD" "O, P\xC1JARO" },
    { JINJO,            "Y OSO QUEREMOS MUCHO" },
    { JINJO,            "\xA1" "NOSOTROS!" },
    { GRUNTY,           "NO ME DEJAN OTRA OPCI\xD3N," },
    { GRUNTY,           "\xA1" "TAMBI\xC9N A USTEDES LES TOCA DESTRUCCI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1137_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1138 - B:5 T:2 - Jinjo: "bad witch, beat it!"
 * DE: Jinjo: "BÖSE HEXE HAU NUN AB! / WIR HABEN DICH SO SATT!"
 *     Grunty: "IHR MIESEN KLEINEN WICHTE, / BALD SEID IHR GESCHICHTE!"
 * ============================================================ */
static DialogLine _1138_b[] = {
    { JINJO,            "\xA1" "BRUJA MALVADA, LARGO DE AQU\xCD!" },
    { JINJO,            "\xA1" "YA ESTAMOS HARTOS DE TI!" },
    { GRUNTY,           "PEQUE\xD1OS BICHOS MISERABLES," },
    { GRUNTY,           "\xA1" "PRONTO SER\xC1N HISTORIA LAMENTABLE!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1138_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1139 - B:5 T:2 - Jinjo: "the hour of revenge is here!"
 * DE: Jinjo: "DIE STUNDE DER RACHE / IST DA, DU BLUBBERHEXE!"
 *     Grunty: "ICH HIELT EUCH LANGE ZEIT GEFANGEN, / NUN SEID IHR ZU WEIT GEGANGEN!"
 * ============================================================ */
static DialogLine _1139_b[] = {
    { JINJO,            "\xA1" "LA HORA DE LA VENGANZA" },
    { JINJO,            "HA LLEGADO, BRUJA BURBUJA!" },
    { GRUNTY,           "LOS TUVE PRESOS MUCHO TIEMPO REAL," },
    { GRUNTY,           "\xA1" "AHORA HAN IDO DEMASIADO LEJOS, QU\xC9 MAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1139_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113A - B:6 T:2 - Jinjo: "our new friends are in danger!"
 * DE: Jinjo: "UNSERE NEUEN FREUNDE / SIND IN GEFAHR! WIR / JINJOS EILEN ZUR HILFE!"
 *     Grunty: "DIESE JINJOS, KLEIN UND BUNT, / BRINGEN MICH NOCH AUF DEN HUND!"
 * ============================================================ */
static DialogLine _113a_b[] = {
    { JINJO,            "\xA1" "NUESTROS NUEVOS AMIGOS" },
    { JINJO,            "EST\xC1N EN PELIGRO! \xA1" "LOS" },
    { JINJO,            "JINJOS VAMOS AL RESCATE!" },
    { GRUNTY,           "ESTOS JINJOS CHICOS Y DE COLOR," },
    { GRUNTY,           "\xA1" "ME SACAN DE QUICIO CON FUROR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113a_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113B - B:3 T:2
 * DE: "VERNICHTUNG IST MEIN GROSSES ZIEL, / DIE JINJOS HELFEN EUCH NICHT VIEL!"
 * ============================================================ */
static DialogLine _113b_b[] = {
    { GRUNTY,           "LA DESTRUCCI\xD3N ES MI GRAN META," },
    { GRUNTY,           "\xA1" "LOS JINJOS NO LES SIRVEN NI EN BICICLETA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113b_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113C - B:3 T:2
 * DE: "ÜBER DIE JINJOS LACHE ICH AUCH, / VON EUCH BLEIBT NICHTS ALS SCHALL UND RAUCH!"
 * ============================================================ */
static DialogLine _113c_b[] = {
    { GRUNTY,           "DE LOS JINJOS TAMBI\xC9N ME R\xCD" "O," },
    { GRUNTY,           "\xA1" "DE USTEDES NO QUEDAR\xC1 NI EL BALD\xCD" "O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113c_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113D - B:3 T:2
 * DE: "EURE DUMMEN FREUNDE DORT, / SCHEINEN FEHL AN DIESEM ORT!"
 * ============================================================ */
static DialogLine _113d_b[] = {
    { GRUNTY,           "SUS TONTOS AMIGOS DE ALL\xC1," },
    { GRUNTY,           "\xA1" "EST\xC1N FUERA DE LUGAR, JA, JA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113d_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113E - B:3 T:2
 * DE: "NOCH HAT DER SCHRECKEN KEIN ENDE, / MEIN ZAUBER BRICHT DIE STÄRKSTEN WÄNDE!"
 * ============================================================ */
static DialogLine _113e_b[] = {
    { GRUNTY,           "EL TERROR A\xDA" "N NO TIENE FINAL," },
    { GRUNTY,           "\xA1" "MI MAGIA ROMPE TODO MURO Y PEDESTAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113e_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x113F - B:3 T:2
 * DE: "DIE HEXE HAT EINEN LAUF, / WANN GEBT IHR SCHWÄCHLINGE AUF?"
 * ============================================================ */
static DialogLine _113f_b[] = {
    { GRUNTY,           "LA BRUJA VIENE CON TODO SU PODER," },
    { GRUNTY,           "\xBF" "CU\xC1NDO SE VAN A RENDIR DE UNA VEZ?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _113f_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1140 - B:3 T:2
 * DE: "KAUM ZU FASSEN, / DIESE JINJOS MUSS MAN HASSEN!"
 * ============================================================ */
static DialogLine _1140_b[] = {
    { GRUNTY,           "ES INCRE\xCD" "BLE LA SITUACI\xD3N," },
    { GRUNTY,           "\xA1" "ESTOS JINJOS MERECEN MI MALDICI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1140_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1141 - B:3 T:2
 * DE: "DIESE FRECHEN FRATZEN, / WERDE ICH ZERKRATZEN!"
 * ============================================================ */
static DialogLine _1141_b[] = {
    { GRUNTY,           "A ESTOS MOCOSOS INSOLENTES," },
    { GRUNTY,           "\xA1" "LOS RASGU\xD1O CON MIS U\xD1" "AS Y MIS DIENTES!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1141_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1142 - B:3 T:2
 * DE: "NOCH EIN JINJO EILT HERBEI, / IST DER FLUCH DENN NIE VORBEI?"
 * ============================================================ */
static DialogLine _1142_b[] = {
    { GRUNTY,           "OTRO JINJO VIENE A TODA PRISA," },
    { GRUNTY,           "\xBF" "ESTA MALDICI\xD3N NO ACABA NUNCA, BRISA?" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1142_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1143 - B:3 T:2
 * DE: "SO LANGSAM WIRD MIR SCHLECHT, / GETROFFEN HAT DER FRECHE SPECHT!"
 * ============================================================ */
static DialogLine _1143_b[] = {
    { GRUNTY,           "POCO A POCO ME SIENTO MAL," },
    { GRUNTY,           "\xA1" "ME ACERT\xD3 ESE BICHO INFERNAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1143_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1144 - B:3 T:2
 * DE: "WO BLEIBT DENN DER RESPEKT? / MEIN RÜCKEN, DER WAR UNGEDECKT!"
 * ============================================================ */
static DialogLine _1144_b[] = {
    { GRUNTY,           "\xBF" "D\xD3NDE QUED\xD3 EL RESPETO DEBIDO?" },
    { GRUNTY,           "\xA1" "MI ESPALDA ESTABA DESPROTEGIDA, HE PERDIDO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1144_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1145 - B:3 T:2
 * DE: "EINST TRUG ICH FEINEN LODEN, / JETZT LIEGE ICH AUF DEM BODEN!"
 * ============================================================ */
static DialogLine _1145_b[] = {
    { GRUNTY,           "ANTES VEST\xCD" "A CON ELEGANCIA," },
    { GRUNTY,           "\xA1" "AHORA ESTOY EN EL SUELO SIN IMPORTANCIA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1145_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1146 - B:3 T:2
 * DE: "ES TRAFEN MICH DIE FRECHEN QUALLEN, / DABEI BIN ICH WOHL HINGEFALLEN!"
 * ============================================================ */
static DialogLine _1146_b[] = {
    { GRUNTY,           "ESOS BICHOS FRESCOS ME ALCANZARON," },
    { GRUNTY,           "\xA1" "Y AL SUELO ME TUMBARON!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1146_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1147 - B:3 T:2
 * DE: "MIT DEM BESEN IST JETZT SCHLUSS, / ZU FUSS ICH WIEDER GEHEN MUSS!"
 * ============================================================ */
static DialogLine _1147_b[] = {
    { GRUNTY,           "CON LA ESCOBA SE TERMIN\xD3," },
    { GRUNTY,           "\xA1" "A PIE CAMINAR ME TOC\xD3!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1147_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1148 - B:3 T:2
 * DE: "IHR WOLLT MIR DAS ALS SIEG VERKAUFEN? / ICH KANN IMMERHIN NOCH LAUFEN!"
 * ============================================================ */
static DialogLine _1148_b[] = {
    { GRUNTY,           "\xBF" "QUIEREN VENDERME ESO COMO VICTORIA?" },
    { GRUNTY,           "\xA1" "A\xDA" "N PUEDO CAMINAR, ESA ES MI HISTORIA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1148_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1149 - B:3 T:2
 * DE: "MEINE CHANCEN SIND VERSANDET, / BIN AUF DEM BODEN HIER GESTRANDET!"
 * ============================================================ */
static DialogLine _1149_b[] = {
    { GRUNTY,           "MIS OPORTUNIDADES SE ACABARON," },
    { GRUNTY,           "\xA1" "EN ESTE SUELO ME DEJARON!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1149_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x114A - B:3 T:2
 * DE: "DOOFER BÄR, DU WIRST NICHT ALT, / FLIEHE BESSER IN DEN WALD!"
 * ============================================================ */
static DialogLine _114a_b[] = {
    { GRUNTY,           "OSO TONTO, NO LLEGAR\xC1S A VIEJO," },
    { GRUNTY,           "\xA1" "MEJOR HUYE AL BOSQUE, ESE ES MI CONSEJO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _114a_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x114F - B:5 T:2 - Jinjonator: intro + Grunty response
 * DE: Jinjonator: "ICH BIN DER JINJONATOR, / AKTIVIERE MICH..."
 *     Grunty: "SELBST DIESER SELTSAME KUMPAN, / MACHT KEINEN STRICH DURCH MEINEN PLAN!"
 * ============================================================ */
static DialogLine _114f_b[] = {
    { JINJONATOR,       "SOY EL JINJONATOR," },
    { JINJONATOR,       "ACT\xCD" "VAME..." },
    { GRUNTY,           "NI ESTE COMPA\xD1" "ERO EXTRA\xD1" "O," },
    { GRUNTY,           "\xA1" "ARRUINAR\xC1 MI PLAN DE DA\xD1O!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _114f_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1150 - B:5 T:2 - Jinjonator: "also this stony fellow..."
 * DE: Jinjonator: "ICH BIN DER JINJONATOR, / AKTIVIERE MICH..."
 *     Grunty: "AUCH DIESER STEINIGE GESELLE, / VERDRÜCKT SICH AUF DER STELLE!"
 * ============================================================ */
static DialogLine _1150_b[] = {
    { JINJONATOR,       "SOY EL JINJONATOR," },
    { JINJONATOR,       "ACT\xCD" "VAME..." },
    { GRUNTY,           "TAMBI\xC9N ESTE COMPA\xD1" "ERO DE PIEDRA," },
    { GRUNTY,           "\xA1" "SE LARGA DE AQU\xCD COMO SI FUERA HIEDRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1150_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1151 - B:5 T:2 - Jinjonator: "I don't like being irritated..."
 * DE: Jinjonator: "ICH BIN DER JINJONATOR, / AKTIVIERE MICH..."
 *     Grunty: "ICH LASSE MICH UNGERN IRRITIEREN, / DEN TYPEN WERDE ICH FRITIEREN!"
 * ============================================================ */
static DialogLine _1151_b[] = {
    { JINJONATOR,       "SOY EL JINJONATOR," },
    { JINJONATOR,       "ACT\xCD" "VAME..." },
    { GRUNTY,           "NO ME GUSTA QUE ME IRRITEN," },
    { GRUNTY,           "\xA1" "A ESE TIPO LO VOY A FREIR, QUE ME IMITEN!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1151_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1152 - B:5 T:2 - Jinjonator: "this jinjo seems a loser"
 * DE: Jinjonator: "ICH BIN DER JINJONATOR, / AKTIVIERE MICH..."
 *     Grunty: "DIESER JINJO HIER AUS STEIN, / SCHEINT EIN VERLIERERTYP ZU SEIN!"
 * ============================================================ */
static DialogLine _1152_b[] = {
    { JINJONATOR,       "SOY EL JINJONATOR," },
    { JINJONATOR,       "ACT\xCD" "VAME..." },
    { GRUNTY,           "ESTE JINJO AQU\xCD DE PIEDRA," },
    { GRUNTY,           "\xA1" "PARECE UN PERDEDOR, QU\xC9 HIEDRA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1152_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1153 - B:5 T:2 - Jinjonator: "one chance is still open"
 * DE: Jinjonator: "ICH BIN DER JINJONATOR, / AKTIVIERE MICH..."
 *     Grunty: "EINE CHANCE IST NOCH VAKANT, / NEHMT DIE BEINE IN DIE HAND!"
 * ============================================================ */
static DialogLine _1153_b[] = {
    { JINJONATOR,       "SOY EL JINJONATOR," },
    { JINJONATOR,       "ACT\xCD" "VAME..." },
    { GRUNTY,           "UNA OPORTUNIDAD A\xDA" "N QUEDA," },
    { GRUNTY,           "\xA1" "CORRAN ANTES DE QUE TODO LES SUCEDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1153_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1154 - B:3 T:2
 * DE: "GRUNTY LÄUFT ZUR BESTFORM AUF, / FLÜCHTET DOCH IM DAUERLAUF!"
 * ============================================================ */
static DialogLine _1154_b[] = {
    { GRUNTY,           "GRUNTY ALCANZA SU MEJOR MOMENTO," },
    { GRUNTY,           "\xA1" "HUYAN CORRIENDO CON EL VIENTO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1154_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1155 - B:3 T:2
 * DE: "VOR FREUDE HÜPFT DAS HEXENHERZ, / ICH WEIDE MICH AN EUREM SCHMERZ!"
 * ============================================================ */
static DialogLine _1155_b[] = {
    { GRUNTY,           "DE ALEGR\xCD" "A SALTA MI CORAZ\xD3N," },
    { GRUNTY,           "\xA1" "DISFRUTO SU DOLOR CON PASI\xD3N!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1155_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1156 - B:3 T:2
 * DE: "SELBST IM HÖCHSTEN HEXENALTER, / TREFFE ICH JEDEN SOCKENHALTER!"
 * ============================================================ */
static DialogLine _1156_b[] = {
    { GRUNTY,           "AUN CON MI AVANZADA EDAD," },
    { GRUNTY,           "\xA1" "LE DOY A CUALQUIERA SIN DIFICULTAD!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1156_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1157 - B:3 T:2
 * DE: "WENN MICH JEMAND WÜTEND MACHT, / ER DANACH NUR SELTEN LACHT! HAHAHA..."
 * ============================================================ */
static DialogLine _1157_b[] = {
    { GRUNTY,           "CUANDO ALGUIEN ME HACE ENOJAR," },
    { GRUNTY,           "\xA1" "DESPU\xC9S MUY POCO PODR\xC1 GOZAR! JAJAJA..." },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1157_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x1158 - B:3 T:2
 * DE: "DER BÄR IST DOOF, DER VOGEL LAHM, / DIE BEIDEN WERDEN RICHTIG ZAHM!"
 * ============================================================ */
static DialogLine _1158_b[] = {
    { GRUNTY,           "EL OSO ES TONTO, EL P\xC1JARO UN ENANO," },
    { GRUNTY,           "\xA1" "LOS DOS SE VOLVER\xC1N MANSOS TEMPRANO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1158_t[] = {
    { 0x01, "" },
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Dialog Table
 * ============================================================ */

static DialogDef quiz1_defs[] = {
    DIALOG(0x10E7, _10e7_b, _10e7_t),
    DIALOG(0x10E8, _10e8_b, _10e8_t),
    DIALOG(0x10E9, _10e9_b, _10e9_t),
    DIALOG(0x10EA, _10ea_b, _10ea_t),
    DIALOG(0x10EB, _10eb_b, _10eb_t),
    DIALOG(0x10EC, _10ec_b, _10ec_t),
    DIALOG(0x10ED, _10ed_b, _10ed_t),
    DIALOG(0x10EE, _10ee_b, _10ee_t),
    DIALOG(0x10EF, _10ef_b, _10ef_t),
    DIALOG(0x10F0, _10f0_b, _10f0_t),
    DIALOG(0x10F1, _10f1_b, _10f1_t),
    DIALOG(0x10F2, _10f2_b, _10f2_t),
    DIALOG(0x10F3, _10f3_b, _10f3_t),
    DIALOG(0x10F4, _10f4_b, _10f4_t),
    DIALOG(0x10F5, _10f5_b, _10f5_t),
    DIALOG(0x10F6, _10f6_b, _10f6_t),
    DIALOG(0x10F7, _10f7_b, _10f7_t),
    DIALOG(0x10F8, _10f8_b, _10f8_t),
    DIALOG(0x10F9, _10f9_b, _10f9_t),
    DIALOG(0x10FA, _10fa_b, _10fa_t),
    DIALOG(0x10FB, _10fb_b, _10fb_t),
    DIALOG(0x10FC, _10fc_b, _10fc_t),
    DIALOG(0x10FD, _10fd_b, _10fd_t),
    DIALOG(0x10FE, _10fe_b, _10fe_t),
    DIALOG(0x10FF, _10ff_b, _10ff_t),
    DIALOG(0x1100, _1100_b, _1100_t),
    DIALOG(0x1101, _1101_b, _1101_t),
    DIALOG(0x1102, _1102_b, _1102_t),
    DIALOG(0x1103, _1103_b, _1103_t),
    DIALOG(0x1104, _1104_b, _1104_t),
    DIALOG(0x1105, _1105_b, _1105_t),
    DIALOG(0x1106, _1106_b, _1106_t),
    DIALOG(0x1107, _1107_b, _1107_t),
    DIALOG(0x1108, _1108_b, _1108_t),
    DIALOG(0x1109, _1109_b, _1109_t),
    DIALOG(0x110A, _110a_b, _110a_t),
    DIALOG(0x110B, _110b_b, _110b_t),
    DIALOG(0x110C, _110c_b, _110c_t),
    DIALOG(0x110D, _110d_b, _110d_t),
    DIALOG(0x110E, _110e_b, _110e_t),
    DIALOG(0x110F, _110f_b, _110f_t),
    DIALOG(0x1110, _1110_b, _1110_t),
    DIALOG(0x1111, _1111_b, _1111_t),
    DIALOG(0x1112, _1112_b, _1112_t),
    DIALOG(0x1113, _1113_b, _1113_t),
    DIALOG(0x1114, _1114_b, _1114_t),
    DIALOG(0x1115, _1115_b, _1115_t),
    DIALOG(0x1116, _1116_b, _1116_t),
    DIALOG(0x1117, _1117_b, _1117_t),
    DIALOG(0x1118, _1118_b, _1118_t),
    DIALOG(0x1119, _1119_b, _1119_t),
    DIALOG(0x111A, _111a_b, _111a_t),
    DIALOG(0x111B, _111b_b, _111b_t),
    DIALOG(0x111C, _111c_b, _111c_t),
    DIALOG(0x111D, _111d_b, _111d_t),
    DIALOG(0x111E, _111e_b, _111e_t),
    DIALOG(0x111F, _111f_b, _111f_t),
    DIALOG(0x1120, _1120_b, _1120_t),
    DIALOG(0x1121, _1121_b, _1121_t),
    DIALOG(0x1122, _1122_b, _1122_t),
    DIALOG(0x1123, _1123_b, _1123_t),
    DIALOG(0x1124, _1124_b, _1124_t),
    DIALOG(0x1125, _1125_b, _1125_t),
    DIALOG(0x1126, _1126_b, _1126_t),
    DIALOG(0x1127, _1127_b, _1127_t),
    DIALOG(0x1128, _1128_b, _1128_t),
    DIALOG(0x1129, _1129_b, _1129_t),
    DIALOG(0x112A, _112a_b, _112a_t),
    DIALOG(0x112B, _112b_b, _112b_t),
    DIALOG(0x112C, _112c_b, _112c_t),
    DIALOG(0x112D, _112d_b, _112d_t),
    DIALOG(0x112E, _112e_b, _112e_t),
    DIALOG(0x112F, _112f_b, _112f_t),
    DIALOG(0x1130, _1130_b, _1130_t),
    DIALOG(0x1136, _1136_b, _1136_t),
    DIALOG(0x1137, _1137_b, _1137_t),
    DIALOG(0x1138, _1138_b, _1138_t),
    DIALOG(0x1139, _1139_b, _1139_t),
    DIALOG(0x113A, _113a_b, _113a_t),
    DIALOG(0x113B, _113b_b, _113b_t),
    DIALOG(0x113C, _113c_b, _113c_t),
    DIALOG(0x113D, _113d_b, _113d_t),
    DIALOG(0x113E, _113e_b, _113e_t),
    DIALOG(0x113F, _113f_b, _113f_t),
    DIALOG(0x1140, _1140_b, _1140_t),
    DIALOG(0x1141, _1141_b, _1141_t),
    DIALOG(0x1142, _1142_b, _1142_t),
    DIALOG(0x1143, _1143_b, _1143_t),
    DIALOG(0x1144, _1144_b, _1144_t),
    DIALOG(0x1145, _1145_b, _1145_t),
    DIALOG(0x1146, _1146_b, _1146_t),
    DIALOG(0x1147, _1147_b, _1147_t),
    DIALOG(0x1148, _1148_b, _1148_t),
    DIALOG(0x1149, _1149_b, _1149_t),
    DIALOG(0x114A, _114a_b, _114a_t),
    DIALOG(0x114F, _114f_b, _114f_t),
    DIALOG(0x1150, _1150_b, _1150_t),
    DIALOG(0x1151, _1151_b, _1151_t),
    DIALOG(0x1152, _1152_b, _1152_t),
    DIALOG(0x1153, _1153_b, _1153_t),
    DIALOG(0x1154, _1154_b, _1154_t),
    DIALOG(0x1155, _1155_b, _1155_t),
    DIALOG(0x1156, _1156_b, _1156_t),
    DIALOG(0x1157, _1157_b, _1157_t),
    DIALOG(0x1158, _1158_b, _1158_t),
};

DialogDefTable quiz1_table = {
    quiz1_defs,
    sizeof(quiz1_defs) / sizeof(quiz1_defs[0])
};
