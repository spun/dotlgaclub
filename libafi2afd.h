typedef char tVector[100][3];
//En el primer campo almacena la renombnracion de los estados 
typedef int tVectEstados[100][11];

//El alfabeto de entrada del AFI tendrá como mucho 5 simbolos
typedef char tVectCaracteres[5];


bool ProcesarLetra(char letra);
void AlmacenaLetra(char l, bool e, int &lin, int &fil, tVector vOrig);
void BuscarInicios(tVector Orig, tVectEstados Estados, int lineas);
void Buscar(tVector Orig, tVectEstados Estados, int lineas,tVectCaracteres VectCaract, int numCaract);
bool BuscarRepetidos (tVectEstados Estados);

void CaracteresAFI(tVector Orig, int lineas, tVectCaracteres Caracteres, int &numCaracteres);

















