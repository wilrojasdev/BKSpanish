#include "translation.h"

/*
 * Quiz 3 - Grunty's Furnace Fun Quiz Questions & Final Battle
 * Assets 0x1270 through 0x1424 (107 assets)
 *
 * Translated from the German BK mod.
 *
 * Structure types:
 *   0x03, 0x03, 0x00, 0x05 = Brentilda personal quiz (Grunty portrait 0x80)
 *   0x03, 0x01, 0x02, 0x05 = General quiz (Grunty portrait 0x80)
 *
 * Portrait 0x80 = Grunty question line (in quiz format)
 * Answers: 0x81 = answer A, 0x82 = answer B, 0x83 = answer C
 *
 * Grunty ALWAYS rhymes in Spanish.
 */

#define GRUNTY    0xB5

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }
#define QDIALOG(id, b) { id, b, sizeof(b)/sizeof(b[0]), NULL, 0, NULL }

/* ============================================================
 * 0x1424 - Brentilda Q: My great band is world-famous, what did I call it?
 * German: MEINE TOLLE BAND IST / WELTBEKANNT, WIE HABE / ICH SIE BLOSS GENANNT?
 * Answers: GRUNTYS MONSTERMOB / GRUNTYS SCHÜRZENJÄGER / GRUNTYS KESSELREIHER
 * B:6 T:0 (header 03 03 00 05 00 06)
 * ============================================================ */
static DialogLine _1424_b[] = {
    { 0x80, "MI BANDA ES FAMOSA" },
    { 0x80, "EN TODA LA REGI\xD3N," },
    { 0x80, "\xBF" "C\xD3MO SE LLAMA CON PASI\xD3N?" },
    { 0x81, "GRUNTY Y LOS MONSTRUOS" },
    { 0x82, "LAS CAZABRUJOS DE GRUNTY" },
    { 0x83, "GRUNTY Y LOS CALDEROS" },
};

/* 0x1423 - Brentilda Q: What is my dog's name?
 * German: NUN LASSE ERKLINGEN AUS / DEINEM MUND, AUF / WELCHEN NAMEN HÖRTE / MEIN HUND?
 * Answers: WALDI / RIPPER / LASSIE
 * B:7 T:0 */
static DialogLine _1423_b[] = {
    { 0x80, "DILO CON EMOCI\xD3N" },
    { 0x80, "Y CON ESMERO," },
    { 0x80, "\xBF" "C\xD3MO SE LLAMA" },
    { 0x80, "MI PERRO?" },
    { 0x81, "CHUCHI" },
    { 0x82, "DESTRIPADOR" },
    { 0x83, "LASSIE" },
};

/* 0x1422 - Brentilda Q: What do I keep under my dress?
 * German: WAS TRAGE ICH WOHL UNTER / MEINER KLUFT, DU FRECHER / KLEINER SCHUFT?
 * Answers: EINE TOTE RATTE / EIN SABBERLATZCHEN / EINEN FLOHZIRKUS
 * B:6 T:0 */
static DialogLine _1422_b[] = {
    { 0x80, "\xBF" "QU\xC9 LLEVO DEBAJO" },
    { 0x80, "DE MI VESTIDO, DIME" },
    { 0x80, "PEQUE\xD1O ATREVIDO?" },
    { 0x81, "UNA RATA MUERTA" },
    { 0x82, "UN BABERO" },
    { 0x83, "UN CIRCO DE PULGAS" },
};

/* 0x1421 - Brentilda Q: How fast is my broomstick?
 * German: ICH HABE DEN BESTEN / HEXENBESEN, WIE SCHNELL / BIN ICH DAMIT GEWESEN?
 * Answers: SCHNELL WIE DER SCHALL / SCHNELL WIE DAS LICHT / SCHNELL WIE EINE LAHME + STUBENFLIEGE
 * B:7 T:0 */
static DialogLine _1421_b[] = {
    { 0x80, "TENGO LA MEJOR" },
    { 0x80, "ESCOBA DE BRUJA, \xBF" "QU\xC9 TAN" },
    { 0x80, "R\xC1PIDA ES MI FUGA?" },
    { 0x81, "EL SONIDO" },
    { 0x82, "LA LUZ" },
    { 0x83, "UNA MOSCA COJA" },
};

/* 0x1420 - Brentilda Q: I rarely cuddle, but when I do, with what animal?
 * German: KNUDDELN TUE ICH FAST / NIE, DOCH WENN, DANN / WOHL MIT WELCHEM VIEH?
 * Answers: MIT EINEM TOTENSCHÄDEL / MIT EINER LEBENDEN KOBRA / MIT EINER VOODOO-PUPPE
 * B:6 T:0 */
static DialogLine _1420_b[] = {
    { 0x80, "ABRAZAR CASI NUNCA" },
    { 0x80, "ES MI PLAN," },
    { 0x80, "\xBF" "PERO CON QU\xC9 BICHO LO HAR\xC1N?" },
    { 0x81, "UNA CALAVERA" },
    { 0x82, "UNA COBRA VIVA" },
    { 0x83, "UN MU\xD1" "ECO DE VUD\xDA" },
};

/* 0x141F - Brentilda Q: What lucky charm do I carry?
 * German: EINEN GLÜCKSBRINGER ICH / TRAGE. WAS IST ES DENN, / DAS IST DIE FRAGE!
 * Answers: EIN SCHRUMPFKOPF / EIN STINKTIERSCHWANZ / EIN SCHWEINEFUSS
 * B:6 T:0 */
static DialogLine _141f_b[] = {
    { 0x80, "UN AMULETO DE SUERTE" },
    { 0x80, "CONMIGO LLEVO EN VERDAD," },
    { 0x80, "\xBF" "QU\xC9 ES? \xA1" "DILO CON CLARIDAD!" },
    { 0x81, "UNA CABEZA REDUCIDA" },
    { 0x82, "UNA COLA DE MOFETA" },
    { 0x83, "UNA PATA DE CERDO" },
};

/* 0x141E - Brentilda Q: What was my favorite pet?
 * German: MEIN LIEBSTES HAUSTIER / WAR SEHR NETT, ES / SCHLIEF SOGAR IN MEINEM / BETT!
 * Answers: EIN TOTER FROSCH / EINE DREIKÖPFIGE FLEDERMAUS / EIN KOPFLOSES HUHN
 * B:7 T:0 */
static DialogLine _141e_b[] = {
    { 0x80, "MI MASCOTA FAVORITA" },
    { 0x80, "ERA MUY AMABLE," },
    { 0x80, "\xA1" "HASTA EN MI CAMA" },
    { 0x80, "DORM\xCD" "A ADORABLE!" },
    { 0x81, "UNA RANA MUERTA" },
    { 0x82, "UN MURCI\xC9LAGO DE TRES CABEZAS" },
    { 0x83, "UNA GALLINA SIN CABEZA" },
};

/* 0x141D - Brentilda Q: A boy I liked, who was it?
 * German: EIN JÜNGLING MIR GUT GEFIEL, / ER HATTE CHARME UND STIL!
 * Answers: JOE KLO / KAIN SPASS / WILL HIRN
 * B:5 T:0 */
static DialogLine _141d_b[] = {
    { 0x80, "UN JOVEN ME GUST\xD3 UN MONT\xD3N," },
    { 0x80, "\xA1" "TEN\xCD" "A ENCANTO Y DISTINCI\xD3N!" },
    { 0x81, "PEPE LETRINA" },
    { 0x82, "JUAN SIN GRACIA" },
    { 0x83, "MEMO CABEZA HUECA" },
};

/* 0x141C - Brentilda Q: What is my hobby?
 * German: EIN HOBBY HABE ICH / DOCH, VIELLEICHT WEISST / DU ES NOCH!
 * Answers: AMEISENSCHOKOLADE ESSEN / PICKEL AUSDRÜCKEN / FUSSNÄGEL ABKAUEN
 * B:6 T:0 */
static DialogLine _141c_b[] = {
    { 0x80, "UN PASATIEMPO TENGO" },
    { 0x80, "QUE ES GENIAL," },
    { 0x80, "\xBF" "LO SABES T\xDA, ANIMAL?" },
    { 0x81, "COMER CHOCOLATE DE HORMIGAS" },
    { 0x82, "REVENTARSE LOS GRANOS" },
    { 0x83, "MORDERSE LAS U\xD1" "AS DE LOS PIES" },
};

/* 0x141B - Brentilda Q: What do I do on the title screen?
 * German: HEXEN SPEZIAL IST NACH / MIR GANZ WILD, WAS MACHE / ICH AUF DEM TITELBILD?
 * Answers: KLEINE KINDER VERPRÜGELN / IN UNTERHOSEN POSIEREN / IN DER NASE BOHREN
 * B:6 T:0 */
static DialogLine _141b_b[] = {
    { 0x80, "LA REVISTA DE BRUJAS" },
    { 0x80, "ME ADORA CON FERVOR," },
    { 0x80, "\xBF" "QU\xC9 HAGO EN LA PORTADA CON VALOR?" },
    { 0x81, "PEGA A NI\xD1OS PEQUE\xD1OS" },
    { 0x82, "POSA EN ROPA INTERIOR" },
    { 0x83, "SE HURGA LA NARIZ" },
};

/* 0x141A - Brentilda Q: What competition did I win 1st place?
 * German: ES WAR EINE ECHTE HATZ, / BEI WELCHEM WETTBEWERB / GEWANN ICH DEN 1. PLATZ?
 * Answers: WARZENFRATZEN-WETTBEWERB / MIESMACHER-WETTBEWERB / STINKESOCKEN-WETTBEWERB
 * B:6 T:0 */
static DialogLine _141a_b[] = {
    { 0x80, "FUE UNA COMPETENCIA TOTAL," },
    { 0x80, "\xBF" "EN QU\xC9 CONCURSO FUI" },
    { 0x80, "LA TRIUNFADORA ESPECIAL?" },
    { 0x81, "CARAS VERRUGOSAS" },
    { 0x82, "AGUAFIESTAS" },
    { 0x83, "CALCETINES APESTOSOS" },
};

/* 0x1419 - Brentilda Q: Where do I sleep at night?
 * German: ANDERE SCHLAFEN IM BETT, / WO FINDE ICH ES NACHTS / DENN NETT?
 * Answers: IN EINEM NAGELBETT / IN EINER MÜLLTONNE / IN EINEM SCHWEINESTALL
 * B:6 T:0 */
static DialogLine _1419_b[] = {
    { 0x80, "OTROS DUERMEN EN CAMA" },
    { 0x80, "CON MANTA Y COBERTOR," },
    { 0x80, "\xBF" "D\xD3NDE DUERMO YO CON AMOR?" },
    { 0x81, "UNA CAMA DE CLAVOS" },
    { 0x82, "UN CONTENEDOR DE BASURA" },
    { 0x83, "UNA POCILGA" },
};

/* 0x1418 - Brentilda Q: What is my favorite drink?
 * German: WER MEINEN LIEBSTEN / TRUNK NICHT KENNT, DER / HAT DAS HALBE SPIEL / VERPENNT!
 * Answers: RATTEN-MILCHSHAKE / SPINNENBEIN-COCKTAIL / KRÖTENSCHLEIM-DRINK
 * B:7 T:0 */
static DialogLine _1418_b[] = {
    { 0x80, "QUIEN NO CONOZCA" },
    { 0x80, "MI TRAGO IDEAL," },
    { 0x80, "\xA1" "SE PERDI\xD3 LA MITAD" },
    { 0x80, "DEL JUEGO TOTAL!" },
    { 0x81, "BATIDO DE RATA" },
    { 0x82, "C\xD3" "CTEL DE PATAS DE ARA\xD1" "A" },
    { 0x83, "BEBIDA DE BABA DE SAPO" },
};

/* 0x1417 - Brentilda Q: What magazine/newspaper do I read?
 * German: WENN DU MICH SIEHST, AM / ZEITUNGSSTAND, WELCHES / BLATT HABE ICH IN DER / HAND?
 * Answers: DIE BUNTE HEXENWELT / DIE HEXENRUNDSCHAU / DEN KESSELKURIER
 * B:7 T:0 */
static DialogLine _1417_b[] = {
    { 0x80, "CUANDO ME VES EN" },
    { 0x80, "EL KIOSCO PARANDO," },
    { 0x80, "\xBF" "QU\xC9 REVISTA ESTOY" },
    { 0x80, "COMPRANDO?" },
    { 0x81, "EL MUNDO DE LAS BRUJAS" },
    { 0x82, "LA REVISTA BRUJIL" },
    { 0x83, "EL CORREO DEL CALDERO" },
};

/* 0x1416 - Brentilda Q: Who was my best school friend?
 * German: BALD WIRD ES DONNERN MIT / GERUMPEL, WER WAR IN DER / SCHULE MEIN BESTER / KUMPEL?
 * Answers: EINE KLAPPERSCHLANGE / DIE TAFEL / DER HAUSMEISTER
 * B:7 T:0 */
static DialogLine _1416_b[] = {
    { 0x80, "CUANDO ESTABA EN LA" },
    { 0x80, "ESCUELA SIN IGUAL," },
    { 0x80, "\xBF" "QUI\xC9N ERA MI AMIGO" },
    { 0x80, "ESPECIAL?" },
    { 0x81, "UNA SERPIENTE DE CASCABEL" },
    { 0x82, "LA PIZARRA" },
    { 0x83, "EL CONSERJE" },
};

/* 0x1415 - Brentilda Q: What design is my underwear?
 * German: MEINE UNTERWÄSCHE IST / NICHT NEU, ICH MICH AN / WELCHEM DESIGN ERFREU'?
 * Answers: SCHWARZBLAU GESTREIFT / ROSAGRÜN GEPUNKTET / GIFTGELB GESPRENKELT
 * B:6 T:0 */
static DialogLine _1415_b[] = {
    { 0x80, "MI ROPA INTERIOR" },
    { 0x80, "NO ES NUEVA, LO S\xC9," },
    { 0x80, "\xBF" "QU\xC9 DISE\xD1O TIENE, DIME POR QU\xC9?" },
    { 0x81, "DE RAYAS NEGRIAZULES" },
    { 0x82, "DE LUNARES ROSIVERDE" },
    { 0x83, "AMARILLO VENENO SALPICADA" },
};

/* 0x1414 - Brentilda Q: What grows in my flowerpot?
 * German: ES IST WIE VERHEXT, WAS / IN MEINEM BLUMENTOPF / SO WÄCHST!
 * Answers: GLUBSCHAUGEN-BAUM / VENUSFLIEGENFALLE / GIFTDORNEN-ROSE
 * B:6 T:0 */
static DialogLine _1414_b[] = {
    { 0x80, "ES COMO UN HECHIZO FATAL," },
    { 0x80, "\xBF" "QU\xC9 CRECE EN MI MACETA" },
    { 0x80, "DE FORMA FENOMENAL?" },
    { 0x81, "UN \xC1RBOL DE OJOS SALTONES" },
    { 0x82, "UNA VENUS ATRAPAMOSCAS" },
    { 0x83, "UNA ROSA DE ESPINAS VENENOSAS" },
};

/* 0x1413 - Brentilda Q: What hangs from my bedroom ceiling?
 * German: ICH MACHE DICH ZUR / SCHNECKE, WAS HÄNGT IM / SCHLAFZIMMER AN DER / DECKE?
 * Answers: VERFAULTE FISCHE / STINKENDE SOCKEN / SCHIMMELNDE WÜRMER
 * B:7 T:0 */
static DialogLine _1413_b[] = {
    { 0x80, "TE VOY A HACER PEDAZOS," },
    { 0x80, "\xBF" "QU\xC9 CUELGA DEL TECHO" },
    { 0x80, "EN MI CUARTO A" },
    { 0x80, "RETAZOS?" },
    { 0x81, "PESCADOS PODRIDOS" },
    { 0x82, "CALCETINES APESTOSOS" },
    { 0x83, "GUSANOS MOHOSOS" },
};

/* 0x1412 - Brentilda Q: What is my favorite dessert?
 * German: SEI NICHT ÄNGSTLICH UND / KOMME HER, VERRATE MIR / MEIN LIEBLINGSDESSERT!
 * Answers: AUGAPFEL-EISCREME / HACKEPETER MIT MARMELADE / REGENWURMSALAT
 * B:6 T:0 */
static DialogLine _1412_b[] = {
    { 0x80, "NO TENGAS MIEDO," },
    { 0x80, "VEN AQU\xCD CON VALOR," },
    { 0x80, "\xBF" "CU\xC1L ES MI POSTRE FAVORITO, AMOR?" },
    { 0x81, "HELADO DE GLOBO OCULAR" },
    { 0x82, "CARNE PICADA CON MERMELADA" },
    { 0x83, "ENSALADA DE GUSANOS" },
};

/* 0x1411 - Brentilda Q: What do I eat for dinner?
 * German: WAS ESSE ICH AM ABEND, / ERQUICKEND UND LABEND?
 * Answers: SCHNECKENSCHLEIM / FLEDERMAUSBURGER / KATZENSTEAKS
 * B:5 T:0 */
static DialogLine _1411_b[] = {
    { 0x80, "\xBF" "QU\xC9 CENO EN LAS NOCHES CON AFICI\xD3N," },
    { 0x80, "DELICIOSO Y CON SABORCI\xD3N?" },
    { 0x81, "BABA DE CARACOL" },
    { 0x82, "HAMBURGUESA DE MURCI\xC9LAGO" },
    { 0x83, "FILETE DE GATO" },
};

/* 0x1410 - Brentilda Q: What do I eat for breakfast?
 * German: ZUM FRÜHSTÜCK ICH DAS / HIER GERNE ESSE, SONST / IST GELESEN DIE MESSE!
 * Answers: GEGRILLTE GRILLEN / ZERQUETSCHTE FROSCHAUGEN / RAUPEN AUF TOAST
 * B:6 T:0 */
static DialogLine _1410_b[] = {
    { 0x80, "PARA DESAYUNAR YO" },
    { 0x80, "PREFIERO COMER," },
    { 0x80, "\xA1" "ADIVINA QU\xC9, SI PUEDES SABER!" },
    { 0x81, "GRILLOS A LA PARRILLA" },
    { 0x82, "OJOS DE RANA APLASTADOS" },
    { 0x83, "ORUGAS EN TOSTADA" },
};

/* 0x140F - Brentilda Q: How does Grunty entertain party guests?
 * German: SAGE ES MIR HEUT', WIE / GRUNTILDA PARTYGÄSTE / ERFREUT!
 * Answers: ALLE GÄSTE FRESSEN / GEISELN NEHMEN / AUS DER TOILETTE TRINKEN
 * B:6 T:0 */
static DialogLine _140f_b[] = {
    { 0x80, "DIME C\xD3MO GRUNTILDA" },
    { 0x80, "A SUS INVITADOS" },
    { 0x80, "\xA1" "LES DIVIERTE CON CUIDADOS!" },
    { 0x81, "COMERSE A LOS INVITADOS" },
    { 0x82, "TOMAR REHENES" },
    { 0x83, "BEBER DEL INODORO" },
};

/* 0x140E - Brentilda Q: What school did I attend?
 * German: AUF WELCHER SCHULE BIN ICH GEWESEN? /
 *         SAGE ES MIR, SONST SPRICHT MEIN BESEN!
 * Answers: HEXEN-UNI / POMMESBUDE / BUSHALTESTELLE
 * B:5 T:0 */
static DialogLine _140e_b[] = {
    { 0x80, "\xBF" "A QU\xC9 ESCUELA FUI, DI CON ESMERO," },
    { 0x80, "\xA1" "O HABLAR\xC1 MI ESCOBA PRIMERO!" },
    { 0x81, "UNIVERSIDAD DE BRUJAS" },
    { 0x82, "FREIDUR\xCD" "A DE PATATAS" },
    { 0x83, "PARADA DE AUTOB\xDA" "S" },
};

/* 0x140D - Brentilda Q: What sport do I play?
 * German: WAS TREIBE ICH FÜR EINEN / SPORT? SAGE ES MIR / SCHNELL, SONST GESCHIEHT / EIN MORD!
 * Answers: KESSELHEBEN / ZAUBERBUCH-WERFEN / BESENSTIEL-RENNEN
 * B:7 T:0 */
static DialogLine _140d_b[] = {
    { 0x80, "\xBF" "QU\xC9 DEPORTE PRACTICO" },
    { 0x80, "CON FERVOR? DIME YA" },
    { 0x80, "O HABR\xC1 DOLOR," },
    { 0x80, "\xA1" "RESPONDE CON VALOR!" },
    { 0x81, "LEVANTAR CALDEROS" },
    { 0x82, "LANZAR LIBROS DE HECHIZOS" },
    { 0x83, "CARRERAS DE ESCOBA" },
};

/* 0x140C - Brentilda Q: What are my favorite colors?
 * German: SAGE MIR GESCHWIND, / WELCHE MEINE LIEBSTEN / FARBEN SIND!
 * Answers: GRABSTEIN-GRAU / BLUTORANGEN-ROT / SPEI-GRÜN
 * B:6 T:0 */
static DialogLine _140c_b[] = {
    { 0x80, "DIME R\xC1PIDO SIN DEMORA," },
    { 0x80, "\xBF" "CU\xC1LES SON MIS COLORES" },
    { 0x80, "FAVORITOS AHORA?" },
    { 0x81, "GRIS L\xC1PIDA" },
    { 0x82, "ROJO NARANJA SANGRE" },
    { 0x83, "VERDE V\xD3MITO" },
};

/* 0x140B - Brentilda Q: What is my favorite scent?
 * German: WELCHER IST MEIN / LIEBLINGSDUFT, DU / KLEINER SCHUFT?
 * Answers: STINKENDER SCHWEFEL / SCHWITZENDER AFFENFÜSS / RANZIGES SCHLANGENFETT
 * B:6 T:0 */
static DialogLine _140b_b[] = {
    { 0x80, "\xBF" "CU\xC1L ES MI AROMA" },
    { 0x80, "FAVORITO, DIME T\xDA," },
    { 0x80, "PEQUE\xD1O MALDITO?" },
    { 0x81, "AZUFRE APESTOSO" },
    { 0x82, "PIE DE MONO SUDADO" },
    { 0x83, "GRASA DE SERPIENTE RANCIA" },
};

/* 0x140A - Brentilda Q: What was my school nickname?
 * German: DU BIST ZWAR NICHT SEHR HELLE, /
 *         DOCH WIE WAR IN DER SCHULE MEIN NAME, AUF DIE SCHNELLE?
 * Answers: BUSSARDFRATZE / ADLERNASE / WARZENKOPF
 * B:5 T:0 */
static DialogLine _140a_b[] = {
    { 0x80, "NO ERES MUY LISTO, LO S\xC9 BIEN," },
    { 0x80, "\xBF" "C\xD3MO ME LLAMABAN EN LA ESCUELA, QUI\xC9N?" },
    { 0x81, "CARA DE BUITRE" },
    { 0x82, "NARIZ DE \xC1GUILA" },
    { 0x83, "CABEZA DE VERRUGA" },
};

/* 0x1409 - Brentilda Q: Where do I get my clothes?
 * German: MEINE KLAMOTTEN, ES IST / NICHT SCHWER, WO HABE / ICH SIE WOHL HER?
 * Answers: AUS DER MÜLLTONNE / SAGGY MAGGIES BOUTIQUE / VOM HEXENDISCOUNTER
 * B:6 T:0 */
static DialogLine _1409_b[] = {
    { 0x80, "MI ROPA, NO ES TAN" },
    { 0x80, "DIF\xCD" "CIL DE ADIVINAR," },
    { 0x80, "\xBF" "DE D\xD3NDE LA PUEDO SACAR?" },
    { 0x81, "EL CONTENEDOR DE BASURA" },
    { 0x82, "LA BOUTIQUE DE SAGGY MAGGY" },
    { 0x83, "EL BAZAR DE LAS BRUJAS" },
};

/* 0x1408 - Brentilda Q: What do I wash my hair with?
 * German: WOMIT WASCHE ICH MEIN / HAAR, DASS ES WIRD SO / WUNDERBAR?
 * Answers: FLEDERMAUSKÖTTEL / MOTORÖL / RANZIGE MILCH
 * B:6 T:0 */
static DialogLine _1408_b[] = {
    { 0x80, "\xBF" "CON QU\xC9 ME LAVO" },
    { 0x80, "EL PELO PARA BRILLAR," },
    { 0x80, "Y TAN HERMOSO QUEDAR?" },
    { 0x81, "CACA DE MURCI\xC9LAGO" },
    { 0x82, "ACEITE DE MOTOR" },
    { 0x83, "LECHE RANCIA" },
};

/* 0x1407 - Brentilda Q: What do I use to clean my teeth?
 * German: MACHE MIR JETZT KEINE / SZENE, WOMIT PUTZE ICH / MEINE ZÄHNE?!
 * Answers: MATSCH / FLEDERMAUSHAUT / STINKENDER KÄSE
 * B:6 T:0 */
static DialogLine _1407_b[] = {
    { 0x80, "NO ME HAGAS UNA ESCENA," },
    { 0x80, "\xBF" "CON QU\xC9 ME LIMPIO" },
    { 0x80, "LA DENTADURA BUENA?" },
    { 0x81, "BARRO" },
    { 0x82, "PIEL DE MURCI\xC9LAGO" },
    { 0x83, "QUESO APESTOSO" },
};

/* ============================================================
 * MUSIC QUIZ QUESTIONS (0x13D5-0x13C7)
 * "SAGE ES MIR SOFORT, DIESE MELODIE ERKLINGT AN WELCHEM ORT?"
 * = Tell me now, this melody plays at which place?
 * ============================================================ */

/* 0x13D5 - Music Q: Pirate ship / Giant turtle / Sphinx
 * B:7 T:0 */
static DialogLine _13d5_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN LA BODEGA DEL" },
    { 0x81, "BARCO PIRATA" },
    { 0x82, "EN LA TORTUGA GIGANTE" },
    { 0x83, "EN LA ESFINGE" },
};

/* 0x13D4 - Music Q: Wozza's cave / Boggy's igloo / Wazzo's holiday home
 * B:6 T:0 */
static DialogLine _13d4_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN LA CUEVA DE WOZZA" },
    { 0x82, "EN EL IGL\xDA DE BOGGY" },
    { 0x83, "EN LA CASA DE WAZZO" },
};

/* 0x13D3 - Music Q: Beehive / Termite mound / Walrus cave
 * B:6 T:0 */
static DialogLine _13d3_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN LA COLMENA" },
    { 0x82, "EN EL TERMITERO" },
    { 0x83, "EN LA CUEVA DE LA MORSA" },
};

/* 0x13D2 - Music Q: Rusty Bucket Bay / Click Clock Wood / Rusty Clock Wood
 * B:6 T:0 */
static DialogLine _13d2_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "BAH\xCD" "A OXIDADA" },
    { 0x82, "BOSQUE DEL RELOJ" },
    { 0x83, "BAH\xCD" "A DEL RELOJ" },
};

/* 0x13D1 - Music Q: CCW / Bubblegloop Swamp / Bubbleclock Wood
 * B:6 T:0 */
static DialogLine _13d1_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "BOSQUE DEL RELOJ" },
    { 0x82, "PANTANO BUBBLEGLOOP" },
    { 0x83, "BOSQUE BUBBLEGLOOP" },
};

/* 0x13D0 - Music Q: Freezeezy Peak / TTC / Freezeezy Cove
 * B:6 T:0 */
static DialogLine _13d0_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "PICO FREEZEEZY" },
    { 0x82, "CALA DEL TESORO" },
    { 0x83, "CALA FREEZEEZY" },
};

/* 0x13CF - Music Q: MMM / RBB / Rusty Monster Bay
 * B:6 T:0 */
static DialogLine _13cf_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "MANSI\xD3N MONSTRUOSA" },
    { 0x82, "BAH\xCD" "A OXIDADA" },
    { 0x83, "BAH\xCD" "A MONSTRUOSA" },
};

/* 0x13CE - Music Q: Gobi's Valley / Freezeezy Peak / Gobi's Peak
 * B:6 T:0 */
static DialogLine _13ce_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "VALLE DE GOBI" },
    { 0x82, "PICO FREEZEEZY" },
    { 0x83, "PICO DE GOBI" },
};

/* 0x13CD - Music Q: BGS / Mumbo's Mountain / Bubble Gum Mountain
 * B:6 T:0 */
static DialogLine _13cd_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "PANTANO BUBBLEGLOOP" },
    { 0x82, "MONTA\xD1" "A DE MUMBO" },
    { 0x83, "MONTA\xD1" "A CHICLE" },
};

/* 0x13CC - Music Q: Clanker's Cavern / CCW / Clanker's Clock
 * B:6 T:0 */
static DialogLine _13cc_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "CAVERNA DE CLANKER" },
    { 0x82, "BOSQUE DEL RELOJ" },
    { 0x83, "RELOJ DE CLANKER" },
};

/* 0x13CB - Music Q: TTC / RBB / Treasure Bucket Bay
 * B:6 T:0 */
static DialogLine _13cb_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "CALA DEL TESORO" },
    { 0x82, "BAH\xCD" "A OXIDADA" },
    { 0x83, "BAH\xCD" "A DEL TESORO" },
};

/* 0x13CA - Music Q: Mumbo's Mountain / MMM / Mad Mumbo's Mansion
 * B:6 T:0 */
static DialogLine _13ca_b[] = {
    { 0x80, "DIME SIN BURLA," },
    { 0x80, "\xBF" "DE QU\xC9 MUNDO VIENE" },
    { 0x80, "ESTE SONIDO TAN CHULO?" },
    { 0x81, "MONTA\xD1" "A DE MUMBO" },
    { 0x82, "MANSI\xD3N MONSTRUOSA" },
    { 0x83, "MANSI\xD3N LOCA DE MUMBO" },
};

/* 0x13C9 - Music Q: Mumbo's skull cave / Mumbo's penthouse / Mumbo's shop
 * B:6 T:0 */
static DialogLine _13c9_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN LA CABA\xD1" "A DE MUMBO" },
    { 0x82, "EN EL PENTHOUSE DE MUMBO" },
    { 0x83, "EN LA TIENDA DE MUMBO" },
};

/* 0x13C8 - Music Q: Nabnut's treehouse / Banjo's house / Fox den
 * B:6 T:0 */
static DialogLine _13c8_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN LA CASA DE NABNUT" },
    { 0x82, "EN LA CASA DE BANJO" },
    { 0x83, "EN UNA GUARIDA DE ZORRO" },
};

/* 0x13C7 - Music Q: Polar bear igloo / Ghost church / Ghost bear cave
 * B:6 T:0 */
static DialogLine _13c7_b[] = {
    { 0x80, "DIME DE PRISA Y SIN DEMORA," },
    { 0x80, "\xBF" "D\xD3NDE SUENA ESTA MELOD\xCD" "A" },
    { 0x80, "AHORA?" },
    { 0x81, "EN EL IGL\xDA DEL OSO POLAR" },
    { 0x82, "EN LA IGLESIA FANTASMA" },
    { 0x83, "EN LA CUEVA DEL OSO FANTASMA" },
};

/* ============================================================
 * KAZOOIE ACTION QUIZ (0x13C6-0x13C4)
 * "WELCHE AKTION DER FRECHE VOGEL BRINGT, WENN DIESE MELODIE ERKLINGT?"
 * = What action does the cheeky bird do when this melody plays?
 * ============================================================ */

/* 0x13C6 - Action Q: Wonderwing / Beak bomb / Turnip stamp
 * B:6 T:0 */
static DialogLine _13c6_b[] = {
    { 0x80, "\xBF" "QU\xC9 ACCI\xD3N DEL P\xC1JARO" },
    { 0x80, "SINVERG\xDC" "ENZA SUENA," },
    { 0x80, "CUANDO ESTA MELOD\xCD" "A TRUENA?" },
    { 0x81, "EL VUELO DORADO" },
    { 0x82, "LA BOMBA DE PICO" },
    { 0x83, "EL PISOT\xD3N DE NABO" },
};

/* 0x13C5 - Action Q: Gumboot run / Wing parade / Supernut crunch
 * B:6 T:0 */
static DialogLine _13c5_b[] = {
    { 0x80, "\xBF" "QU\xC9 ACCI\xD3N DEL P\xC1JARO" },
    { 0x80, "SINVERG\xDC" "ENZA SUENA," },
    { 0x80, "CUANDO ESTA MELOD\xCD" "A TRUENA?" },
    { 0x81, "CARRERA DE BOTAS" },
    { 0x82, "DESFILE DE ALAS" },
    { 0x83, "EL SUPER CASCANUECES" },
};

/* 0x13C4 - Action Q: Piggyback run / Wonderwing / Beak bomb
 * B:6 T:0 */
static DialogLine _13c4_b[] = {
    { 0x80, "\xBF" "QU\xC9 ACCI\xD3N DEL P\xC1JARO" },
    { 0x80, "SINVERG\xDC" "ENZA SUENA," },
    { 0x80, "CUANDO ESTA MELOD\xCD" "A TRUENA?" },
    { 0x81, "CARRERA A CUESTAS" },
    { 0x82, "EL VUELO DORADO" },
    { 0x83, "LA BOMBA DE PICO" },
};

/* ============================================================
 * CHARACTER SOUND QUIZ (0x13C3-0x13B0)
 * "RATE SCHNELL UND SEI NICHT BANG, WER GIBT VON SICH DIESEN KLANG?"
 * = Guess fast, who makes this sound?
 * ============================================================ */

/* 0x13C3 - Sound Q: Jinjo / Tooty / Bottles
 * B:6 T:0 */
static DialogLine _13c3_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "JINJO" },
    { 0x82, "TOOTY" },
    { 0x83, "BOTTLES" },
};

/* 0x13C2 - Sound Q: Tanktup the turtle / Nipper the crab / Slapper the walrus
 * B:6 T:0 */
static DialogLine _13c2_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "TANKTUP, LA TORTUGA" },
    { 0x82, "NIPPER, EL CANGREJO" },
    { 0x83, "SLAPPER, LA MORSA" },
};

/* 0x13C1 - Sound Q: Nipper the crab / Flipper the fish / Snippetsnap the crab
 * B:7 T:0 */
static DialogLine _13c1_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "NIPPER, EL CANGREJO" },
    { 0x82, "FLIPPER, EL AT\xDA" "N" },
    { 0x83, "SNIPPETSNAP," },
    { 0x83, "EL CANGREJO TIJERA" },
};

/* 0x13C0 - Sound Q: Loggo the toilet / Zap the sink / Rubi the shower
 * B:6 T:0 */
static DialogLine _13c0_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "LOGGO, EL INODORO" },
    { 0x82, "ZAP, EL LAVABO" },
    { 0x83, "RUBI, LA DUCHA" },
};

/* 0x13BF - Sound Q: Tooty / Banjo / Bottles
 * B:6 T:0 */
static DialogLine _13bf_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "TOOTY, LA OSITA" },
    { 0x82, "BANJO, EL OSO" },
    { 0x83, "BOTTLES, EL TOPO" },
};

/* 0x13BE - Sound Q: Brentilda / Gruntilda / Tobi the beaver
 * B:6 T:0 */
static DialogLine _13be_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "BRENTILDA, EL HADA" },
    { 0x82, "GRUNTILDA, LA BRUJA" },
    { 0x83, "TOBI, EL CASTOR TRAVIESO" },
};

/* 0x13BD - Sound Q: Eyrie the eagle / Beerie the buzzard / Fillefitz the owl
 * B:6 T:0 */
static DialogLine _13bd_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "EYRIE, EL \xC1GUILA" },
    { 0x82, "BEERIE, EL BUITRE" },
    { 0x83, "FILLEFITZ, EL B\xDAHO" },
};

/* 0x13BC - Sound Q: Polar bear cubs / Turtle choir / Mummy orchestra
 * B:6 T:0 */
static DialogLine _13bc_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "LOS CACHORROS DE OSO POLAR" },
    { 0x82, "EL CORO DE TORTUGAS" },
    { 0x83, "LA ORQUESTA DE MOMIAS" },
};

/* 0x13BB - Sound Q: Nabnut the squirrel / Gnawty the beaver / Conker the squirrel
 * B:6 T:0 */
static DialogLine _13bb_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "NABNUT, LA ARDILLA" },
    { 0x82, "GNAWTY, EL CASTOR" },
    { 0x83, "CONKER, LA ARDILLA" },
};

/* 0x13BA - Sound Q: Wozza the walrus / Snorkel the dolphin / Schlabber the squid
 * B:7 T:0 */
static DialogLine _13ba_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "WOZZA, LA MORSA" },
    { 0x82, "SNORKEL, EL DELF\xCD" "N" },
    { 0x83, "SCHLABBER," },
    { 0x83, "EL CALAMAR" },
};

/* 0x13B9 - Sound Q: Boggy the polar bear / Wozza the walrus / Bozzo the seal
 * B:6 T:0 */
static DialogLine _13b9_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "BOGGY, EL OSO POLAR" },
    { 0x82, "WOZZA, LA MORSA" },
    { 0x83, "BOZZO, LA FOCA" },
};

/* 0x13B8 - Sound Q: Gruntilda / Brentilda / Brunhilda the Valkyrie
 * B:6 T:0 */
static DialogLine _13b8_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "GRUNTILDA, LA BRUJA" },
    { 0x82, "BRENTILDA, EL HADA" },
    { 0x83, "BRUNHILDA, LA VALQUIRIA" },
};

/* 0x13B7 - Sound Q: Snorkel the dolphin / Schnorchel the dolphin / Horschel the earworm
 * B:6 T:0 */
static DialogLine _13b7_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "SNORKEL, EL DELF\xCD" "N" },
    { 0x82, "SCHNORCHEL, EL DELF\xCD" "N" },
    { 0x83, "HORSCHEL, EL GUSANO" },
};

/* 0x13B6 - Sound Q: Napper the sleepy ghost / Sipper / Glibber the drooler
 * B:6 T:0 */
static DialogLine _13b6_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "NAPPER, EL FANTASMA FLOJO" },
    { 0x82, "SIPPER, EL FANTASMA FRESCO" },
    { 0x83, "GLIBBER, EL SUPER BABOSO" },
};

/* 0x13B5 - Sound Q: Rubee the snake charmer / Rattle the snake / Histup the snake
 * B:6 T:0 */
static DialogLine _13b5_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "RUBEE, EL ENCANTADOR" },
    { 0x82, "RATTLE, LA SERPIENTE" },
    { 0x83, "HISTUP, LA SERPIENTE" },
};

/* 0x13B4 - Sound Q: Tiptup the turtle / Riptup the turtle / Bottles the mole
 * B:6 T:0 */
static DialogLine _13b4_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "TIPTUP, LA TORTUGA" },
    { 0x82, "RIPTUP, LA TORTUGA" },
    { 0x83, "BOTTLES, EL TOPO" },
};

/* 0x13B3 - Sound Q: Chimpy the chimp / Conga the gorilla / Bambi the zebra
 * B:6 T:0 */
static DialogLine _13b3_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "CHIMPY, EL CHIMPANC\xC9" },
    { 0x82, "CONGA, EL GORILA" },
    { 0x83, "BAMBI, LA CEBRA" },
};

/* 0x13B2 - Sound Q: Bottles / Jamjars the hare / Beakers the hedgehog
 * B:6 T:0 */
static DialogLine _13b2_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "BOTTLES, EL TOPO" },
    { 0x82, "JAMJARS, LA LIEBRE" },
    { 0x83, "BEAKERS, EL ERIZO" },
};

/* 0x13B1 - Sound Q: Conga the gorilla / Tonga the chimp / Adrian the baboon
 * B:6 T:0 */
static DialogLine _13b1_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "CONGA, EL GORILA" },
    { 0x82, "TONGA, EL CHIMPANC\xC9" },
    { 0x83, "ADRIAN, EL BABUINO" },
};

/* 0x13B0 - Sound Q: Mumbo Jumbo / Samba Ramba / Lamm Bada (split answer lines)
 * B:9 T:0 */
static DialogLine _13b0_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "MUMBO JUMBO," },
    { 0x81, "EL CHAM\xC1N" },
    { 0x82, "SAMBA RAMBA," },
    { 0x82, "EL CHAM\xC1N" },
    { 0x83, "LAMM BADA," },
    { 0x83, "EL BAILAR\xCD" "N" },
};

/* 0x13AF - Sound Q: Captain Blubber / Captain Blackeye / Captain Browneye (split)
 * B:9 T:0 */
static DialogLine _13af_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "CAPTAIN BLUBBER," },
    { 0x81, "EL HIPOP\xD3TAMO PIRATA" },
    { 0x82, "CAPTAIN BLACKEYE," },
    { 0x82, "EL PIRATA NEGRO" },
    { 0x83, "CAPTAIN BROWNEYE," },
    { 0x83, "EL PIRATA SUCIO" },
};

/* 0x13AE - Sound Q: Mr. Vile the croc / Terminator the gator / Mrs. Susa the piranha
 * B:6 T:0 */
static DialogLine _13ae_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "MR. VILE, EL COCODRILO" },
    { 0x82, "TERMINATOR, EL CAIM\xC1N" },
    { 0x83, "MRS. SUSA, LA PIRA\xD1" "A" },
};

/* 0x13AD - Sound Q: Trunker the tree / Palmi the rubber tree / Waldo the tree
 * B:6 T:0 */
static DialogLine _13ad_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "TRUNKER, EL \xC1RBOL" },
    { 0x82, "PALMI, EL CAUCHO" },
    { 0x83, "WALDO, EL \xC1RBOL" },
};

/* 0x13AC - Sound Q: Clanker the whale / Henker the shark / Banker the money shark
 * B:6 T:0 */
static DialogLine _13ac_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "CLANKER, LA BALLENA" },
    { 0x82, "HENKER, EL TIBUR\xD3N" },
    { 0x83, "BANKER, EL TIBUR\xD3N DORADO" },
};

/* 0x13AB - Sound Q: Gobi the camel / Mobi the camel / Hobo the camel
 * B:6 T:0 */
static DialogLine _13ab_b[] = {
    { 0x80, "ADIVINA R\xC1PIDO," },
    { 0x80, "\xBF" "QUI\xC9N HACE ESTE SONIDO" },
    { 0x80, "TAN ATREVIDO?" },
    { 0x81, "GOBI, EL CAMELLO" },
    { 0x82, "MOBI, EL CAMELLO" },
    { 0x83, "HOBO, EL CAMELLO" },
};

/* ============================================================
 * ITEM QUIZ (0x13AA-0x13A3)
 * "WELCHEN GEGENSTAND MUSST DU VOM BODEN HEBEN, UM DIESEN TON ZU ERLEBEN?"
 * = What item do you pick up to hear this sound?
 * ============================================================ */

/* 0x13AA - Item Q: Empty honeycomb / Extra life / Extra gold
 * B:5 T:0 */
static DialogLine _13aa_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "PANAL VAC\xCD" "O" },
    { 0x82, "VIDA EXTRA" },
    { 0x83, "ORO EXTRA" },
};

/* 0x13A9 - Item Q: Golden feather / Red feather / Blue feather
 * B:5 T:0 */
static DialogLine _13a9_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "PLUMA DORADA" },
    { 0x82, "PLUMA ROJA" },
    { 0x83, "PLUMA AZUL" },
};

/* 0x13A8 - Item Q: Music notes / Blue eggs / Yellow eggs
 * B:5 T:0 */
static DialogLine _13a8_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "NOTAS MUSICALES" },
    { 0x82, "HUEVOS AZULES" },
    { 0x83, "HUEVOS AMARILLOS" },
};

/* 0x13A7 - Item Q: Full honeycomb / Blue eggs / Green eggs
 * B:5 T:0 */
static DialogLine _13a7_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "PANAL LLENO" },
    { 0x82, "HUEVOS AZULES" },
    { 0x83, "HUEVOS VERDES" },
};

/* 0x13A6 - Item Q: Extra life / Extra broom / Empty honeycomb
 * B:5 T:0 */
static DialogLine _13a6_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "VIDA EXTRA" },
    { 0x82, "ESCOBA EXTRA" },
    { 0x83, "PANAL VAC\xCD" "O" },
};

/* 0x13A5 - Item Q: Red feather / Golden feather / Feather bed
 * B:5 T:0 */
static DialogLine _13a5_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "PLUMA ROJA" },
    { 0x82, "PLUMA DORADA" },
    { 0x83, "CAMA DE PLUMAS" },
};

/* 0x13A4 - Item Q: Blue eggs / Music notes / Music instrument
 * B:5 T:0 */
static DialogLine _13a4_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "HUEVOS AZULES" },
    { 0x82, "NOTAS MUSICALES" },
    { 0x83, "INSTRUMENTO MUSICAL" },
};

/* 0x13A3 - Item Q: Mumbo skull / Extra life / Mumbo's magic nuts
 * B:5 T:0 */
static DialogLine _13a3_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO DEBES RECOGER" },
    { 0x80, "PARA ESTE SONIDO O\xCD" "R Y TENER?" },
    { 0x81, "CR\xC1NEO DE MUMBO" },
    { 0x82, "VIDA EXTRA" },
    { 0x83, "NUECES M\xC1GICAS DE MUMBO" },
};

/* ============================================================
 * CHARACTER NAME QUIZ (0x12ED-0x12DB)
 * "DU WEISST LEIDER NICHT ALLZUVIEL, DOCH KENNST DU DIESE FIGUR AUS DEM SPIEL?"
 * = You don't know much, but do you know this character?
 * ============================================================ */

/* 0x12ED - Name Q: Bottles / Buggles / Piddles
 * B:7 T:0 */
static DialogLine _12ed_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "BOTTLES" },
    { 0x82, "BUGGLES" },
    { 0x83, "PIDDLES" },
};

/* 0x12EC - Name Q: Boggy / Soggy / Peggy
 * B:7 T:0 */
static DialogLine _12ec_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "BOGGY" },
    { 0x82, "SOGGY" },
    { 0x83, "PEGGY" },
};

/* 0x12EB - Name Q: Captain Blubber / Captain Blabber / Captain Bladder
 * B:7 T:0 */
static DialogLine _12eb_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "CAPTAIN BLUBBER" },
    { 0x82, "CAPTAIN BLABBER" },
    { 0x83, "CAPTAIN BLADDER" },
};

/* 0x12EA - Name Q: Trunker / Drinker / Stinker
 * B:7 T:0 */
static DialogLine _12ea_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "TRUNKER" },
    { 0x82, "DRINKER" },
    { 0x83, "STINKER" },
};

/* 0x12E9 - Name Q: Mr. Vile / Mrs. Pile / Madam Bile
 * B:7 T:0 */
static DialogLine _12e9_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "MR. VILE" },
    { 0x82, "MRS. PILE" },
    { 0x83, "MADAM BILE" },
};

/* 0x12E8 - Name Q: Clanker / Clinker / Clunker
 * B:7 T:0 */
static DialogLine _12e8_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "CLANKER" },
    { 0x82, "CLINKER" },
    { 0x83, "CLUNKER" },
};

/* 0x12E7 - Name Q: Jinjo / Binjo / Winjo
 * B:7 T:0 */
static DialogLine _12e7_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "JINJO" },
    { 0x82, "BINJO" },
    { 0x83, "WINJO" },
};

/* 0x12E6 - Name Q: Nabnut / Grabnut / Robnut
 * B:7 T:0 */
static DialogLine _12e6_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "NABNUT" },
    { 0x82, "GRABNUT" },
    { 0x83, "ROBNUT" },
};

/* 0x12E5 - Name Q: Mumbo Jumbo / Lumpy Dumpy / Namby Pamby
 * B:7 T:0 */
static DialogLine _12e5_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "MUMBO JUMBO" },
    { 0x82, "LUMPY DUMPY" },
    { 0x83, "NAMBY PAMBY" },
};

/* 0x12E4 - Name Q: Gobi / Gumbi / Dimbo
 * B:7 T:0 */
static DialogLine _12e4_b[] = {
    { 0x80, "MUCHO NO SABES" },
    { 0x80, "POR DESGRACIA," },
    { 0x80, "\xBF" "CONOCES A ESTE PERSONAJE" },
    { 0x80, "CON AUDACIA?" },
    { 0x81, "GOBI" },
    { 0x82, "GUMBI" },
    { 0x83, "DIMBO" },
};

/* ============================================================
 * LOCATION QUIZ (0x12E3-0x12DB)
 * "WENN DU KEIN GANZ DUMMER BIST, DANN SAGE MIR, WO DAS HIER IST!"
 * = If you're not totally dumb, tell me where this is!
 * ============================================================ */

/* 0x12E3 - Location Q: CCW / MMM / BGS
 * B:7 T:0 */
static DialogLine _12e3_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "BOSQUE DEL RELOJ" },
    { 0x82, "MANSI\xD3N MONSTRUOSA" },
    { 0x83, "PANTANO BUBBLEGLOOP" },
};

/* 0x12E2 - Location Q: RBB / MMM / Clanker's Cavern
 * B:7 T:0 */
static DialogLine _12e2_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "BAH\xCD" "A OXIDADA" },
    { 0x82, "MANSI\xD3N MONSTRUOSA" },
    { 0x83, "CAVERNA DE CLANKER" },
};

/* 0x12E1 - Location Q: MMM / RBB / Clanker's Cavern
 * B:7 T:0 */
static DialogLine _12e1_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "MANSI\xD3N MONSTRUOSA" },
    { 0x82, "BAH\xCD" "A OXIDADA" },
    { 0x83, "CAVERNA DE CLANKER" },
};

/* 0x12E0 - Location Q: Gobi's Valley / TTC / Mumbo's Mountain
 * B:7 T:0 */
static DialogLine _12e0_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "VALLE DE GOBI" },
    { 0x82, "CALA DEL TESORO" },
    { 0x83, "MONTA\xD1" "A DE MUMBO" },
};

/* 0x12DF - Location Q: Freezeezy Peak / CCW / RBB
 * B:7 T:0 */
static DialogLine _12df_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "PICO FREEZEEZY" },
    { 0x82, "BOSQUE DEL RELOJ" },
    { 0x83, "BAH\xCD" "A OXIDADA" },
};

/* 0x12DE - Location Q: BGS / Clanker's Cavern / CCW
 * B:7 T:0 */
static DialogLine _12de_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "PANTANO BUBBLEGLOOP" },
    { 0x82, "CAVERNA DE CLANKER" },
    { 0x83, "BOSQUE DEL RELOJ" },
};

/* 0x12DD - Location Q: Clanker's Cavern / RBB / BGS
 * B:7 T:0 */
static DialogLine _12dd_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "CAVERNA DE CLANKER" },
    { 0x82, "BAH\xCD" "A OXIDADA" },
    { 0x83, "PANTANO BUBBLEGLOOP" },
};

/* 0x12DC - Location Q: TTC / Mumbo's Mountain / CCW
 * B:7 T:0 */
static DialogLine _12dc_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "CALA DEL TESORO" },
    { 0x82, "MONTA\xD1" "A DE MUMBO" },
    { 0x83, "BOSQUE DEL RELOJ" },
};

/* 0x12DB - Location Q: Mumbo's Mountain / BGS / CCW
 * B:7 T:0 */
static DialogLine _12db_b[] = {
    { 0x80, "SI NO ERES UN TOTAL" },
    { 0x80, "COMPLETO ZOPENCO," },
    { 0x80, "\xA1" "DIME D\xD3NDE ES ESTO" },
    { 0x80, "SIN SER MUECO!" },
    { 0x81, "MONTA\xD1" "A DE MUMBO" },
    { 0x82, "PANTANO BUBBLEGLOOP" },
    { 0x83, "BOSQUE DEL RELOJ" },
};

/* ============================================================
 * CCW-SPECIFIC QUIZ (0x1276-0x1270)
 * ============================================================ */

/* 0x1276 - CCW Q: What is the beaver's problem in the wood?
 * German: IM WALD DER BIBER HAT ES / NICHT SO BEQUEM, WAS IST / DENN SEIN PROBLEM?
 * Answers: ER KOMMT NICHT IN SEINEN BAU HINEIN / ER HAT NICHTS ZU ESSEN / ER VERLIERT HAARE
 * B:6 T:0 */
static DialogLine _1276_b[] = {
    { 0x80, "EL CASTOR DEL BOSQUE" },
    { 0x80, "TIENE UN PROBLEMA QUE ES" },
    { 0x80, "\xBF" "CU\xC1L ES SU DILEMA?" },
    { 0x81, "NO PUEDE ENTRAR A SU MADRIGUERA" },
    { 0x82, "NO TIENE NADA PARA COMER" },
    { 0x83, "EST\xC1 PERDIENDO EL PELO" },
};

/* 0x1275 - CCW Q: In Click Clock Wood which statement is true?
 * German: IM BOSQUE DEL RELOJ / WÄCHST DIE EICHE / WUNDERBAR, NUR WELCHE / AUSSAGE IST WAHR?
 * Answers: (leaves biggest in summer) / (grass tallest in fall) / (squirrel always outside in winter)
 * B:10 T:0 */
static DialogLine _1275_b[] = {
    { 0x80, "EN BOSQUE DEL RELOJ" },
    { 0x80, "EL ROBLE CRECE GENIAL," },
    { 0x80, "\xBF" "PERO QU\xC9 FRASE" },
    { 0x80, "ES LA REAL?" },
    { 0x81, "LAS HOJAS SON EN" },
    { 0x81, "VERANO LAS M\xC1S GRANDES" },
    { 0x82, "EL PASTO ES EN OTO\xD1O" },
    { 0x82, "EL M\xC1S ALTO" },
    { 0x83, "LA ARDILLA EST\xC1 EN" },
    { 0x83, "INVIERNO SIEMPRE AFUERA" },
};

/* 0x1274 - CCW Q: How many caterpillars does the eagle eat in autumn?
 * German: HAST DU ES VERGESSEN, / WIEVIELE WÜRMER MÖCHTE / DER ADLER IN CLICK CLOCK / WOOD IM HERBST FRESSEN?
 * Answers: 10 / 5 / 25
 * B:7 T:0 */
static DialogLine _1274_b[] = {
    { 0x80, "\xBF" "YA LO OLVIDASTE?" },
    { 0x80, "\xBF" "CU\xC1NTOS GUSANOS QUIERE" },
    { 0x80, "EL \xC1GUILA EN BOSQUE DEL" },
    { 0x80, "RELOJ EN OTO\xD1O COMER?" },
    { 0x81, "10" },
    { 0x82, "5" },
    { 0x83, "25" },
};

/* 0x1273 - CCW Q: What does Mumbo do in CCW when winter is cold?
 * German: WAS MACHT MUMBO, WENN / IM CLICK CLOCK WALD DER / WINTER IST SO BITTERKALT?
 * Answers: ER IST NICHT DA / ER BAUT SCHNEEMÄNNER / ER SITZT VOR DEM KAMIN
 * B:6 T:0 */
static DialogLine _1273_b[] = {
    { 0x80, "\xBF" "QU\xC9 HACE MUMBO CUANDO" },
    { 0x80, "EN BOSQUE DEL RELOJ EL" },
    { 0x80, "INVIERNO ES TAN HELADO?" },
    { 0x81, "NO EST\xC1 AH\xCD" },
    { 0x82, "CONSTRUYE MU\xD1" "ECOS DE NIEVE" },
    { 0x83, "SE SIENTA ANTE LA CHIMENEA" },
};

/* 0x1272 - CCW Q: What season has drought in CCW?
 * German: ZU WELCHER JAHRESZEIT / BEHERRSCHT DEN CLICK / BOSQUE DEL RELOJ DIE / TROCKENHEIT?
 * Answers: SOMMER / WINTER / HERBST
 * B:7 T:0 */
static DialogLine _1272_b[] = {
    { 0x80, "\xBF" "EN QU\xC9 ESTACI\xD3N DEL A\xD1O" },
    { 0x80, "DOMINA EN BOSQUE DEL" },
    { 0x80, "RELOJ LA SEQU\xCD" "A" },
    { 0x80, "SIN EXTRA\xD1" "AR?" },
    { 0x81, "VERANO" },
    { 0x82, "INVIERNO" },
    { 0x83, "OTO\xD1O" },
};

/* 0x1271 - CCW Q: How is the giant plant in the wood watered?
 * German: DIE RIESIGE PFLANZE IM / WALD, WIE WIRD SIE / BEWÄSSERT, SAGE ES MIR / BALD!
 * Answers: VON EINEM KAMEL / VON EINER GIESSKANNE / VON EINEM WASSERGEIST
 * B:7 T:0 */
static DialogLine _1271_b[] = {
    { 0x80, "LA PLANTA GIGANTE DEL" },
    { 0x80, "BOSQUE, \xBF" "C\xD3MO SE RIEGA?" },
    { 0x80, "\xA1" "D\xCD" "MELO PRONTO," },
    { 0x80, "NO ME HAGAS ESPERAR!" },
    { 0x81, "POR UN CAMELLO" },
    { 0x82, "POR UNA REGADERA" },
    { 0x83, "POR UN GENIO DEL AGUA" },
};

/* 0x1270 - CCW Q: What animal does Mumbo transform you into in CCW?
 * German: VERRATE MIR, WAS FÜR EIN / TIER MACHT MUMBO IM / BOSQUE DEL RELOJ AUS / DIR?
 * Answers: EINE BIENE / EIN EICHHÖRNCHEN / EINE SCHNECKE
 * B:7 T:0 */
static DialogLine _1270_b[] = {
    { 0x80, "DIME EN QU\xC9 ANIMAL" },
    { 0x80, "TE TRANSFORMA MUMBO EN" },
    { 0x80, "BOSQUE DEL RELOJ SIN" },
    { 0x80, "TEMOR." },
    { 0x81, "UNA ABEJA" },
    { 0x82, "UNA ARDILLA" },
    { 0x83, "UN CARACOL" },
};

/* ============================================================
 * Dummy T arrays (all quiz questions have T:0 = single close)
 * ============================================================ */
static DialogLine _quiz3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Translation table
 * ============================================================ */
static DialogDef quiz3_defs[] = {
    /* Brentilda personal questions (0x1424-0x1407) */
    DIALOG(0x1424, _1424_b, _quiz3_t),
    DIALOG(0x1423, _1423_b, _quiz3_t),
    DIALOG(0x1422, _1422_b, _quiz3_t),
    DIALOG(0x1421, _1421_b, _quiz3_t),
    DIALOG(0x1420, _1420_b, _quiz3_t),
    DIALOG(0x141F, _141f_b, _quiz3_t),
    DIALOG(0x141E, _141e_b, _quiz3_t),
    DIALOG(0x141D, _141d_b, _quiz3_t),
    DIALOG(0x141C, _141c_b, _quiz3_t),
    DIALOG(0x141B, _141b_b, _quiz3_t),
    DIALOG(0x141A, _141a_b, _quiz3_t),
    DIALOG(0x1419, _1419_b, _quiz3_t),
    DIALOG(0x1418, _1418_b, _quiz3_t),
    DIALOG(0x1417, _1417_b, _quiz3_t),
    DIALOG(0x1416, _1416_b, _quiz3_t),
    DIALOG(0x1415, _1415_b, _quiz3_t),
    DIALOG(0x1414, _1414_b, _quiz3_t),
    DIALOG(0x1413, _1413_b, _quiz3_t),
    DIALOG(0x1412, _1412_b, _quiz3_t),
    DIALOG(0x1411, _1411_b, _quiz3_t),
    DIALOG(0x1410, _1410_b, _quiz3_t),
    DIALOG(0x140F, _140f_b, _quiz3_t),
    DIALOG(0x140E, _140e_b, _quiz3_t),
    DIALOG(0x140D, _140d_b, _quiz3_t),
    DIALOG(0x140C, _140c_b, _quiz3_t),
    DIALOG(0x140B, _140b_b, _quiz3_t),
    DIALOG(0x140A, _140a_b, _quiz3_t),
    DIALOG(0x1409, _1409_b, _quiz3_t),
    DIALOG(0x1408, _1408_b, _quiz3_t),
    DIALOG(0x1407, _1407_b, _quiz3_t),
    /* Music quiz (0x13D5-0x13C7) */
    DIALOG(0x13D5, _13d5_b, _quiz3_t),
    DIALOG(0x13D4, _13d4_b, _quiz3_t),
    DIALOG(0x13D3, _13d3_b, _quiz3_t),
    DIALOG(0x13D2, _13d2_b, _quiz3_t),
    DIALOG(0x13D1, _13d1_b, _quiz3_t),
    DIALOG(0x13D0, _13d0_b, _quiz3_t),
    DIALOG(0x13CF, _13cf_b, _quiz3_t),
    DIALOG(0x13CE, _13ce_b, _quiz3_t),
    DIALOG(0x13CD, _13cd_b, _quiz3_t),
    DIALOG(0x13CC, _13cc_b, _quiz3_t),
    DIALOG(0x13CB, _13cb_b, _quiz3_t),
    DIALOG(0x13CA, _13ca_b, _quiz3_t),
    DIALOG(0x13C9, _13c9_b, _quiz3_t),
    DIALOG(0x13C8, _13c8_b, _quiz3_t),
    DIALOG(0x13C7, _13c7_b, _quiz3_t),
    /* Kazooie action quiz (0x13C6-0x13C4) */
    DIALOG(0x13C6, _13c6_b, _quiz3_t),
    DIALOG(0x13C5, _13c5_b, _quiz3_t),
    DIALOG(0x13C4, _13c4_b, _quiz3_t),
    /* Character sound quiz (0x13C3-0x13B0) */
    DIALOG(0x13C3, _13c3_b, _quiz3_t),
    DIALOG(0x13C2, _13c2_b, _quiz3_t),
    DIALOG(0x13C1, _13c1_b, _quiz3_t),
    DIALOG(0x13C0, _13c0_b, _quiz3_t),
    DIALOG(0x13BF, _13bf_b, _quiz3_t),
    DIALOG(0x13BE, _13be_b, _quiz3_t),
    DIALOG(0x13BD, _13bd_b, _quiz3_t),
    DIALOG(0x13BC, _13bc_b, _quiz3_t),
    DIALOG(0x13BB, _13bb_b, _quiz3_t),
    DIALOG(0x13BA, _13ba_b, _quiz3_t),
    DIALOG(0x13B9, _13b9_b, _quiz3_t),
    DIALOG(0x13B8, _13b8_b, _quiz3_t),
    DIALOG(0x13B7, _13b7_b, _quiz3_t),
    DIALOG(0x13B6, _13b6_b, _quiz3_t),
    DIALOG(0x13B5, _13b5_b, _quiz3_t),
    DIALOG(0x13B4, _13b4_b, _quiz3_t),
    DIALOG(0x13B3, _13b3_b, _quiz3_t),
    DIALOG(0x13B2, _13b2_b, _quiz3_t),
    DIALOG(0x13B1, _13b1_b, _quiz3_t),
    DIALOG(0x13B0, _13b0_b, _quiz3_t),
    DIALOG(0x13AF, _13af_b, _quiz3_t),
    DIALOG(0x13AE, _13ae_b, _quiz3_t),
    DIALOG(0x13AD, _13ad_b, _quiz3_t),
    DIALOG(0x13AC, _13ac_b, _quiz3_t),
    DIALOG(0x13AB, _13ab_b, _quiz3_t),
    /* Item quiz (0x13AA-0x13A3) */
    DIALOG(0x13AA, _13aa_b, _quiz3_t),
    DIALOG(0x13A9, _13a9_b, _quiz3_t),
    DIALOG(0x13A8, _13a8_b, _quiz3_t),
    DIALOG(0x13A7, _13a7_b, _quiz3_t),
    DIALOG(0x13A6, _13a6_b, _quiz3_t),
    DIALOG(0x13A5, _13a5_b, _quiz3_t),
    DIALOG(0x13A4, _13a4_b, _quiz3_t),
    DIALOG(0x13A3, _13a3_b, _quiz3_t),
    /* Character name quiz (0x12ED-0x12E4) */
    DIALOG(0x12ED, _12ed_b, _quiz3_t),
    DIALOG(0x12EC, _12ec_b, _quiz3_t),
    DIALOG(0x12EB, _12eb_b, _quiz3_t),
    DIALOG(0x12EA, _12ea_b, _quiz3_t),
    DIALOG(0x12E9, _12e9_b, _quiz3_t),
    DIALOG(0x12E8, _12e8_b, _quiz3_t),
    DIALOG(0x12E7, _12e7_b, _quiz3_t),
    DIALOG(0x12E6, _12e6_b, _quiz3_t),
    DIALOG(0x12E5, _12e5_b, _quiz3_t),
    DIALOG(0x12E4, _12e4_b, _quiz3_t),
    /* Location quiz (0x12E3-0x12DB) */
    DIALOG(0x12E3, _12e3_b, _quiz3_t),
    DIALOG(0x12E2, _12e2_b, _quiz3_t),
    DIALOG(0x12E1, _12e1_b, _quiz3_t),
    DIALOG(0x12E0, _12e0_b, _quiz3_t),
    DIALOG(0x12DF, _12df_b, _quiz3_t),
    DIALOG(0x12DE, _12de_b, _quiz3_t),
    DIALOG(0x12DD, _12dd_b, _quiz3_t),
    DIALOG(0x12DC, _12dc_b, _quiz3_t),
    DIALOG(0x12DB, _12db_b, _quiz3_t),
    /* CCW specific quiz (0x1276-0x1270) */
    QDIALOG(0x1276, _1276_b),
    QDIALOG(0x1275, _1275_b),
    QDIALOG(0x1274, _1274_b),
    QDIALOG(0x1273, _1273_b),
    QDIALOG(0x1272, _1272_b),
    QDIALOG(0x1271, _1271_b),
    QDIALOG(0x1270, _1270_b),
};

DialogDefTable quiz3_table = {
    quiz3_defs,
    sizeof(quiz3_defs) / sizeof(quiz3_defs[0])
};
