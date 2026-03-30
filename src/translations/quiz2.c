#include "translation.h"

/*
 * Quiz 2 / Final Battle Translations
 * Assets 0x1159 through 0x126F (105 assets)
 *
 * Grunty's Furnace Fun quiz questions (world-specific)
 * and final battle dialog sequences.
 *
 * Portraits:
 *   0xB5 = Grunty
 *   0x80 = Banjo (quiz question text)
 *   0x81 = Answer A (correct)
 *   0x82 = Answer B
 *   0x83 = Answer C
 *   0xB9 = Credits name
 *   0xD5 = Dingpot
 *   0xD6 = Tooty (alt)
 */

#define GRUNTY    0xB5
#define TOOTY_ALT 0xD6
#define DINGPOT   0xD5
#define CREDITS   0xB9

#define DIALOG(id, b, t) { id, b, sizeof(b)/sizeof(b[0]), t, sizeof(t)/sizeof(t[0]), NULL }
#define QDIALOG(id, b) { id, b, sizeof(b)/sizeof(b[0]), NULL, 0, NULL }

/* ============================================================
 * 0x1213 - How many notes to open 1st door? (B:6 T:0 -> correct:50)
 * DE: "WIEVIELE NOTEN BRAUCHST / DU DAFÜR, UM ZU ÖFFNEN / DIE ERSTE TÜR?"
 * ============================================================ */
static DialogLine _1213_b[] = {
    { 0x80, "\xBF" "CU\xC1NTAS NOTAS NECESITAS" },
    { 0x80, "PARA LA PRIMERA PUERTA" },
    { 0x80, "PODER ABRIR, CRIATURA?" },
    { 0x81, "50" },
    { 0x82, "100" },
    { 0x83, "75" },
};
static DialogLine _1213_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1214 - How is the jump attack called? (B:6 T:0 -> correct: SCHNABELSPRUNG/BEAK BUSTER)
 * DE: "KANN ES SEIN, DASS DU / NICHT WEISST, WIE DIE / SPRUNGATTACKE HEISST?"
 * ============================================================ */
static DialogLine _1214_b[] = {
    { 0x80, "\xBF" "PUEDE SER QUE NO SEPAS" },
    { 0x80, "C\xD3MO SE LLAMA EL ATAQUE" },
    { 0x80, "DE SALTO, CABEZA HUECA?" },
    { 0x81, "PICOTAZO A\xC9REO" },
    { 0x82, "BAILE DE PATO" },
    { 0x83, "CARRERA DE HUEVOS" },
};
static DialogLine _1214_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1215 - Grunty's sister name (B:6 T:0 -> correct: BRENTILDA)
 * DE: "ICH BIN DU UND DU BIST / ICH, MEINE SCHWESTER, / WIE NENNT SIE SICH?"
 * ============================================================ */
static DialogLine _1215_b[] = {
    { 0x80, "YO SOY YO Y T\xDA ERES T\xDA," },
    { 0x80, "MI HERMANA, DIME AHORA," },
    { 0x80, "\xBF" "C\xD3MO SE LLAMA ELLA?" },
    { 0x81, "BRENTILDA" },
    { 0x82, "BRUNTELLA" },
    { 0x83, "BRUNHILDE" },
};
static DialogLine _1215_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1216 - Mumbo skull, how many feathers (B:6 T:0 -> correct: 3)
 * DE: "AUF DEM MUMBO-SCHÄDEL, / JA, WIEVIELE FEDERN / WAREN DA?"
 * ============================================================ */
static DialogLine _1216_b[] = {
    { 0x80, "EN EL CR\xC1NEO DE MUMBO," },
    { 0x80, "S\xCD, \xBF" "CU\xC1NTAS PLUMAS" },
    { 0x80, "HAB\xCD" "A ALL\xCD?" },
    { 0x81, "3" },
    { 0x82, "2" },
    { 0x83, "4" },
};
static DialogLine _1216_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1217 - What color are Jinjos NOT? (B:6 T:0 -> correct: BRAUN/brown)
 * DE: "IN WELCHER FARBE, BÖSER / WICHT, GIBT ES DIESE / JINJOS NICHT?"
 * ============================================================ */
static DialogLine _1217_b[] = {
    { 0x80, "\xBF" "DE QU\xC9 COLOR, DESGRACIADO," },
    { 0x80, "NO HAY JINJOS EN ESTE" },
    { 0x80, "JUEGO ENCANTADO?" },
    { 0x81, "MARR\xD3N" },
    { 0x82, "VERDE" },
    { 0x83, "AMARILLO" },
};
static DialogLine _1217_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1218 - How many fields the flight pad has (B:6 T:0 -> correct: 6)
 * DE: "WIEVIELE FELDER DIE / LUFTANZEIGE HAT, WEISST / DU DOCH SICHER GLATT!"
 * ============================================================ */
static DialogLine _1218_b[] = {
    { 0x80, "\xBF" "CU\xC1NTAS CASILLAS TIENE" },
    { 0x80, "EL INDICADOR DE VUELO?" },
    { 0x80, "\xA1" "SEGURO LO SABES, BERZUELO!" },
    { 0x81, "6" },
    { 0x82, "5" },
    { 0x83, "7" },
};
static DialogLine _1218_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1219 - Banjo's sister name (B:7 T:0 -> correct: TOOTY)
 * DE: "VOR ANGST IST SIE GANZ / KLEIN, WIE NENNT SICH / DEIN KLEINES / SCHWESTERLEIN?"
 * ============================================================ */
static DialogLine _1219_b[] = {
    { 0x80, "DE MIEDO EST\xC1 TEMBLANDO" },
    { 0x80, "SIN PARAR, \xBF" "C\xD3MO SE" },
    { 0x80, "LLAMA TU PEQUE\xD1" "A" },
    { 0x80, "HERMANA SIN PAR?" },
    { 0x81, "TOOTY" },
    { 0x82, "LOOTY" },
    { 0x83, "BOOTY" },
};
static DialogLine _1219_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121A - Which vegetable is NOT on Spiral Mountain (B:8 T:0)
 * DE: "WELCHER GEMÜSEWICHT / ZEIGT SICH AM SPIRAL / MOUNTAIN NICHT?"
 * correct: COLLYWOBBLE, DER BLUMENKOHL
 * ============================================================ */
static DialogLine _121a_b[] = {
    { 0x80, "\xBF" "QU\xC9 VERDURA DE ACCI\xD3N" },
    { 0x80, "NO APARECE EN SPIRAL" },
    { 0x80, "MOUNTAIN, BRIB\xD3N?" },
    { 0x81, "SPUDDY, LA PATATA" },
    { 0x82, "TOPPER, LA ZANAHORIA" },
    { 0x83, "COLLYWOBBLE, LA" },
    { 0x83, "COLIFLOR" },
};
static DialogLine _121a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121B - Count mole hills on Spiral Mountain (B:7 T:0 -> correct: 8)
 * DE: "DIESE FRAGE VERLEIHT / FLÜGEL, ZÄHLE AM SPIRAL / MOUNTAIN DES MAULWURFS / HÜGEL!"
 * ============================================================ */
static DialogLine _121b_b[] = {
    { 0x80, "ESTA PREGUNTA DA ALAS," },
    { 0x80, "\xA1" "CUENTA LAS COLINAS DEL" },
    { 0x80, "TOPO EN SPIRAL MOUNTAIN" },
    { 0x80, "SIN DEMORAS!" },
    { 0x81, "8" },
    { 0x82, "7" },
    { 0x83, "9" },
};
static DialogLine _121b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121C - How many fields does the board have? (B:6 T:0 -> correct: 94)
 * DE: "EINE ANTWORT WÄRE NETT, / WIEVIELE FELDER HAT / DIESES BRETT?"
 * ============================================================ */
static DialogLine _121c_b[] = {
    { 0x80, "UNA RESPUESTA ME GUSTAR\xCD" "A," },
    { 0x80, "\xBF" "CU\xC1NTAS CASILLAS TIENE" },
    { 0x80, "ESTE TABLERO, SANGR\xCD" "A?" },
    { 0x81, "94" },
    { 0x82, "78" },
    { 0x83, "113" },
};
static DialogLine _121c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121D - How many puzzles to open Mumbo's Mountain door (B:6 T:0 -> correct: 1)
 * DE: "LEICHTE FRAGEN HIER / ZUHAUF, WIEVIELE / PUZZLETEILE MACHEN DIE TÜR ZU MUMBO'S MOUNTAIN AUF?"
 * ============================================================ */
static DialogLine _121d_b[] = {
    { 0x80, "PREGUNTAS F\xC1" "CILES TENDR\xC1S," },
    { 0x80, "\xBF" "CU\xC1NTOS PUZLES NECESITAS" },
    { 0x80, "PARA ABRIR LA PUERTA DE MUMBO'S MOUNTAIN Y ENTRAR\xC1S?" },
    { 0x81, "1" },
    { 0x82, "2" },
    { 0x83, "3" },
};
static DialogLine _121d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121E - Totem pole name in Mumbo village (B:6 T:0 -> correct: JUJU)
 * DE: "IN MUMBOS DORF, DA STEHT / EIN PFAHL, SEIN NAME / WÄRE ERSTE WAHL!"
 * ============================================================ */
static DialogLine _121e_b[] = {
    { 0x80, "EN LA ALDEA DE MUMBO HAY" },
    { 0x80, "UN POSTE T\xD3TEM, SU NOMBRE" },
    { 0x80, "\xA1" "SER\xCD" "A PRIMERA ELECCI\xD3N!" },
    { 0x81, "JUJU, EL POSTE T\xD3TEM" },
    { 0x82, "LULU, EL POSTE T\xD3TEM" },
    { 0x83, "TOJO, EL POSTE T\xD3TEM" },
};
static DialogLine _121e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x121F - Monkey on Mumbo's Mountain throws what? (B:5 T:0 -> correct: ORANGEN/oranges)
 * DE: "DER AFFE AUF MUMBO'S / MOUNTAIN IST FÜRCHTERLICH, WOMIT BEWIRFT ER DICH?"
 * ============================================================ */
static DialogLine _121f_b[] = {
    { 0x80, "EL MONO EN MUMBO'S" },
    { 0x80, "MOUNTAIN DA MUCHO PAVOR, \xBF" "CON QU\xC9 TE ATACA EL AGRESOR?" },
    { 0x81, "NARANJAS" },
    { 0x82, "BARRILES" },
    { 0x83, "BOLAS DE ALGOD\xD3N" },
};
static DialogLine _121f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1220 - Worm in tower on Mumbo's Mountain, name? (B:6 T:0 -> correct: TICKER)
 * DE: "AUF MUMBO'S MOUNTAIN, IN / EINEM TURM, WIE HEISST / DER DORT HAUSENDE WURM?"
 * ============================================================ */
static DialogLine _1220_b[] = {
    { 0x80, "EN MUMBO'S MOUNTAIN, EN UNA" },
    { 0x80, "TORRE, \xBF" "C\xD3MO SE LLAMA" },
    { 0x80, "EL GUSANO QUE ALL\xCD" " CORRE?" },
    { 0x81, "TICKER, LA TERMITA" },
    { 0x82, "BONGO, LA ABEJA" },
    { 0x83, "FATTY, EL MURCI\xC9LAGO" },
};
static DialogLine _1220_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1221 - What's in Mumbo's skull eye? (B:6 T:0 -> correct: MUMBO-SCHÄDEL/Mumbo token)
 * DE: "JETZT IST SCHLUSS MIT / DEM GENÖHLE, WAS / BEFINDET SICH IM AUGE VON MUMBOS SCHÄDELHÖHLE?"
 * ============================================================ */
static DialogLine _1221_b[] = {
    { 0x80, "BASTA YA DE TANTA CHARLA," },
    { 0x80, "\xBF" "QU\xC9 SE ENCUENTRA EN EL" },
    { 0x80, "OJO DE LA CALAVERA DE MUMBO ENTRE TANTA FARSA?" },
    { 0x81, "ALGO DIFERENTE" },
    { 0x82, "FICHA DE MUMBO" },
    { 0x83, "NOTA MUSICAL" },
};
static DialogLine _1221_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1222 - Jinjo color in lake on Mumbo's Mountain (B:5 T:0 -> correct: BLAU/blue)
 * DE: "AUF MUMBO'S MOUNTAIN EIN SEE, / ICH DORT EINEN JINJO WELCHER FARBE SEH'?"
 * ============================================================ */
static DialogLine _1222_b[] = {
    { 0x80, "EN MUMBO'S MOUNTAIN HAY UN LAGO A VER," },
    { 0x80, "\xBF" "DE QU\xC9 COLOR ES EL JINJO QUE ALL\xCD PUEDO VER?" },
    { 0x81, "AZUL" },
    { 0x82, "NEGRO" },
    { 0x83, "VERDE" },
};
static DialogLine _1222_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1223 - What swims in the lake of Mumbo's Mountain (B:6 T:0 -> correct: FISCHSCHWARM/fish school)
 * DE: "WAS SCHWIMMT DENN DA SO / DUMM IM SEE VON / MUMBO'S MOUNTAIN HERUM?"
 * ============================================================ */
static DialogLine _1223_b[] = {
    { 0x80, "\xBF" "QU\xC9 NADA TAN TONTAMENTE" },
    { 0x80, "EN EL LAGO DE MUMBO'S" },
    { 0x80, "MOUNTAIN, EL IMPRUDENTE?" },
    { 0x81, "UN BANCO DE PECES" },
    { 0x82, "UN TIBUR\xD3N MALVADO" },
    { 0x83, "UN VIEJO HIPOP\xD3TAMO" },
};
static DialogLine _1223_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1224 - How many straw huts on Mumbo's Mountain (B:7 T:0 -> correct: 6)
 * DE: "AUF MUMBO'S MOUNTAIN / STEHEN HÜTTEN AUS STROH, / WIEVIELE WAREN ES DENN / SO?"
 * ============================================================ */
static DialogLine _1224_b[] = {
    { 0x80, "EN MUMBO'S MOUNTAIN" },
    { 0x80, "HAY CABA\xD1" "AS DE PAJA," },
    { 0x80, "\xBF" "CU\xC1NTAS HAB\xCD" "A EN TOTAL," },
    { 0x80, "GENTUZA BAJA?" },
    { 0x81, "6" },
    { 0x82, "5" },
    { 0x83, "8" },
};
static DialogLine _1224_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1225 - Gorilla name on Mumbo's Mountain (B:6 T:0 -> correct: CONGA)
 * DE: "HEISST ER NICHT GODZILLA, / AUF MUMBO'S MOUNTAIN, / DER GORILLA?"
 * ============================================================ */
static DialogLine _1225_b[] = {
    { 0x80, "\xBF" "NO SE LLAMA GODZILLA" },
    { 0x80, "EL GORILA EN MUMBO'S" },
    { 0x80, "MOUNTAIN, ESA PANDILLA?" },
    { 0x81, "CONGA" },
    { 0x82, "BONGA" },
    { 0x83, "WONGA" },
};
static DialogLine _1225_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1226 - New move on Mumbo's Mountain (B:6 T:0 -> correct: HUCKEPACK-LAUF/Talon Trot)
 * DE: "SEI NICHT SO SCHEU, / WELCHER MOVE WAR AUF / MUMBO'S MOUNTAIN NEU?"
 * ============================================================ */
static DialogLine _1226_b[] = {
    { 0x80, "NO SEAS TAN COBARDE," },
    { 0x80, "\xBF" "QU\xC9 MOVIMIENTO EN MUMBO'S" },
    { 0x80, "MOUNTAIN ERA NUEVO AQUELLA TARDE?" },
    { 0x81, "TROTE DE GARRAS" },
    { 0x82, "VUELO MAGN\xCD" "FICO" },
    { 0x83, "SALTO MORTAL" },
};
static DialogLine _1226_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1227 - Which creature at TTC in posture? (B:6 T:0 -> correct: RIESENKRABBE/crab)
 * DE: "WELCHE KREATUR BRINGT / SICH AN DER TREASURE / TROVE COVE IN POSITUR?"
 * ============================================================ */
static DialogLine _1227_b[] = {
    { 0x80, "\xBF" "QU\xC9 CRIATURA SE PONE" },
    { 0x80, "EN POSTURA EN TREASURE" },
    { 0x80, "TROVE COVE, EL BRIB\xD3N?" },
    { 0x81, "UN CANGREJO GIGANTE" },
    { 0x82, "UNA LANGOSTA GIGANTE" },
    { 0x83, "UN TANQUE OXIDADO" },
};
static DialogLine _1227_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1228 - Where is there NO Jinjo at TTC (B:6 T:0 -> correct: SCHATZTRUHE/in a chest)
 * DE: "AN DER TREASURE TROVE / COVE, AN EINEM ORT, IST / KEIN JINJO DORT!"
 * ============================================================ */
static DialogLine _1228_b[] = {
    { 0x80, "EN TREASURE TROVE COVE," },
    { 0x80, "EN UN LUGAR NO HABR\xC1" },
    { 0x80, "\xA1" "JINJO QUE HALLAR\xC1S!" },
    { 0x81, "EN UN COFRE DEL TESORO" },
    { 0x82, "BAJO EL MUELLE DE INICIO" },
    { 0x83, "SOBRE UNA PALMERA" },
};
static DialogLine _1228_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1229 - Why does the old captain at TTC cry? (B:6 T:0 -> correct: lost gold)
 * DE: "DER ALTE KAPITÄN AN DER / TREASURE TROVE COVE, / WARUM HEULT ER? GÄHN!"
 * ============================================================ */
static DialogLine _1229_b[] = {
    { 0x80, "EL VIEJO CAPIT\xC1N EN" },
    { 0x80, "TREASURE TROVE COVE," },
    { 0x80, "\xBF" "POR QU\xC9 LLORA? \xA1" "BOSTEZAR\xC1S!" },
    { 0x81, "PERDI\xD3 SU ORO" },
    { 0x82, "TEN\xCD" "A SED" },
    { 0x83, "OLVID\xD3 SU NOMBRE" },
};
static DialogLine _1229_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122A - Who do you flee from at TTC? (B:7 T:0 -> correct: SNIPPET, DIE KRABBE)
 * DE: "VOR WEM MUSS MAN AN DER / TREASURE TROVE COVE / FLITZEN? WER WILL DORT / DAS GEPÄCK STIBITZEN?"
 * ============================================================ */
static DialogLine _122a_b[] = {
    { 0x80, "\xBF" "DE QUI\xC9N DEBES HUIR EN" },
    { 0x80, "TREASURE TROVE COVE" },
    { 0x80, "CORRIENDO? \xBF" "QUI\xC9N QUIERE" },
    { 0x80, "ROBARTE ALL\xCD MORDIENDO?" },
    { 0x81, "YUM-YUM, LA ALMEJA" },
    { 0x82, "LOCKUP, EL COFRE" },
    { 0x83, "SNIPPET, EL CANGREJO" },
};
static DialogLine _122a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122B - Name of bucket with hole at TTC (B:7 T:0 -> correct: LEAKY)
 * DE: "ICH WOLLTE WISSEN NOCH, / WIE HEISST AN DER / TREASURE TROVE COVE DER / EIMER MIT LOCH?"
 * ============================================================ */
static DialogLine _122b_b[] = {
    { 0x80, "YO QUER\xCD" "A SABER A\xDA" "N," },
    { 0x80, "\xBF" "C\xD3MO SE LLAMA EN" },
    { 0x80, "TREASURE TROVE COVE EL" },
    { 0x80, "CUBO CON AGUJERO COM\xDA" "N?" },
    { 0x81, "LEAKY" },
    { 0x82, "MR. EIMER" },
    { 0x83, "HOLEY" },
};
static DialogLine _122b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122C - Item easily reached at TTC (B:7 T:0 -> correct: ROTE FEDERN/red feathers)
 * DE: "WELCHER GEGENSTAND, GANZ / LEICHT, IST AN DER / TREASURE TROVE COVE / SOFORT ERREICHT?"
 * ============================================================ */
static DialogLine _122c_b[] = {
    { 0x80, "\xBF" "QU\xC9 OBJETO, MUY SENCILLO," },
    { 0x80, "EN TREASURE TROVE" },
    { 0x80, "COVE SE ALCANZA AL" },
    { 0x80, "LLEGAR, COMO UN CEPILLO?" },
    { 0x81, "PLUMAS ROJAS" },
    { 0x82, "PLUMAS DORADAS" },
    { 0x83, "PLUMAS BLANCAS" },
};
static DialogLine _122c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122D - Name of boat at TTC (B:6 T:0 -> correct: THE SALTY HIPPO)
 * DE: "AN DER TREASURE TROVE / COVE LIEGT EIN BOOT, WIE / IST DER NAME, OHNE NOT?"
 * ============================================================ */
static DialogLine _122d_b[] = {
    { 0x80, "EN TREASURE TROVE COVE" },
    { 0x80, "HAY UN BARCO, \xBF" "SU NOMBRE" },
    { 0x80, "CU\xC1L SER\xC1 SIN APURO?" },
    { 0x81, "THE SALTY HIPPO" },
    { 0x82, "THE SWEATY RHINO" },
    { 0x83, "THE WOBBLY WHALE" },
};
static DialogLine _122d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122E - Name of shark at TTC (B:7 T:0 -> correct: SNACKER)
 * DE: "WIE HEISST DENN NUN DER / HAI, DER AN DER TREASURE / TROVE COVE SCHWIMMT / VORBEI?"
 * ============================================================ */
static DialogLine _122e_b[] = {
    { 0x80, "\xBF" "C\xD3MO SE LLAMA ENTONCES" },
    { 0x80, "EL TIBUR\xD3N EN TREASURE" },
    { 0x80, "TROVE COVE QUE NADA" },
    { 0x80, "SIN TROPEZONES?" },
    { 0x81, "SNACKER" },
    { 0x82, "SLACKER" },
    { 0x83, "STACKER" },
};
static DialogLine _122e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x122F - How many X at TTC (B:6 T:0 -> correct: 6)
 * DE: "AN DER TREASURE TROVE / COVE, DIE SCHATZJAGD, / WIEVIELE X STEHEN PARAT?"
 * ============================================================ */
static DialogLine _122f_b[] = {
    { 0x80, "EN TREASURE TROVE COVE," },
    { 0x80, "LA B\xDA" "SQUEDA DEL TESORO," },
    { 0x80, "\xBF" "CU\xC1NTAS X HAY EN TOTAL?" },
    { 0x81, "6" },
    { 0x82, "5" },
    { 0x83, "M\xC1S" },
};
static DialogLine _122f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1230 - Missing letter on TTC floor (B:5 T:0 -> correct: X)
 * DE: "AM BODEN DER SANDBURG / AN DER TREASURE TROVE COVE, DA FEHLT EIN BUCHSTABE. WELCHER IST ES, MEIN KNABE?"
 * ============================================================ */
static DialogLine _1230_b[] = {
    { 0x80, "EN EL SUELO DEL CASTILLO" },
    { 0x80, "EN TREASURE TROVE COVE FALTA UNA LETRA. \xBF" "CU\xC1L ES, PATOSO MOZO PILLASTRE?" },
    { 0x81, "Q" },
    { 0x82, "NINGUNA" },
    { 0x83, "X" },
};
static DialogLine _1230_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1231 - How many links does the whale chain have in CC? (B:7 T:0 -> correct: 8)
 * DE: "IN CLANKER'S CAVERN, DIE / FRAGE KOMMT WIEDER, DIE / KETTE DES WALES HAT / WIEVIELE GLIEDER?"
 * ============================================================ */
static DialogLine _1231_b[] = {
    { 0x80, "EN CLANKER'S CAVERN, LA" },
    { 0x80, "PREGUNTA VUELVE A SONAR," },
    { 0x80, "\xBF" "LA CADENA DE LA BALLENA" },
    { 0x80, "CU\xC1NTOS ESLABONES TENDR\xC1?" },
    { 0x81, "8" },
    { 0x82, "6" },
    { 0x83, "10" },
};
static DialogLine _1231_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1232 - Clanker the whale's job (B:6 T:0 -> correct: MÜLLZERKLEINERER/garbage disposal)
 * DE: "CLANKER HEISST DER WAL, / WELCHER JOB MACHT IHM / DAS LEBEN ZUR QUAL?"
 * ============================================================ */
static DialogLine _1232_b[] = {
    { 0x80, "CLANKER ES LA BALLENA," },
    { 0x80, "\xBF" "QU\xC9 TRABAJO LE CAUSA" },
    { 0x80, "TANTA PENA?" },
    { 0x81, "TRITURADOR DE BASURA" },
    { 0x82, "LAVAPLATOS" },
    { 0x83, "GU\xCD" "A TUR\xCD" "STICO" },
};
static DialogLine _1232_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1233 - What's at bottom of Clanker's chain? (B:7 T:0 -> correct: EIN AMBOSS/anvil)
 * DE: "STELLE DICH NICHT SO AN, / WAS IST UNTEN IN / CLANKER'S CAVERN AN / CLANKERS KETTE DRAN?"
 * ============================================================ */
static DialogLine _1233_b[] = {
    { 0x80, "NO TE HAGAS EL TONTO," },
    { 0x80, "\xBF" "QU\xC9 HAY ABAJO EN" },
    { 0x80, "CLANKER'S CAVERN EN" },
    { 0x80, "LA CADENA, PRONTO?" },
    { 0x81, "UN YUNQUE" },
    { 0x82, "UNA ROCA" },
    { 0x83, "UN AUTO CHATARRA" },
};
static DialogLine _1233_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1234 - Bubble fish name in CC (B:7 T:0 -> correct: GLOOP)
 * DE: "DER BLUBBERBLASENFISCH / IN CLANKER'S CAVERN, DER / ZAHME, WIE IST SEIN / NAME?"
 * ============================================================ */
static DialogLine _1234_b[] = {
    { 0x80, "EL PEZ DE BURBUJAS EN" },
    { 0x80, "CLANKER'S CAVERN, EL" },
    { 0x80, "MANSITO, \xBF" "C\xD3MO SE LLAMA" },
    { 0x80, "ESE BONITO?" },
    { 0x81, "GLOOP" },
    { 0x82, "BLOOP" },
    { 0x83, "SLOOP" },
};
static DialogLine _1234_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1235 - What did you swim through in CC for Clanker air? (B:7 T:0 -> correct: GROSSER SCHLÜSSEL/big key)
 * DE: "WO BIST DU IN CLANKER'S / CAVERN DURCHGESCHWOMMEN, / DAMIT DER WAL CLANKER / HAT MEHR LUFT BEKOMMEN?"
 * ============================================================ */
static DialogLine _1235_b[] = {
    { 0x80, "\xBF" "POR D\xD3NDE NADASTE EN" },
    { 0x80, "CLANKER'S CAVERN AQUEL D\xCD" "A," },
    { 0x80, "PARA QUE LA BALLENA" },
    { 0x80, "M\xC1S AIRE CONSEGU\xCD" "A?" },
    { 0x81, "UNA LLAVE ENORME" },
    { 0x82, "VARIOS AROS" },
    { 0x83, "UNA BURBUJA DE AIRE" },
};
static DialogLine _1235_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1236 - Object shot from whale blowhole in CC (B:6 T:0 -> correct: EIN BOLZEN/bolt)
 * DE: "IN CLANKER'S CAVERN / SCHOSS EIN OBJEKT AUS DES WALES LUFTLOCH, / WAS WAR DAS NOCH?"
 * ============================================================ */
static DialogLine _1236_b[] = {
    { 0x80, "EN CLANKER'S CAVERN" },
    { 0x80, "UN OBJETO SALI\xD3 DEL ORIFICIO DE LA BALLENA VELOZ," },
    { 0x80, "\xBF" "QU\xC9 ERA, AUDAZ?" },
    { 0x81, "UN PERNO" },
    { 0x82, "UN CANGREJO" },
    { 0x83, "UNA BICICLETA" },
};
static DialogLine _1236_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1237 - Notable thing in CC catches your eye? (B:6 T:0 -> correct: HAMMER)
 * DE: "WELCHES MERKWÜRDIGE DING / DEINEN BLICK IN / CLANKER'S CAVERN FING?"
 * ============================================================ */
static DialogLine _1237_b[] = {
    { 0x80, "\xBF" "QU\xC9 COSA PECULIAR" },
    { 0x80, "TU MIRADA EN CLANKER'S" },
    { 0x80, "CAVERN LOGR\xD3 ATRAPAR?" },
    { 0x81, "MARTILLO" },
    { 0x82, "TORNILLO" },
    { 0x83, "YUNQUE" },
};
static DialogLine _1237_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1238 - How many paths into Clanker's Cavern from whale? (B:7 T:0 -> correct: 6)
 * DE: "SAGE MIR SCHNELL DIE / ZAHL, WIEVIELE WEGE / FÜHREN IN CLANKER'S / CAVERN IN DEN WAL?"
 * ============================================================ */
static DialogLine _1238_b[] = {
    { 0x80, "DIME R\xC1PIDO EL N\xDA" "MERO," },
    { 0x80, "\xBF" "CU\xC1NTOS CAMINOS LLEVAN" },
    { 0x80, "EN CLANKER'S CAVERN" },
    { 0x80, "A LA BALLENA, MAJADERO?" },
    { 0x81, "M\xC1S DE 4" },
    { 0x82, "MENOS DE 5" },
    { 0x83, "6" },
};
static DialogLine _1238_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1239 - Greatest danger in whale belly in CC (B:6 T:0 -> correct: ROTIERENDE KLINGEN/rotating blades)
 * DE: "IM BAUCH DES WALES, WIE / WUNDERBAR, WAS WAR DORT / DIE GRÖSSTE GEFAHR?"
 * ============================================================ */
static DialogLine _1239_b[] = {
    { 0x80, "EN EL VIENTRE DE LA BALLENA" },
    { 0x80, "\xA1" "QU\xC9 MARAVILLA! \xBF" "CU\xC1L ERA" },
    { 0x80, "ALL\xCD EL MAYOR PELIGRO?" },
    { 0x81, "CUCHILLAS GIRATORIAS" },
    { 0x82, "ENGRANAJES GIRATORIOS" },
    { 0x83, "ROTORES GIRATORIOS" },
};
static DialogLine _1239_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123A - How many rings in whale belly (B:6 T:0 -> correct: 8)
 * DE: "IN DES WALES GROSSEM / BAUCH, DURCH WIEVIELE / RINGE SCHWAMMST DU AUCH?"
 * ============================================================ */
static DialogLine _123a_b[] = {
    { 0x80, "EN LA PANZA DE LA BALLENA" },
    { 0x80, "GIGANTE, \xBF" "POR CU\xC1NTOS" },
    { 0x80, "AROS NADASTE, IGNORANTE?" },
    { 0x81, "8" },
    { 0x82, "7" },
    { 0x83, "MENOS DE 7" },
};
static DialogLine _123a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123B - What was in the BGS egg when it broke? (B:5 T:0 -> correct: EXTRALEBEN)
 * DE: "IM BUBBLEGLOOP SWAMP, DAS EI, / WAS WAR NICHT DARIN, ALS ES BRACH ENTZWEI?"
 * ============================================================ */
static DialogLine _123b_b[] = {
    { 0x80, "EN BUBBLEGLOOP SWAMP, EL HUEVO QUE SE ROMPI\xD3," },
    { 0x80, "\xBF" "QU\xC9 NO HAB\xCD" "A DENTRO CUANDO SE PARTI\xD3?" },
    { 0x81, "UNA VIDA EXTRA" },
    { 0x82, "UN PUZLE" },
    { 0x83, "UN HUEVO M\xC1S PEQUE\xD1O" },
};
static DialogLine _123b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123C - Highest point in BGS (B:7 T:0 -> correct: EINE SCHILDKRÖTE/turtle)
 * DE: "ALS ES IM BUBBLEGLOOP / SWAMP HAT GEFUNKT, WAS / WAR DORT AUF DEM / HÖCHSTEN PUNKT?"
 * ============================================================ */
static DialogLine _123c_b[] = {
    { 0x80, "CUANDO EN BUBBLEGLOOP" },
    { 0x80, "SWAMP TODO BRILL\xD3," },
    { 0x80, "\xBF" "QU\xC9 HAB\xCD" "A EN EL PUNTO" },
    { 0x80, "M\xC1S ALTO DE ALL\xCD?" },
    { 0x81, "UNA CABA\xD1" "A VIEJA" },
    { 0x82, "UNA TORTUGA" },
    { 0x83, "UN LIRIO" },
};
static DialogLine _123c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123D - What to jump on for turtles in BGS (B:5 T:0 -> correct: AUF IHRE FÜSSE/their feet)
 * DE: "WORAUF MUSSTEST DU HÜPFEN, / UM IM BUBBLEGLOOP SWAMP IN DIE SCHILDKRÖTE ZU SCHLÜPFEN?"
 * ============================================================ */
static DialogLine _123d_b[] = {
    { 0x80, "\xBF" "SOBRE QU\xC9 TUVISTE QUE SALTAR" },
    { 0x80, "PARA EN BUBBLEGLOOP SWAMP EN LA TORTUGA PODER ENTRAR?" },
    { 0x81, "SOBRE SUS PIES" },
    { 0x82, "SOBRE SU CABEZA" },
    { 0x83, "SOBRE SU TRASERO" },
};
static DialogLine _123d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123E - How many turtles in BGS (B:6 T:0 -> correct: 8)
 * DE: "ERINNERST DU DICH, / WIEVIELE SCHILDKRÖTEN IM / BUBBLEGLOOP SWAMP BEFANDEN SICH?"
 * ============================================================ */
static DialogLine _123e_b[] = {
    { 0x80, "\xBF" "TE ACUERDAS T\xDA," },
    { 0x80, "CU\xC1NTAS TORTUGAS EN" },
    { 0x80, "BUBBLEGLOOP SWAMP HAB\xCD" "A, AVESTRUZ?" },
    { 0x81, "8" },
    { 0x82, "6" },
    { 0x83, "7" },
};
static DialogLine _123e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x123F - Biggest bear-haters in BGS water (B:6 T:0 -> correct: PIRANHAS)
 * DE: "IM BUBBLEGLOOP SWAMP, / IM WASSER, WER SIND DORT / DIE GRÖSSTEN BÄRENHASSER?"
 * ============================================================ */
static DialogLine _123f_b[] = {
    { 0x80, "EN BUBBLEGLOOP SWAMP," },
    { 0x80, "EN EL AGUA, \xBF" "QUI\xC9N ODIA" },
    { 0x80, "A LOS OSOS CON M\xC1S SA\xD1" "A?" },
    { 0x81, "PIRA\xD1" "AS" },
    { 0x82, "ANGUILAS" },
    { 0x83, "BARRACUDAS" },
};
static DialogLine _123f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1240 - True statement about BGS (B:9 T:0 -> correct: BOTTLES + 2 MOVES)
 * DE: "KANNST DU MIR SAGEN, / SONNENKLAR, WELCHE / AUSSAGE ÜBER DEN BUBBLEGLOOP SWAMP IST WAHR?"
 * ============================================================ */
static DialogLine _1240_b[] = {
    { 0x80, "\xBF" "PUEDES DECIRME CON RAZ\xD3N" },
    { 0x80, "QU\xC9 AFIRMACI\xD3N SOBRE" },
    { 0x80, "BUBBLEGLOOP SWAMP ES VERDAD, BRIB\xD3N?" },
    { 0x81, "BOTTLES ENSE\xD1" "A DOS NUEVOS" },
    { 0x81, "MOVIMIENTOS" },
    { 0x82, "HAY DOS COCODRILOS" },
    { 0x82, "EN LA SUPERFICIE" },
    { 0x83, "HAY RANAS EN DOS" },
    { 0x83, "COLORES DIFERENTES" },
};
static DialogLine _1240_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1241 - Notable thing in BGS (B:6 T:0 -> correct: GRÜNER FROSCH/yellow frog)
 * DE: "WELCHES MERKWÜRDIGE DING / IM BUBBLEGLOOP SWAMP / DEINE BLICKE FING?"
 * ============================================================ */
static DialogLine _1241_b[] = {
    { 0x80, "\xBF" "QU\xC9 COSA EXTRA\xD1" "A EN" },
    { 0x80, "BUBBLEGLOOP SWAMP TU" },
    { 0x80, "MIRADA ATRAJO CON GA\xD1" "A?" },
    { 0x81, "UNA RANA VERDE" },
    { 0x82, "UNA RANA ROJA" },
    { 0x83, "UNA RANA AMARILLA" },
};
static DialogLine _1241_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1242 - Frogs name in BGS (B:6 T:0 -> correct: FLIBBITS)
 * DE: "SEI NICHT SO DUMPF, WIE / HEISSEN DIE FRÖSCHE IM / BUBBLEGLOOP SWAMP, DEM DÜSTEREN SUMPF?"
 * ============================================================ */
static DialogLine _1242_b[] = {
    { 0x80, "NO SEAS TAN BOBO," },
    { 0x80, "\xBF" "C\xD3MO SE LLAMAN LAS RANAS EN" },
    { 0x80, "BUBBLEGLOOP SWAMP, EL PANTANO SOMBROSO Y PLOBO?" },
    { 0x81, "FLIBBITS" },
    { 0x82, "STIKKITS" },
    { 0x83, "STICKUPS" },
};
static DialogLine _1242_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1243 - Favorite food of crocodiles in BGS (B:6 T:0 -> correct: YUMBLIES UND GRUMBLIES)
 * DE: "DU BIST NICHT MEINE / MUTTER, DOCH WAS IST IM / SUMPF DER KROKODILE LIEBSTES FUTTER?"
 * ============================================================ */
static DialogLine _1243_b[] = {
    { 0x80, "NO ERES MI MADRE, PERO" },
    { 0x80, "\xBF" "CU\xC1L ES EN EL PANTANO" },
    { 0x80, "LA COMIDA FAVORITA DE LOS COCODRILOS, TARUGO?" },
    { 0x81, "YUMBLIES Y GRUMBLIES" },
    { 0x82, "YUMYUMS Y BUMBUMS" },
    { 0x83, "BUMBLIES Y DUMBLIES" },
};
static DialogLine _1243_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1244 - What decorates toad armor in BGS (B:5 T:0 -> correct: MUSIKNOTE/music note)
 * DE: "IM BUBBLEGLOOP SWAMP, DA SINGT EIN CHOR OHNE FLÖTEN, / WAS ZIERT DEN PANZER DER KRÖTEN?"
 * ============================================================ */
static DialogLine _1244_b[] = {
    { 0x80, "EN BUBBLEGLOOP SWAMP CANTAN SAPOS SIN FLAUTA CON EMOCI\xD3N," },
    { 0x80, "\xBF" "QU\xC9 ADORNA EL CAPARAZ\xD3N DE CADA SAPOTE BRIB\xD3N?" },
    { 0x81, "UNA NOTA MUSICAL" },
    { 0x82, "UNA DIANA" },
    { 0x83, "UN ARPA" },
};
static DialogLine _1244_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1245 - Who is NOT in Freezeezy Peak? (B:6 T:0 -> correct: EINEN SEELÖWEN/sea lion)
 * DE: "DU KLEINER WICHT, WEN / GIBT ES IN FREEZEEZY / PEAK NICHT?"
 * ============================================================ */
static DialogLine _1245_b[] = {
    { 0x80, "PEQUE\xD1O NECIO, A QUI\xC9N" },
    { 0x80, "NO HAY EN FREEZEEZY" },
    { 0x80, "PEAK, \xBF" "EH DESQUICIADO?" },
    { 0x81, "UN LE\xD3N MARINO" },
    { 0x82, "UNA MORSA" },
    { 0x83, "UN OSO POLAR" },
};
static DialogLine _1245_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1246 - What is NOT in Freezeezy Peak? (B:6 T:0 -> correct: WEIHNACHTSSTOLLEN/Christmas stollen)
 * DE: "ICH SPÜRE HEUTE GICHT, / WAS GIBT ES IN / FREEZEEZY PEAK NICHT?"
 * ============================================================ */
static DialogLine _1246_b[] = {
    { 0x80, "HOY SIENTO MUCHO FR\xCD" "O," },
    { 0x80, "\xBF" "QU\xC9 NO EXISTE EN" },
    { 0x80, "FREEZEEZY PEAK, BALD\xCD" "O?" },
    { 0x81, "PAN DE NAVIDAD" },
    { 0x82, "REGALOS DE NAVIDAD" },
    { 0x83, "\xC1RBOL DE NAVIDAD" },
};
static DialogLine _1246_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1247 - Who climbed summit in FP? (B:8 T:0 -> correct: FÜNF BÄREN/five bears)
 * DE: "WER IN FREEZEEZY PEAK / DEN GIPFEL ERKLIMMT, DER / WEISS AUCH, WELCHE / AUSSAGE HIER STIMMT!"
 * ============================================================ */
static DialogLine _1247_b[] = {
    { 0x80, "QUIEN EN FREEZEEZY PEAK" },
    { 0x80, "LA CIMA ESCAL\xD3, SABE" },
    { 0x80, "TAMBI\xC9N QU\xC9 FRASE" },
    { 0x80, "\xA1" "AQU\xCD ES VERDAD, CALAMIDAD!" },
    { 0x81, "ALL\xCD VIVEN CINCO OSOS" },
    { 0x82, "ALL\xCD VIVEN CINCO CUBOS DE HIELO" },
    { 0x83, "ALL\xCD VIVEN CINCO" },
    { 0x83, "MU\xD1" "ECOS DE NIEVE" },
};
static DialogLine _1247_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1248 - What cheers up sad bears in FP? (B:7 T:0 -> correct: GESCHENKE/presents)
 * DE: "DIE KLEINEN BÄREN IN / FREEZEEZY PEAK TRAUERN / SO, WOMIT MACHST DU / SIE WIEDER FROH?"
 * ============================================================ */
static DialogLine _1248_b[] = {
    { 0x80, "LOS OSITOS EN FREEZEEZY" },
    { 0x80, "PEAK LLORAN A RAUDAL," },
    { 0x80, "\xBF" "CON QU\xC9 LOS HACES" },
    { 0x80, "FELICES DE VERDAD?" },
    { 0x81, "REGALOS" },
    { 0x82, "GORROS DE LANA" },
    { 0x83, "CALZONCILLOS LARGOS" },
};
static DialogLine _1248_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1249 - Color of snowman's scarf in FP (B:7 T:0 -> correct: GELB UND ROT/yellow&red)
 * DE: "DER SCHNEEMANN STEHT IN / FREEZEEZY PEAK IM TAL, / WELCHE FARBE HAT SEIN / SCHAL?"
 * ============================================================ */
static DialogLine _1249_b[] = {
    { 0x80, "EL MU\xD1" "ECO DE NIEVE EST\xC1" },
    { 0x80, "EN FREEZEEZY PEAK SIN PAR," },
    { 0x80, "\xBF" "DE QU\xC9 COLOR ES SU" },
    { 0x80, "BUFANDA SINGULAR?" },
    { 0x81, "AMARILLO Y ROJO" },
    { 0x82, "NARANJA Y ROJO" },
    { 0x83, "VERDE Y GRIS" },
};
static DialogLine _1249_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124A - What does snowman hold in FP (B:5 T:0 -> correct: EINEN BESEN/a broom)
 * DE: "IN FREEZEEZY PEAK, IM SCHNEEBEDECKTEN LAND, / WAS HÄLT DER SCHNEEMANN IN DER HAND?"
 * ============================================================ */
static DialogLine _124a_b[] = {
    { 0x80, "EN FREEZEEZY PEAK, TIERRA DE NIEVE SIN IGUAL," },
    { 0x80, "\xBF" "QU\xC9 SOSTIENE EL MU\xD1" "ECO DE NIEVE INVERNAL?" },
    { 0x81, "UNA ESCOBA" },
    { 0x82, "UNA GAME BOY CAMERA" },
    { 0x83, "UNA PALA" },
};
static DialogLine _124a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124B - Boggy the bear in FP, how many puzzles? (B:6 T:0 -> correct: DREI/3)
 * DE: "IN FREEZEEZY PEAK LEBT / BOGGY, DER BÄR, WIEVIELE / PUZZLETEILE HAT ER?"
 * ============================================================ */
static DialogLine _124b_b[] = {
    { 0x80, "EN FREEZEEZY PEAK VIVE" },
    { 0x80, "BOGGY, EL OSO, \xBF" "CU\xC1NTOS" },
    { 0x80, "PUZLES TIENE ESE GRASOSO?" },
    { 0x81, "TRES" },
    { 0x82, "DOS" },
    { 0x83, "CUATRO" },
};
static DialogLine _124b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124C - Slalom in FP, how many gates? (B:6 T:0 -> correct: 38)
 * DE: "IN FREEZEEZY PEAK, DAS / SLALOMRENNEN, DEN WEG / DURCH WIEVIELE TORE MUSST DU KENNEN?"
 * ============================================================ */
static DialogLine _124c_b[] = {
    { 0x80, "EN FREEZEEZY PEAK, LA" },
    { 0x80, "CARRERA DE ESLALON," },
    { 0x80, "\xBF" "POR CU\xC1NTAS PUERTAS PASAS SIN PERD\xD3N?" },
    { 0x81, "38" },
    { 0x82, "28" },
    { 0x83, "48" },
};
static DialogLine _124c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124D - How many bears fit in the FP igloo? (B:7 T:0 -> correct: FÜNF/5)
 * DE: "IN FREEZEEZY PEAK, DA / STEHT EIN IGLU FEIN, / WIEVIELE BÄREN PASSEN / HINEIN?"
 * ============================================================ */
static DialogLine _124d_b[] = {
    { 0x80, "EN FREEZEEZY PEAK HAY" },
    { 0x80, "UN IGL\xDA FINO Y ELEGANTE," },
    { 0x80, "\xBF" "CU\xC1NTOS OSOS CABEN" },
    { 0x80, "DENTRO, IGNORANTE?" },
    { 0x81, "CINCO" },
    { 0x82, "TRES" },
    { 0x83, "CUATRO" },
};
static DialogLine _124d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124E - Walrus name in FP (B:6 T:0 -> correct: WOZZA)
 * DE: "IN FREEZEEZY PEAK EIN / WALROSS LEBT, WELCHEN / NAMEN ES DENN TRÄGT?"
 * ============================================================ */
static DialogLine _124e_b[] = {
    { 0x80, "EN FREEZEEZY PEAK UNA" },
    { 0x80, "MORSA VIVIR\xC1, \xBF" "QU\xC9" },
    { 0x80, "NOMBRE LLEVAR\xC1?" },
    { 0x81, "WOZZA" },
    { 0x82, "WAZZA" },
    { 0x83, "GAZZA" },
};
static DialogLine _124e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x124F - How many pyramids in GV (B:6 T:0 -> correct: 4)
 * DE: "KANNST DU SEHEN, / WIEVIELE PYRAMIDEN IN / GOBI'S VALLEY STEHEN?"
 * ============================================================ */
static DialogLine _124f_b[] = {
    { 0x80, "\xBF" "PUEDES VER BIEN," },
    { 0x80, "CU\xC1NTAS PIR\xC1MIDES EN" },
    { 0x80, "GOBI'S VALLEY HAY, SOPLAMOQUITOS?" },
    { 0x81, "4" },
    { 0x82, "3" },
    { 0x83, "5" },
};
static DialogLine _124f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1250 - What comes out of pyramid in GV (B:6 T:0 -> correct: WASSER)
 * DE: "WAS QUILLT, OH GRAUS, / AUS GOBIS PYRAMIDE IN / GOBI'S VALLEY HERAUS?"
 * ============================================================ */
static DialogLine _1250_b[] = {
    { 0x80, "\xBF" "QU\xC9 SALE, OH QU\xC9 HORROR," },
    { 0x80, "DE LA PIR\xC1MIDE DE GOBI" },
    { 0x80, "EN GOBI'S VALLEY, CANTOR?" },
    { 0x81, "AGUA" },
    { 0x82, "ARENA" },
    { 0x83, "UNA HORDA DE MOMIAS" },
};
static DialogLine _1250_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1251 - Mummy hand name hiding puzzle in GV (B:7 T:0 -> correct: GRABBA)
 * DE: "DEN NAMEN SUCHE ICH DER / HAND, DIE IN GOBI'S / VALLEY EIN PUZZLETEIL / VERSTECKT IM SAND!"
 * ============================================================ */
static DialogLine _1251_b[] = {
    { 0x80, "EL NOMBRE BUSCO DE LA" },
    { 0x80, "MANO QUE EN GOBI'S" },
    { 0x80, "VALLEY UN PUZLE OCULTA" },
    { 0x80, "\xA1" "EN LA ARENA CON GANAS!" },
    { 0x81, "GRABBA, LA MANO MOMIA" },
    { 0x82, "ROBBA, LA MANO MOMIA" },
    { 0x83, "ABBA, LA MANO MOMIA" },
};
static DialogLine _1251_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1252 - What does camel Gobi give at spot 3? (B:6 T:0 -> correct: LEERE HONIGWABE/empty honeycomb)
 * DE: "DAS KAMEL GOBI HAT FREI, / WAS GIBT ES HER AN / PLATZ NUMMER DREI?"
 * ============================================================ */
static DialogLine _1252_b[] = {
    { 0x80, "EL CAMELLO GOBI YA ES LIBRE," },
    { 0x80, "\xBF" "QU\xC9 DA EN EL LUGAR" },
    { 0x80, "N\xDA" "MERO TRES, EL POBRE?" },
    { 0x81, "UN PANAL VAC\xCD" "O" },
    { 0x82, "UN PUZLE" },
    { 0x83, "NADA" },
};
static DialogLine _1252_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1253 - How many carpets fly in Gobi's sphinx (B:6 T:0 -> correct: 5)
 * DE: "SCHAUE RECHTS UND LINKS, / WIEVIELE TEPPICHE / FLIEGEN IN GOBIS SPHINX?"
 * ============================================================ */
static DialogLine _1253_b[] = {
    { 0x80, "MIRA A DERECHA E IZQUIERDA," },
    { 0x80, "\xBF" "CU\xC1NTAS ALFOMBRAS" },
    { 0x80, "VUELAN EN LA ESFINGE DE GOBI, BESTIA LERDA?" },
    { 0x81, "5" },
    { 0x82, "4" },
    { 0x83, "6" },
};
static DialogLine _1253_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1254 - What can you ride in GV? (B:7 T:0 -> correct: EIN MAGISCHER TEPPICH)
 * DE: "WORAUF KANN MAN IN / GOBI'S VALLEY REITEN UND / SANFT ÜBER DEN HEISSEN / WÜSTENSAND GLEITEN?"
 * ============================================================ */
static DialogLine _1254_b[] = {
    { 0x80, "\xBF" "SOBRE QU\xC9 SE PUEDE EN" },
    { 0x80, "GOBI'S VALLEY CABALGAR" },
    { 0x80, "Y SOBRE LA ARDIENTE" },
    { 0x80, "ARENA DESLIZAR?" },
    { 0x81, "UNA ALFOMBRA M\xC1GICA" },
    { 0x82, "UNA L\xC1MPARA M\xC1GICA" },
    { 0x83, "UN TAXI M\xC1GICO" },
};
static DialogLine _1254_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1255 - What does desert cactus give in GV? (B:6 T:0 -> correct: LEERE HONIGWABE)
 * DE: "MEINE FRAGE, DIE IST / HEISS, DER WÜSTENKAKTUS / SPENDET WELCHEN PREIS?"
 * ============================================================ */
static DialogLine _1255_b[] = {
    { 0x80, "MI PREGUNTA ES MUY CALIENTE," },
    { 0x80, "\xBF" "QU\xC9 PREMIO DA EL CACTUS" },
    { 0x80, "DEL DESIERTO, PESTILENTE?" },
    { 0x81, "UN PANAL VAC\xCD" "O" },
    { 0x82, "UN PUZLE" },
    { 0x83, "UN TROZO DE PASTEL" },
};
static DialogLine _1255_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1256 - Memory game in pyramid, which face NOT a target? (B:5 T:0 -> correct: JINJO)
 * DE: "IN DER PYRAMIDE, DAS MEMORY-SPIEL, / WELCHES GESICHT IST NICHT DEIN ZIEL?"
 * ============================================================ */
static DialogLine _1256_b[] = {
    { 0x80, "EN LA PIR\xC1MIDE, EL JUEGO DE MEMORIA SIN IGUAL," },
    { 0x80, "\xBF" "QU\xC9 CARA NO ES TU OBJETIVO FINAL?" },
    { 0x81, "GRUNTILDA" },
    { 0x82, "MUMBO JUMBO" },
    { 0x83, "JINJO" },
};
static DialogLine _1256_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1257 - What does tree in desert have on its head? (B:6 T:0 -> correct: EINEN HUT/hat)
 * DE: "SAGE MIR, DU TROPF, WAS / HAT DER BAUM IN DER / WÜSTE AUF DEM KOPF?"
 * ============================================================ */
static DialogLine _1257_b[] = {
    { 0x80, "DIME YA, GRANDULL\xD3N," },
    { 0x80, "\xBF" "QU\xC9 TIENE EL \xC1RBOL DEL" },
    { 0x80, "DESIERTO EN EL CASCAR\xD3N?" },
    { 0x81, "UN SOMBRERO" },
    { 0x82, "UNA PELUCA" },
    { 0x83, "GAFAS DE SOL" },
};
static DialogLine _1257_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1258 - Snake charmer payment in GV (B:7 T:0 -> correct: EINIGE BLAUE EIER/blue eggs)
 * DE: "DER SCHLANGENBESCHWÖRER / EINE HILFE IST, DOCH / WELCHE BEZAHLUNG ER / UNGERN VERMISST?"
 * ============================================================ */
static DialogLine _1258_b[] = {
    { 0x80, "EL ENCANTADOR DE SERPIENTES" },
    { 0x80, "UNA AYUDA RESULTA SER," },
    { 0x80, "\xBF" "PERO QU\xC9 PAGO NO QUIERE" },
    { 0x80, "\xC9L PERDER?" },
    { 0x81, "ALGUNOS HUEVOS AZULES" },
    { 0x82, "ALGUNAS PLUMAS DORADAS" },
    { 0x83, "ALGUNAS CUCHARAS DORADAS" },
};
static DialogLine _1258_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1259 - Ghost hand instrument in MMM (B:6 T:0 -> correct: ORGEL/organ)
 * DE: "AUF WELCHEM INSTRUMENT / ÜBT SICH DIE GEISTERHAND / ALS MUSIKANT?"
 * ============================================================ */
static DialogLine _1259_b[] = {
    { 0x80, "\xBF" "EN QU\xC9 INSTRUMENTO" },
    { 0x80, "PRACTICA LA MANO FANTASMA" },
    { 0x80, "COMO M\xDA" "SICO AMBULANTE?" },
    { 0x81, "\xD3RGANO" },
    { 0x82, "PIANO" },
    { 0x83, "GUITARRA EL\xC9" "CTRICA" },
};
static DialogLine _1259_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125A - How many paths in MMM (B:6 T:0 -> correct: 9)
 * DE: "JETZT KEINE STARALLÜREN, / WIEVIELE WEGE IN MAD / MONSTER MANSION FÜHREN?"
 * ============================================================ */
static DialogLine _125a_b[] = {
    { 0x80, "AHORA NADA DE ESTRELLARSE," },
    { 0x80, "\xBF" "CU\xC1NTOS CAMINOS EN MAD" },
    { 0x80, "MONSTER MANSION HAY PARA ANDARSE?" },
    { 0x81, "9" },
    { 0x82, "7" },
    { 0x83, "8" },
};
static DialogLine _125a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125B - What's on the cemetery in MMM (B:7 T:0 -> correct: GEISTER/ghosts)
 * DE: "STELLE DICH NICHT DOOF, / WAS FINDET IN MAD / MONSTER MANSION MAN / NICHT AUF DEM FRIEDHOF?"
 * ============================================================ */
static DialogLine _125b_b[] = {
    { 0x80, "NO TE HAGAS EL TONTO," },
    { 0x80, "\xBF" "QU\xC9 NO SE ENCUENTRA EN" },
    { 0x80, "MAD MONSTER MANSION" },
    { 0x80, "EN EL CEMENTERIO, PRONTO?" },
    { 0x81, "FANTASMAS" },
    { 0x82, "FLORES" },
    { 0x83, "L\xC1PIDAS" },
};
static DialogLine _125b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125C - What rises from pots on cemetery in MMM (B:7 T:0 -> correct: BLUMENSTRAUSS/bouquet)
 * DE: "JETZT MAL NICHT DIE / CHANCE VERGEIGT, WAS IST / ES, DASS AUS DEN TÖPFEN / DES FRIEDHOFES STEIGT?"
 * ============================================================ */
static DialogLine _125c_b[] = {
    { 0x80, "AHORA NO PIERDAS TU" },
    { 0x80, "OPORTUNIDAD, \xBF" "QU\xC9 ES LO" },
    { 0x80, "QUE SALE DE LAS MACETAS" },
    { 0x80, "DEL CEMENTERIO CON BREVEDAD?" },
    { 0x81, "UN RAMO DE FLORES" },
    { 0x82, "UN AVESTRUZ" },
    { 0x83, "UNA PLANTA DE PL\xC1TANO" },
};
static DialogLine _125c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125D - What's on the barrels in MMM cellar (B:7 T:0 -> correct: '1881')
 * DE: "ICH FRESSE EINEN BESEN, / WAS IST AUF DEN FÄSSERN / IM KELLER VON MAD / MONSTER MANSION ZU LESEN?"
 * ============================================================ */
static DialogLine _125d_b[] = {
    { 0x80, "ME COMO UNA ESCOBA," },
    { 0x80, "\xBF" "QU\xC9 SE LEE EN LOS BARRILES" },
    { 0x80, "DEL S\xD3TANO DE MAD" },
    { 0x80, "MONSTER MANSION, GARROBO?" },
    { 0x81, "'1881'" },
    { 0x82, "'FR\xC1GIL'" },
    { 0x83, "'\xA1" "FUERA!'" },
};
static DialogLine _125d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125E - What's NOT in cellar of MMM (B:7 T:0 -> correct: ROTE FEDERN/red feathers)
 * DE: "WIR SIND NICHT VOR / GERICHT, DOCH WAS FINDET / MAN IM KELLER VON MAD / MONSTER MANSION NICHT?"
 * ============================================================ */
static DialogLine _125e_b[] = {
    { 0x80, "NO ESTAMOS EN UN JUICIO," },
    { 0x80, "PERO \xBF" "QU\xC9 NO ENCUENTRAS" },
    { 0x80, "EN EL S\xD3TANO DE MAD" },
    { 0x80, "MONSTER MANSION, NOVICIO?" },
    { 0x81, "PLUMAS ROJAS" },
    { 0x82, "JINJO" },
    { 0x83, "PIEZA DE PUZLE" },
};
static DialogLine _125e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x125F - Which room exists in only one of Grunty's dreams in MMM (B:7 T:0 -> correct: KELLER)
 * DE: "EINEN DIESER RÄUME GIBT / ES IN MAD MONSTER / MANSION NUR IN EINEM / MEINER TRÄUME!"
 * ============================================================ */
static DialogLine _125f_b[] = {
    { 0x80, "UNA DE ESTAS SALAS SOLO" },
    { 0x80, "EXISTE EN MAD MONSTER" },
    { 0x80, "MANSION EN UNO DE MIS" },
    { 0x80, "\xA1" "SUE\xD1OS, CANALLAS!" },
    { 0x81, "COCINA" },
    { 0x82, "BA\xD1O" },
    { 0x83, "S\xD3TANO" },
};
static DialogLine _125f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1260 - Ghost hand name in MMM (B:7 T:0 -> correct: MOTZAND/Motzhand)
 * DE: "WIE WIRD DENN NUN DIE / MUSIKALISCHE GEISTERHAND / IN MAD MONSTER MANSION / GENANNT?"
 * ============================================================ */
static DialogLine _1260_b[] = {
    { 0x80, "\xBF" "C\xD3MO SE LLAMA ENTONCES" },
    { 0x80, "LA MANO FANTASMA MUSICAL" },
    { 0x80, "EN MAD MONSTER MANSION" },
    { 0x80, "LA GENIAL?" },
    { 0x81, "MOTZAND" },
    { 0x82, "STREUSAND" },
    { 0x83, "BACHAND" },
};
static DialogLine _1260_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1261 - Clock face time in MMM (B:8 T:0 -> correct: KEINE, DIE ZEIGER SIND ABGEFALLEN/no hands)
 * DE: "SAGE MIR NUR, WELCHE / ZEIT ZEIGT IN MAD / MONSTER MANSION DAS / GESICHT DER UHR?"
 * ============================================================ */
static DialogLine _1261_b[] = {
    { 0x80, "DIME SOLAMENTE, \xBF" "QU\xC9" },
    { 0x80, "HORA MARCA EN MAD" },
    { 0x80, "MONSTER MANSION LA" },
    { 0x80, "CARA DEL RELOJ?" },
    { 0x81, "NINGUNA, LAS MANECILLAS" },
    { 0x81, "SE HAN CA\xCD" "DO" },
    { 0x82, "MEDIANOCHE" },
    { 0x83, "MEDIOD\xCD" "A" },
};
static DialogLine _1261_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1262 - What wakes ghost in MMM (B:10 T:0)
 * DE: "HÖR ZU, MEIN KLEINES / SCHAF, WAS WECKT DEN / GEIST VON MAD MONSTER / MANSION AUS DEM SCHLAF?"
 * ============================================================ */
static DialogLine _1262_b[] = {
    { 0x80, "ESCUCHA, MI OVEJITA" },
    { 0x80, "TRAVIESA, \xBF" "QU\xC9 DESPIERTA" },
    { 0x80, "AL FANTASMA DE MAD" },
    { 0x80, "MONSTER MANSION DEPRISA?" },
    { 0x81, "BANJO PISA EL SUELO" },
    { 0x81, "CHIRRIANTE" },
    { 0x82, "BANJO HACE SONAR" },
    { 0x82, "EL TIMBRE" },
    { 0x83, "BANJO LE GOLPEA CON" },
    { 0x83, "UN TABL\xD3N EN LA CABEZA" },
};
static DialogLine _1262_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1263 - What's in crate at crane in RBB (B:7 T:0 -> correct: TNT)
 * DE: "EINE FRAGE KOMMT MIR IN / DEN SINN, WAS IST IN / RUSTY BUCKET BAY AM KRAN / IN DER KISTE DRIN?"
 * ============================================================ */
static DialogLine _1263_b[] = {
    { 0x80, "UNA PREGUNTA SE ME OCURRE," },
    { 0x80, "\xBF" "QU\xC9 HAY EN RUSTY BUCKET" },
    { 0x80, "BAY EN LA CAJA DE" },
    { 0x80, "LA GR\xDA" "A QUE RECURRE?" },
    { 0x81, "TNT" },
    { 0x82, "TRES VIDAS EXTRA" },
    { 0x83, "LA HABITACI\xD3N DE \xC1MBAR" },
};
static DialogLine _1263_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1264 - How many crates in warehouse in RBB (B:6 T:0 -> correct: 15)
 * DE: "IN DER RUSTY BAY, EIN / LAGERRAUM, WIEVIELE / KISTEN MUSST DU HALTEN IM ZAUM?"
 * ============================================================ */
static DialogLine _1264_b[] = {
    { 0x80, "EN RUSTY BAY, UN" },
    { 0x80, "ALMAC\xC9N, \xBF" "CU\xC1NTAS CAJAS" },
    { 0x80, "DEBES CONTROLAR SIN COMPASI\xD3N?" },
    { 0x81, "15" },
    { 0x82, "11" },
    { 0x83, "9" },
};
static DialogLine _1264_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1265 - Big fridge in RBB, what's in it? (B:7 T:0 -> correct: BLAUE EIER/blue eggs)
 * DE: "IN DER RUSTY BAY EIN / GROSSER KÜHLSCHRANK STEHT, / SAGT MIR, WAS IHR DARIN / SEHT!"
 * ============================================================ */
static DialogLine _1265_b[] = {
    { 0x80, "EN RUSTY BAY HAY UN" },
    { 0x80, "GRAN REFRIGERADOR HELADO," },
    { 0x80, "DECIDME, \xBF" "QU\xC9 HAB\xC9IS" },
    { 0x80, "\xA1" "ALL\xCD ENCONTRADO!" },
    { 0x81, "HUEVOS AZULES" },
    { 0x82, "CREMA ANTIARRUGAS DE GRUNTY" },
    { 0x83, "PLUMAS ROJAS" },
};
static DialogLine _1265_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1266 - What's found under the anchor in RBB (B:6 T:0 -> correct: EINEN DELPHIN/dolphin)
 * DE: "DIE RUSTY BUCKET IST EIN / TANKER, WAS FINDET MAN / UNTERHALB VOM ANKER?"
 * ============================================================ */
static DialogLine _1266_b[] = {
    { 0x80, "RUSTY BUCKET ES UN BUQUE" },
    { 0x80, "PETROLERO, \xBF" "QU\xC9 ENCUENTRAS" },
    { 0x80, "DEBAJO DEL ANCLA, EMBUSTERO?" },
    { 0x81, "UN DELF\xCD" "N" },
    { 0x82, "UN CANGREJO" },
    { 0x83, "UN CABALLITO DE MAR" },
};
static DialogLine _1266_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1267 - What can't be stopped in RBB (B:7 T:0 -> correct: DIE DREHENDEN ZAHNRÄDER)
 * DE: "SELBST WENN SICH DIE / ATOME SPALTEN, WAS IST / IN RUSTY BAY NICHT / AUFZUHALTEN?"
 * ============================================================ */
static DialogLine _1267_b[] = {
    { 0x80, "AUNQUE SE PARTAN LOS" },
    { 0x80, "\xC1TOMOS, \xBF" "QU\xC9 EN RUSTY" },
    { 0x80, "BAY NO SE PUEDE" },
    { 0x80, "PARAR, PALURDOS?" },
    { 0x81, "LOS ENGRANAJES GIRANDO" },
    { 0x82, "LOS TORNADOS VOLANDO" },
    { 0x83, "LAS H\xC9LICES GIRANDO" },
};
static DialogLine _1267_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1268 - Three statements about RBB, only one true (B:9 T:0)
 * DE: "DREI AUSSAGEN ÜBER RUSTY / BAY SIND DA, ABER NUR / EINE DAVON IST WAHR!"
 * ============================================================ */
static DialogLine _1268_b[] = {
    { 0x80, "TRES AFIRMACIONES SOBRE RUSTY" },
    { 0x80, "BAY HAY AQU\xCD, PERO SOLO" },
    { 0x80, "\xA1" "UNA ES VERDAD PARA TI!" },
    { 0x81, "HAY CUATRO" },
    { 0x81, "BOTES SALVAVIDAS" },
    { 0x82, "EL BARCO TIENE TRES" },
    { 0x82, "CHIMENEAS" },
    { 0x83, "EN LA SALA DE M\xC1QUINAS HAY" },
    { 0x83, "CUATRO ENGRANAJES" },
};
static DialogLine _1268_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x1269 - What did you NOT read on wall in RBB (B:6 T:0 -> correct: TOLL 7)
 * DE: "DU BIST IN RUSTY BAY / GEWESEN, WAS HAST DU AN / DER WAND NICHT GELESEN?"
 * ============================================================ */
static DialogLine _1269_b[] = {
    { 0x80, "EN RUSTY BAY YA HAS" },
    { 0x80, "ESTADO, \xBF" "QU\xC9 NO HAS" },
    { 0x80, "LE\xCD" "DO EN LA PARED, MALVADO?" },
    { 0x81, "TOLL 7" },
    { 0x82, "TOLL 6" },
    { 0x83, "TOLL 8" },
};
static DialogLine _1269_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126A - Foghorn code in RBB (B:5 T:0 -> correct: 312-111)
 * DE: "DU KANNST NUR EINMAL ZIELEN, / WELCHEN CODE MUSST DU AUF DEM NEBELHORN DER RUSTY BUCKET SPIELEN?"
 * ============================================================ */
static DialogLine _126a_b[] = {
    { 0x80, "SOLO PUEDES APUNTAR UNA VEZ," },
    { 0x80, "\xBF" "QU\xC9 C\xD3" "DIGO DEBES TOCAR EN LA SIRENA DE RUSTY BUCKET, INSENSATEZ?" },
    { 0x81, "312-111" },
    { 0x82, "213-111" },
    { 0x83, "321-123" },
};
static DialogLine _126a_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126B - Pattern on bed covers in captain's cabin in RBB (B:7 T:0 -> correct: ANKER/anchor)
 * DE: "DU KLEINE ZECKE, WELCHES / MUSTER SCHMÜCKT IN DER / KAPITÄNSKAJÜTE IN RUSTY / BAY DIE BETTDECKE?"
 * ============================================================ */
static DialogLine _126b_b[] = {
    { 0x80, "PEQUE\xD1" "A GARRAPATA, \xBF" "QU\xC9" },
    { 0x80, "DIBUJO ADORNA EN EL" },
    { 0x80, "CAMAROTE DEL CAPIT\xC1N EN" },
    { 0x80, "RUSTY BAY LA COLCHA?" },
    { 0x81, "ANCLA" },
    { 0x82, "H\xC9LICE" },
    { 0x83, "FLORES" },
};
static DialogLine _126b_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126C - What's on 3rd chimney of ship in RBB (B:8 T:0)
 * DE: "ICH MACHE KEINE WITZE, / WAS IST AUF DEM DRITTEN / SCHORNSTEIN DES SCHIFFES / AUF DER SPITZE?"
 * ============================================================ */
static DialogLine _126c_b[] = {
    { 0x80, "NO HAGO NING\xDA" "N CHISTE," },
    { 0x80, "\xBF" "QU\xC9 HAY EN LA TERCERA" },
    { 0x80, "CHIMENEA DEL BARCO" },
    { 0x80, "EN LA PUNTA, ALARMISTA?" },
    { 0x81, "NO HAY TERCERA" },
    { 0x81, "CHIMENEA" },
    { 0x82, "UNA PIEZA DE PUZLE" },
    { 0x83, "UNA FICHA DE MUMBO" },
};
static DialogLine _126c_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126D - Squirrel's hobby in CCW (B:5 T:0 -> correct: EICHELN FUTTERN/eat acorns)
 * DE: "DAS EICHHÖRNCHEN IM CLICK CLOCK WOOD, AUF DEM BAUM, / VON WELCHEM HOBBY LÄSST ES KAUM?"
 * ============================================================ */
static DialogLine _126d_b[] = {
    { 0x80, "LA ARDILLA EN CLICK CLOCK WOOD, EN EL \xC1RBOL POSADA," },
    { 0x80, "\xBF" "DE QU\xC9 PASATIEMPO NO SE SEPARA?" },
    { 0x81, "COMER BELLOTAS" },
    { 0x82, "DORMIR" },
    { 0x83, "TOCAR GUITARRA" },
};
static DialogLine _126d_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126E - What to plant in forest floor in CCW (B:7 T:0 -> correct: SAMENKÖRNER/seeds)
 * DE: "WAS PFLANZT DU IN DEN / BODEN IM WALD, DAMIT / EINE PFLANZE ERWÄCHST / BALD?"
 * ============================================================ */
static DialogLine _126e_b[] = {
    { 0x80, "\xBF" "QU\xC9 PLANTAS EN EL SUELO" },
    { 0x80, "DEL BOSQUE CON ESMERO," },
    { 0x80, "PARA QUE UNA PLANTA" },
    { 0x80, "CREZCA PRONTO Y ALTANERO?" },
    { 0x81, "HUEVOS AZULES" },
    { 0x82, "SEMILLAS" },
    { 0x83, "NUECES M\xC1GICAS" },
};
static DialogLine _126e_t[] = {
    { 0 , "" },
};

/* ============================================================
 * 0x126F - Eagle name in CCW (B:6 T:0 -> correct: EYRIE)
 * DE: "IM CLICK CLOCK WOOD, DER / ADLER, DER LAHME, WIE / WAR NOCHMAL SEIN NAME?"
 * ============================================================ */
static DialogLine _126f_b[] = {
    { 0x80, "EN CLICK CLOCK WOOD, EL" },
    { 0x80, "\xC1GUILA TORPE SIN FAMA," },
    { 0x80, "\xBF" "C\xD3MO ERA SU NOMBRE?" },
    { 0x81, "EYRIE" },
    { 0x82, "GOLDIE" },
    { 0x83, "BEERIE" },
};
static DialogLine _126f_t[] = {
    { 0 , "" },
};

/* ============================================================
 * FINAL BATTLE DIALOG - Grunty taunts (0x1159 - 0x1162)
 * Format: B:3, T:1 with portrait 0xB5 and CLOSE_ALT
 * ============================================================ */

/* 0x1159 - Grunty: "you underestimate the witch's power!" (B:3 T:1) */
static DialogLine _1159_b[] = {
    { GRUNTY, "\xBF" "QU\xC9 OS HAB\xC9IS IMAGINADO," },
    { GRUNTY, "\xA1" "SUBESTIM\xC1IS A LA BRUJA, INSENSATOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1159_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115A - Grunty: "hits like this, I take four before sleeping" (B:3 T:1) */
static DialogLine _115a_b[] = {
    { GRUNTY, "DE GOLPES COMO \xC9STE TAN LIGERO," },
    { GRUNTY, "\xA1" "ME COMO CUATRO ANTES DE DORMIR PRIMERO!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115a_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115B - Grunty: "This Jinjo, clear thing, has me in its power" (B:3 T:1) */
static DialogLine _115b_b[] = {
    { GRUNTY, "ESTE JINJO, COSA CLARA," },
    { GRUNTY, "\xA1" "ME HA GOLPEADO BIEN EN LA CARA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115b_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115C - Grunty: "First I send the Jinjo home, then your break is over" (B:3 T:1) */
static DialogLine _115c_b[] = {
    { GRUNTY, "PRIMERO MANDO AL JINJO A SU MORADA," },
    { GRUNTY, "\xA1" "LUEGO SE ACABA VUESTRA TEMPORADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115c_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115D - Grunty: "Who makes plans without me rarely laughs at the end" (B:3 T:1) */
static DialogLine _115d_b[] = {
    { GRUNTY, "QUIEN HACE PLANES SIN LA BRUJA CONTAR," },
    { GRUNTY, "\xA1" "RARA VEZ AL FINAL LOGRAR\xC1 TRIUNFAR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115d_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115E - Grunty: "With grief I'm already thin, I have this in store for you" (B:3 T:1) */
static DialogLine _115e_b[] = {
    { GRUNTY, "DE PENA ESTOY YA MUY DELGADA," },
    { GRUNTY, "\xA1" "PARA VOSOTROS TENGO ESTA EMBOSCADA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115e_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x115F - Grunty: "The Jinjo gave me the rest, I wish you the plague" (B:3 T:1) */
static DialogLine _115f_b[] = {
    { GRUNTY, "EL JINJO ME DIO EL GOLPE FINAL," },
    { GRUNTY, "\xA1" "OS DESEO UNA PESTE INFERNAL!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _115f_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x1160 - Grunty: "Before I get divided, I'll share this with you" (B:3 T:1) */
static DialogLine _1160_b[] = {
    { GRUNTY, "ANTES DE QUE ME HAGAN PEDAZOS," },
    { GRUNTY, "\xA1" "QUIERO COMPARTIR ESTO CON MIS BRAZOS!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1160_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x1161 - Grunty: "I go home to my hole, but one spell I still have" (B:3 T:1) */
static DialogLine _1161_b[] = {
    { GRUNTY, "ME VOY A CASA, A MI GUARIDA," },
    { GRUNTY, "\xA1" "PERO UN HECHIZO ME QUEDA DE PARTIDA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1161_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* 0x1162 - Grunty: "At home I sweep the floor, only this spell remains" (B:3 T:1) */
static DialogLine _1162_b[] = {
    { GRUNTY, "EN CASA BARRO EL SUELO CON PRIMOR," },
    { GRUNTY, "\xA1" "SOLO ME QUEDA ESTE HECHIZO, SE\xD1OR!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _1162_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x11C3 - Credits: Word Swapping (B:7 T:1)
 * Keep names exactly as-is
 * ============================================================ */
static DialogLine _11c3_b[] = {
    { CREDITS, "WORD SWOPPING" },
    { CREDITS, "CLAUDE 'CHIMPY' MOYSE" },
    { CREDITS, "MARKUS 'FLOTSAM' PFITZNER" },
    { CREDITS, "JOHN 'JU-JU' KRAFT" },
    { CREDITS, "DENIS 'SCABBY' DUCOMMUN" },
    { CREDITS, "JULIEN 'BOTTLES' BARDAKOFF" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _11c3_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * 0x11CA - Celebration scene (B:7 T:1)
 * Tooty(0xD6), Dingpot(0xD5), Bottles(0x83)
 * ============================================================ */
static DialogLine _11ca_b[] = {
    { TOOTY_ALT, "\xA1" "DATE PRISA! \xA1" "QUIERO IR A CASA, BANJO!" },
    { DINGPOT,   "UFFF... RESOPLO... \xA1" "NO PUEDO IR M\xC1S R\xC1PIDO!" },
    { TOOTY_ALT, "\xA1" "ALTO! HEMOS DEJADO UNA ZANAHORIA..." },
    { DINGPOT,   "\xA1" "ESO YA EST\xC1 ARREGLADO!" },
    { 0x83,      "\xA1" "EH, VOSOTROS DOS! \xA1" "VAMOS A CELEBRAR!" },
    { DINGPOT,   "\xA1" "EXACTO, AHORA EMPIEZA LA FIESTA!" },
    { DIALOG_CLOSE_ALT, "" },
};
static DialogLine _11ca_t[] = {
    { DIALOG_CLOSE_ALT, "" },
};

/* ============================================================
 * Dialog definition table
 * ============================================================ */
static DialogDef quiz2_defs[] = {
    /* Quiz questions - world specific (0x1213-0x126F) */
    QDIALOG(0x1213, _1213_b),
    QDIALOG(0x1214, _1214_b),
    QDIALOG(0x1215, _1215_b),
    QDIALOG(0x1216, _1216_b),
    QDIALOG(0x1217, _1217_b),
    QDIALOG(0x1218, _1218_b),
    QDIALOG(0x1219, _1219_b),
    QDIALOG(0x121A, _121a_b),
    QDIALOG(0x121B, _121b_b),
    QDIALOG(0x121C, _121c_b),
    QDIALOG(0x121D, _121d_b),
    QDIALOG(0x121E, _121e_b),
    QDIALOG(0x121F, _121f_b),
    QDIALOG(0x1220, _1220_b),
    QDIALOG(0x1221, _1221_b),
    QDIALOG(0x1222, _1222_b),
    QDIALOG(0x1223, _1223_b),
    QDIALOG(0x1224, _1224_b),
    QDIALOG(0x1225, _1225_b),
    QDIALOG(0x1226, _1226_b),
    QDIALOG(0x1227, _1227_b),
    QDIALOG(0x1228, _1228_b),
    QDIALOG(0x1229, _1229_b),
    QDIALOG(0x122A, _122a_b),
    QDIALOG(0x122B, _122b_b),
    QDIALOG(0x122C, _122c_b),
    QDIALOG(0x122D, _122d_b),
    QDIALOG(0x122E, _122e_b),
    QDIALOG(0x122F, _122f_b),
    QDIALOG(0x1230, _1230_b),
    QDIALOG(0x1231, _1231_b),
    QDIALOG(0x1232, _1232_b),
    QDIALOG(0x1233, _1233_b),
    QDIALOG(0x1234, _1234_b),
    QDIALOG(0x1235, _1235_b),
    QDIALOG(0x1236, _1236_b),
    QDIALOG(0x1237, _1237_b),
    QDIALOG(0x1238, _1238_b),
    QDIALOG(0x1239, _1239_b),
    QDIALOG(0x123A, _123a_b),
    QDIALOG(0x123B, _123b_b),
    QDIALOG(0x123C, _123c_b),
    QDIALOG(0x123D, _123d_b),
    QDIALOG(0x123E, _123e_b),
    QDIALOG(0x123F, _123f_b),
    QDIALOG(0x1240, _1240_b),
    QDIALOG(0x1241, _1241_b),
    QDIALOG(0x1242, _1242_b),
    QDIALOG(0x1243, _1243_b),
    QDIALOG(0x1244, _1244_b),
    QDIALOG(0x1245, _1245_b),
    QDIALOG(0x1246, _1246_b),
    QDIALOG(0x1247, _1247_b),
    QDIALOG(0x1248, _1248_b),
    QDIALOG(0x1249, _1249_b),
    QDIALOG(0x124A, _124a_b),
    QDIALOG(0x124B, _124b_b),
    QDIALOG(0x124C, _124c_b),
    QDIALOG(0x124D, _124d_b),
    QDIALOG(0x124E, _124e_b),
    QDIALOG(0x124F, _124f_b),
    QDIALOG(0x1250, _1250_b),
    QDIALOG(0x1251, _1251_b),
    QDIALOG(0x1252, _1252_b),
    QDIALOG(0x1253, _1253_b),
    QDIALOG(0x1254, _1254_b),
    QDIALOG(0x1255, _1255_b),
    QDIALOG(0x1256, _1256_b),
    QDIALOG(0x1257, _1257_b),
    QDIALOG(0x1258, _1258_b),
    QDIALOG(0x1259, _1259_b),
    QDIALOG(0x125A, _125a_b),
    QDIALOG(0x125B, _125b_b),
    QDIALOG(0x125C, _125c_b),
    QDIALOG(0x125D, _125d_b),
    QDIALOG(0x125E, _125e_b),
    QDIALOG(0x125F, _125f_b),
    QDIALOG(0x1260, _1260_b),
    QDIALOG(0x1261, _1261_b),
    QDIALOG(0x1262, _1262_b),
    QDIALOG(0x1263, _1263_b),
    QDIALOG(0x1264, _1264_b),
    QDIALOG(0x1265, _1265_b),
    QDIALOG(0x1266, _1266_b),
    QDIALOG(0x1267, _1267_b),
    QDIALOG(0x1268, _1268_b),
    QDIALOG(0x1269, _1269_b),
    QDIALOG(0x126A, _126a_b),
    QDIALOG(0x126B, _126b_b),
    QDIALOG(0x126C, _126c_b),
    QDIALOG(0x126D, _126d_b),
    QDIALOG(0x126E, _126e_b),
    QDIALOG(0x126F, _126f_b),
    /* Final battle taunts (0x1159-0x1162) */
    DIALOG(0x1159, _1159_b, _1159_t),
    DIALOG(0x115A, _115a_b, _115a_t),
    DIALOG(0x115B, _115b_b, _115b_t),
    DIALOG(0x115C, _115c_b, _115c_t),
    DIALOG(0x115D, _115d_b, _115d_t),
    DIALOG(0x115E, _115e_b, _115e_t),
    DIALOG(0x115F, _115f_b, _115f_t),
    DIALOG(0x1160, _1160_b, _1160_t),
    DIALOG(0x1161, _1161_b, _1161_t),
    DIALOG(0x1162, _1162_b, _1162_t),
    /* Credits and celebration */
    DIALOG(0x11C3, _11c3_b, _11c3_t),
    DIALOG(0x11CA, _11ca_b, _11ca_t),
};

DialogDefTable quiz2_table = {
    quiz2_defs,
    sizeof(quiz2_defs) / sizeof(quiz2_defs[0])
};
