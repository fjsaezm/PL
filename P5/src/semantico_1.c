#include "semantico.h"

//Variables necesarias
inTS ts[MAX_IN];
int line = 1;
long int LIMIT = 0;
int decVar = 0;
int decParam = 0;
int decFunction = 0;
int decSal=0;//CI
int decEnt=0;//CI
int subProg = 0;
tData globalType = NA;
int nParam = 0;
int currentFunction = -1;
int aux = 0;

// Devuelve si el atributo es array o no
int isArray(attrs e){

    return (e.nDim!=0);
}

// Devuelve si los dos posibles arrays que recibe tienen el mismo tamaño
int equalSize(attrs e1, attrs e2){

    return (e1.nDim == e2.nDim &&
        e1.tDim1 == e2.tDim1 &&
        e1.tDim2 == e2.tDim2);

}

int compatibleSize(attrs e1, attrs e2){

    return (e1.nDim == e2.nDim &&
        e1.tDim2 == e2.tDim1);

}

// Guarda el type de la variable
int setType(attrs value){

    globalType = value.type;

}

///////////////////////////////////////////////////////////////////////////////
// Tabla de Símbolos
//

// Inserta una in en la tabla de símbolos
int tsAddIn(inTS in){

    // Si se tienen más entradas de las que puede alojar la tabla de símbolos
    // dará un error, si no, se inserta
	if(LIMIT < MAX_IN) {

		ts[LIMIT].in=in.in;
		ts[LIMIT].lex=in.lex;
		ts[LIMIT].type=in.type;
		ts[LIMIT].nParam=in.nParam;
		ts[LIMIT].nDim=in.nDim;
		ts[LIMIT].tDim1=in.tDim1;
		ts[LIMIT].tDim2=in.tDim2;

        // Se aumenta el contador de entradas
		LIMIT++;

        // Se muestra la tabla de símbolos por pantalla
		//printTS();

		return 1;

	} else {

		printf("Error semántico(%d): Desbordamiento de la pila", yylineno);

		return 0;

	}

}

// Elimina una in de la tabla de símbolos
int tsDelIn(){

    // Si la tabla de símbolos tiene alguna in puede eliminar la última
    if(LIMIT > 0){

		LIMIT--;
		return 1;

	}else{

		printf("Error semántico(%d): Tabla de símbolos vacía", yylineno);
		return 0;

	}

}

// Elimina las entradas de la tabla de símbolos hasta la mark de tope
void tsCleanIn(){

  // Quitar todo lo del bloque
  while(ts[LIMIT-1].in != MARK && LIMIT > 0){
		LIMIT--;
	}
  // Quitar la marca si es que la hubiese
	if (ts[LIMIT-1].in == MARK && LIMIT > 0) {
		LIMIT--;
	}



}

// Busca una entrada según el id
int tsSearchId(attrs e){

    int i = LIMIT - 1;
	int found = 0;

	while (i > 0 && !found /*&& ts[i].in != MARK*/) {
		if (ts[i].in == VAR && strcmp(e.lex, ts[i].lex) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		//printf("Error semántico(%d): Ident not declared: %s\n", yylineno, e.lex);
		return -1;
	} else {
		return i;
	}

}

// Busca una in según el nombre
int tsSearchName(attrs e){

    int i = LIMIT - 1;
	int found = 0;


	while (i > 0 && !found /*&& ts[i].in != MARK*/) {
		if (ts[i].in == FUNCTION && strcmp(e.lex, ts[i].lex) == 0) {
			found = 1;
		} else{
			i--;
		}
	}

	if(!found) {
		printf("Error semántico(%d): Ident no declarado: %s\n", yylineno, e.lex);
		return -1;
	} else {
		return i;
	}

}

// Añade un id
void tsAddId(attrs e){

    // Para añadir un id a la pila no se puede haber llegado al tope,
    // el id no puede existir y se deben estar declarando variables
	int j = LIMIT-1;
	int found = 0;

	if(j >= 0 && decVar == 1){
		// Se obtiene la posición de la mark del bloque
		while((ts[j].in != MARK) && (j >= 0) && !found){

			if(strcmp(ts[j].lex, e.lex) != 0){

				j--;

			} else{

				found = 1;
				printf("Error semántico(%d): el identificador ya existe: %s\n", yylineno, e.lex);

	 		}

		}

		// Si no se ha encontrado significa que no existe, por lo que se añade
        // a la pila
		if(!found) {
			inTS newIn;
			newIn.in = VAR;
			newIn.lex = e.lex;
			newIn.type = globalType;
			newIn.nParam = 0;
			newIn.nDim=e.nDim;
			newIn.tDim1=e.tDim1;
			newIn.tDim2=e.tDim2;
			tsAddIn(newIn);

		}

	}
}

// Añade una mark de tope
void tsAddMark(){
    inTS inInitScope;

	inInitScope.in = MARK;
	inInitScope.lex = "{";
	inInitScope.type = NA;
	inInitScope.nParam = 0;
	inInitScope.nDim = 0;
	inInitScope.tDim1 = 0;
	inInitScope.tDim2 = 0;

	tsAddIn(inInitScope);

    // Se añaden a la tabla de símbolos los parámetros de la función como las
    // variables locales de ese bloque
	if(subProg == 1){

		int j = LIMIT - 2, mark = 0, funct = 0;

		while(j > 0 && ts[j].in == FORM){

			/*printf("\n\n");
			printIn(j);
			printf("\n\n");*/

			if(ts[j].in == FORM) {

				inTS newIn;
				newIn.in = VAR;
				newIn.lex = ts[j].lex;
				newIn.type = ts[j].type;
				newIn.nParam = ts[j].nParam;
				newIn.nDim = ts[j].nDim;
				newIn.tDim1 = ts[j].tDim1;
				newIn.tDim2 = ts[j].tDim2;
				tsAddIn(newIn);

			}

			j--;

		}

	}

}

// Añade una in de subprograma
void tsAddSubprog(attrs e){

  inTS inSubProg;
	inSubProg.in = FUNCTION;
	inSubProg.lex = e.lex;
	inSubProg.nParam = 0;
	inSubProg.nDim = 0;
	inSubProg.tDim1 = 0;
	inSubProg.tDim2 = 0;
	inSubProg.type = e.type;

	currentFunction = LIMIT;
	tsAddIn(inSubProg);

}

// Añade una in de param formal
void tsAddParam(attrs e){

    int j = LIMIT - 1, found = 0;

	while((j != currentFunction)  && (!found) ){

		if(strcmp(ts[j].lex, e.lex) != 0) {

			j--;

		} else{

			found = 1;
			printf("Error semántico(%d): El parámetro ya existe: %s\n", yylineno, e.lex);

        }

	}

	if(!found) {

		inTS newIn;
		newIn.in = FORM;
		newIn.lex = e.lex;
		newIn.type = globalType;
		newIn.nParam = 0;
		newIn.nDim = e.nDim;
		newIn.tDim1 = e.tDim1;
		newIn.tDim2 = e.tDim2;
		tsAddIn(newIn);

	}

}

// Actualiza el número de parámetros de la función
void tsUpdateNparam(attrs e){

    ts[currentFunction].nParam = nParam;
	ts[currentFunction].nDim=e.nDim;
	ts[currentFunction].tDim1=e.tDim1;
	ts[currentFunction].tDim2=e.tDim2;

}

//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// Analizador Semántico
//

// Devuelve la in que sea función más cercana
int tsGetNextFunction(){

 
	

  int i = LIMIT - 1 - decIF;

	int found = 0;

	while (i > 0 && !found) {

		if (ts[i].in == FUNCTION && ts[i+ts[i].nParam + 1].in == MARK && i+ts[i].nParam + 1 < LIMIT -1 - decIF) {
			found = 1;
		} else {
			i--;
		}

	}

	if(!found) {
		return -1;
	} else {
		return i;
	}

}

// Comprueba si el type de la expresión coincide con lo que devuelve la función
void tsCheckReturn(attrs expr, attrs* res){

    int index = tsGetNextFunction();
    //printIn(index);


	/*int topeTMP = LIMIT;
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}*/


	if (index > -1) {

		if (expr.type != ts[index].type) {
			printf("Error semántico(%d): El tipo del retorno no coincide con el de la función.\n", yylineno);
			printf("La expresión es %s y su tipo es %d\n", expr.lex, expr.type);
			printf("La función del retorno es %s y su tipo es %d\n", ts[index].lex,ts[index].type);
			return;
		}

		attrs tmp;
		tmp.nDim = ts[index].nDim;
		tmp.tDim1 = ts[index].tDim1;
		tmp.tDim2 = ts[index].tDim2;

		if (!equalSize(expr,tmp)) {
			printf("Error semántico(%d): La expresión de retorno tiene dimensión incorrecta.\n", yylineno);
			return;
		}

		res->type = expr.type;
		res->nDim = expr.nDim;
		res->tDim1 = expr.tDim1;
		res->tDim2 = expr.tDim2;

	} else {

		printf("Error semántico(%d): res no declarado en la función.\n", yylineno);
		return;

	}

}

// Devuelve el identificar
void tsGetId(attrs id, attrs* res){

    int index = tsSearchId(id);

	if(index==-1) {
        if(ts[index].in != FUNCTION)
		      printf("\nError semántico(%d): Id no encontrado %s.\n", yylineno, id.lex);
	} else {

		res->lex = strdup(ts[index].lex);
		res->type = ts[index].type;
		res->nDim = ts[index].nDim;
		res->tDim1 = ts[index].tDim1;
		res->tDim2 = ts[index].tDim2;

 	}

}

// Realiza la comprobación de la operación !, &, ~
void tsOpUnary(attrs op, attrs o, attrs* res){

    if (o.type != BOOLEANO || isArray(o)) {
		printf("Error semántico(%d): el operador espera una expresión lógica.", yylineno);
	}

	char * sent;
    	char * temp2=temporal();
  	sent = (char *) malloc(1000);
	sprintf(sent,"(%s%s)",op.lex,o.lex);

	res->lex = sent;
	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación +, -
void tsOpSign(attrs op, attrs o, attrs* res){

    if ((o.type != REAL && o.type != ENTERO) || isArray(o)) {
		printf("Error semántico(%d): El operador espera una expresión entera o real.", yylineno);
	}

	char * sent;
    	char * temp2=temporal();
  	sent = (char *) malloc(1000);
	sprintf(sent,"(%s%s)",op.lex,o.lex);

	res->lex = sent;
	res->type = o.type;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación +, - binaria
void tsOpSignBin(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
	    printf("Error semántico(%d): Las expresiones tienen que tener el mismo tipo.", yylineno);
  		return;
  	}

	if (o1.type != ENTERO && o1.type != REAL) {
		printf("Error semántico%d): Tipo inválido en op. Ambos deben ser iguales.", yylineno);
		return;
	}

	if (isArray(o1) && isArray(o2)){

		if(equalSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		} else {

            printf("Error semántico(%d): El tamaño de los arrays tiene que ser el mismo", yylineno);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Error semántico(%d): Operación no permitida.", yylineno);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}

}

// Realiza la comprobación de la operación *, /
void tsOpMul(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Error semántico(%d): Las expresiones deben tener el mismo tipo.", yylineno);
		return;
	}

	if (o1.type != ENTERO && o1.type != REAL) {
		printf("Error semántico%d): Tipo inválido en op. Ambos deben ser el mismo.", yylineno);
		return;
	}

	if (isArray(o1) && isArray(o2)){

		if(compatibleSize(o1,o2)){

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o2.tDim2;

		} else {

            printf("Error semántico(%d): Los tamaños del array tienen que ser el mismo", yylineno);
			return;

		}

	} else {

		if (isArray(o1) && !isArray(o2)) {

			res->type = o1.type;
			res->nDim = o1.nDim;
			res->tDim1 = o1.tDim1;
			res->tDim2 = o1.tDim2;

		}

		if (!isArray(o1) && isArray(o2)){

			if (strcmp(op.lex,"-")==0){

				printf("Error semántico(%d): Opeeración no permitida.", yylineno);
				return;

			} else {

				res->type = o2.type;
				res->nDim = o2.nDim;
				res->tDim1 = o2.tDim1;
				res->tDim2 = o2.tDim2;

			}

		}

	}

}

// Realiza la comprobación de la operación &&
void tsOpAnd(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Error semántico (%d): Las expresiones tienen que ser del mismo tipo.", yylineno);
		return;
	}
	if (o1.type != BOOLEANO || isArray(o1) || isArray(o2)) {
		printf("Error semántico(%d):Esperaba BOOLEANO", yylineno);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación ||
void tsOpOr(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Error semántico (%d): Las expresiones tienen que ser del mismo tipo.", yylineno);
		return;
	}
	if (o1.type != BOOLEANO || isArray(o1) || isArray(o2)) {
		printf("Error semántico(%d):Esperaba BOOLEANO", yylineno);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación ^
void tsOpXor(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Error semántico (%d): Las expresiones tienen que ser del mismo tipo.", yylineno);
		return;
	}
	if (o1.type != BOOLEANO || isArray(o1) || isArray(o2)) {
		printf("Error semántico(%d):Esperaba BOOLEANO", yylineno);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación ==, !=
void tsOpEqual(attrs o1, attrs op, attrs o2, attrs* res){

    if (o1.type != o2.type) {
		printf("Error semántico (%d): Las expresiones tienen que ser del mismo tipo..", yylineno);
		return;
	}
	if (isArray(o1) || isArray(o2)) {
		printf("Error semántico(%d):Esperaba ENTERO o REAL.", yylineno);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}

// Realiza la comprobación de la operación <, >, <=, >=, <>
void tsOpRel(attrs o1,attrs o ,attrs o2, attrs* res){


    if (o1.type != o2.type) {

      //printTS();
      //printf("o1type =%s\n",o1.lex);
      //printf("otype =%s\n",o.lex);
      //printf("o2type =%s\n",o2.lex);

		printf("Error semántico (%d): Las expresiones tienen que ser del mismo tipo. Los tipos son %d y %d", yylineno,o1.type,o2.type);
		return;
	}
	if ((o1.type != ENTERO && o1.type != REAL) || isArray(o1) || isArray(o2)) {
		printf("Error semántico(%d):Esperaba ENTERO or REAL.", yylineno);
		return;
	}

	res->type = BOOLEANO;
	res->nDim = 0;
	res->tDim1 = 0;
	res->tDim2 = 0;

}



// Realiza la comprobación de la llamada a una función
void tsFunctionCall(attrs id, attrs* res){

    int index = tsSearchName(id);

	if(index==-1) {

		currentFunction = -1;

		printf("\nError semántico(%d)): Función: Id no encontrado %s.\n", yylineno, id.lex);

    } else {

		if (nParam != ts[index].nParam) {
      //printf("nParam = %d, ts[index].nParam=%d",nParam, ts[index].nParam);
			printf("Error semántico(%d): Número de parámetros no válido.\n", yylineno);
		} else {
			currentFunction = index;
			res->lex = strdup(ts[index].lex);
			res->type = ts[index].type;
			res->nDim = ts[index].nDim;
			res->tDim1 = ts[index].tDim1;
			res->tDim2 = ts[index].tDim2;

		}

	}

}

// Realiza la comprobación de cada parámetro de una función
void tsCheckParam(attrs funID ,attrs param, int checkParam){

  int f = tsSearchName(funID);
  int posParam = (f ) + (checkParam);
  //printf("\n%d\t\n",posParam);
	int error = checkParam;

	if (param.type != ts[posParam].type) {
		printf("Error semántico(%d): Tipo de parámetro (%d) no válido.\n", yylineno, error);
		return;
	}

	if (param.nDim != ts[posParam].nDim || param.tDim1 != ts[posParam].tDim1  || param.tDim2 != ts[posParam].tDim2) {
		printf("Error semántico(%d): Tamaño parámetro (%d) no válido.\n", yylineno, error);
		return;
	}

}

//
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Visualización
//

// Muestra una in de la tabla de símbolos
void printIn(int row){

    inTS e = ts[row];
	printf("\n\nTipo Entrada: %d\nLexema: %s\nTipo Dato: %d\nNum Parametros: %d\nDimensiones[i][j]: %d[%d][%d]\n",
		e.in, e.lex, e.type, e.nParam, e.nDim, e.tDim1, e.tDim2);

}


// Muestra la tabla de símbolos
void printTS(){

    int j = 0;
	char *t, *e;

	printf("--------------------------------\n");
	while(j <= LIMIT-1) {
		if(ts[j].in == 0) { e = "MARK"; }
		if(ts[j].in == 1) { e = "FUNCTION"; }
		if(ts[j].in == 2) { e = "VAR"; }
		if(ts[j].in == 3) { e = "FORM"; }

		if(ts[j].type == 0) { t = "NO_ASIG"; }
		if(ts[j].type == 1) { t = "ENTERO"; }
		if(ts[j].type == 2) { t = "REAL"; }
		if(ts[j].type == 3) { t = "CARACTER"; }
		if(ts[j].type == 4) { t = "BOOLEANO"; }
		if(ts[j].type == 5) { t = "STRING"; }
		if(ts[j].type == 6) { t = "MATRIZ"; }
		if(ts[j].type == 7) { t = "NA"; }
		printf("----ELEMENTO %d-----------------\n", j);
		printf("-Entrada: %-12s", e);
		printf("-Lexema: %-12s", ts[j].lex);
		printf("-type: %-10s", t);
		printf("-nParam: %-4d", ts[j].nParam);
		printf("-nDim: %-4d", ts[j].nDim);
		printf("-tDim1: %-4d", ts[j].tDim1);
		printf("-tDim2: %-4d\n", ts[j].tDim2);
		j++;
	}
	printf("--------------------------------\n");

}

// Muestra un atributo recibido
void printAttr(attrs e, char *msg){

    char *t;

	if(e.type == 0) { t = "NO_ASIG"; }
	if(e.type == 1) { t = "ENTERO"; }
	if(e.type == 2) { t = "REAL"; }
	if(e.type == 3) { t = "CARACTER"; }
	if(e.type == 4) { t = "BOOLEANO"; }
	if(e.type == 5) { t = "STRING"; }
	if(e.type == 6) { t = "MATRIZ"; }
	if(e.type == 7) { t = "NA"; }
	printf("------%s-------------------------\n", msg);
	printf("-Atributos: %-4d", e.attr);
	printf("-Lexema: %-12s", e.lex);
	printf("-type: %-10s", t);
	printf("-nDim: %-4d", e.nDim);
	printf("-tDim1: %-4d", e.tDim1);
	printf("-tDim2: %-4d\n", e.tDim2);
	printf("-------------------------------\n");

}

/********************************************
**************generacion codigo**************
*********************************************/

FILE * file;

tData tipoTMP = 0;
tData tipoArray = 0;

inTS TF[MAX_IN];

int isMain = 1;
int isAsig = 0;
int temp = 0;
int tempUsado = 0;
int etiq = 0;
int varPrinc=0;
int decIF = 0,decElse=0;

char * temporal(){
	char * cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "temp%d",temp);
	temp++;
	return cadena;
}
char * etiqueta(){
	char * cadena;
	cadena = (char *) malloc(20);
	sprintf(cadena, "etiqueta_%d",etiq);
	etiq++;
	return cadena;
}

int isOpRel(attrs op){
	int loes = 0;

	//fputs(sent,file);
	if(!strcmp(op.lex, ">"))
		loes=1;
	if(!strcmp(op.lex, "<"))
		loes=1;
	if(!strcmp(op.lex, ">="))
		loes=1;
	if(!strcmp(op.lex, "<="))
		loes=1;
	if(!strcmp(op.lex, "||"))
		loes=1;
	if(!strcmp(op.lex, "&&"))
		loes=1;
	if(!strcmp(op.lex, "^"))
		loes=1;
	if(!strcmp(op.lex, "!="))
		loes=1;

	return loes;
}

void generaExpresion(attrs a, attrs op, attrs b, attrs* res){

  	char * sent;
   	 char * temp2=temporal();
  	sent = (char *) malloc(1000);

	/*sprintf(sent,"\nEl operador es (%s)\n",op.lex);
	fputs(sent,file);
	free(sent);*/

	if (isAsig == 1){
		sprintf(sent,"{ //Comienzo de traducción de la asignación\n");
		isAsig=2;
	}
	if(isOpRel(op)){ //La expresión es booleana
    		sprintf(sent,"%sint %s;\n",sent,temp2);
	}
	else{
  		if(a.type == ENTERO){
  			sprintf(sent,"%sint %s;\n",sent,temp2);
  		}
  		else if(a.type == REAL){
  			sprintf(sent,"%sfloat %s;\n",sent,temp2);
  		}
  		else if(a.type == CARACTER){
  			sprintf(sent,"%schar %s;\n",sent,temp2);
  		}
  		else if(a.type == BOOLEANO){
  			/*LIMIT++;
  			ts[LIMIT].in = descriptor;
  			ts[LIMIT].descriptor.EtiquetaSalida = etiqueta();*/
    			sprintf(sent,"%sint %s;\n",sent,temp2);
  		}
	}
  	/*if(a.nDim == 1){
  		sprintf(sent,"%s[%d]",sent, a.tDim1);
  	}
  	if(a.nDim == 2){
  		sprintf(sent,"%s[%d][%d]",sent, a.tDim1, a.tDim2);
  	}*/
  	sprintf(sent,"%s%s = %s%s%s;\n",sent,temp2,a.lex,op.lex,b.lex);
    	res->lex=temp2;
  	fputs(sent,file);
  	free(sent);
}

void generaAsignacion(attrs a, attrs op, attrs b){

  	char * sent;
  	sent = (char *) malloc(1000);
	if(isAsig == 2){
    		sprintf(sent,"%s = %s;\n} //Fin de traducción de la asignación\n",a.lex,b.lex);
		isAsig = 0;
	}
	else sprintf(sent,"%s = %s;\n",a.lex,b.lex);
  	fputs(sent,file);
  	free(sent);
}

void generaIf(attrs a){
	int topeTMP = LIMIT;
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}
	char * sent;
  	sent = (char *) malloc(1000);
    	sprintf(sent,"if (!%s) goto %s;\n",a.lex,TF[topeTMP].descriptor.EtiquetaElse);
  	fputs(sent,file);
  	free(sent);
}

// Abre un fichero para crear el código intermedio
void generaFich(){

    file = fopen("generated.c","w");

	fputs("#include <stdio.h>\n",file);
	//fputs("\nint main(int argc, char *argv[] )",file);

}

// Cerrar fichero
void closeInter(){

    fclose(file);

}


void generaDecVar(attrs a){
	char * sent;
	sent = (char *) malloc(1000);
	if(tipoTMP == ENTERO){
		sprintf(sent,"int %s",a.lex);
	}
	else if(tipoTMP == REAL){
		sprintf(sent,"float %s",a.lex);
	}
	else if(tipoTMP == CARACTER){
		sprintf(sent,"char %s",a.lex);
	}
	else if(tipoTMP == BOOLEANO){
		/*LIMIT++;
		ts[LIMIT].in = descriptor;
		ts[LIMIT].descriptor.EtiquetaSalida = etiqueta();*/
		sprintf(sent,"int %s",a.lex);
	}
	if(a.nDim == 1){
		sprintf(sent,"%s[%d]",sent, a.tDim1);
	}
	if(a.nDim == 2){
		sprintf(sent,"%s[%d][%d]",sent, a.tDim1, a.tDim2);
	}
	sprintf(sent,"%s;\n",sent);
	fputs(sent,file);
	free(sent);
}
void genera(int type,attrs dest,attrs a, attrs op, attrs b){
	char * sent;
	sent = (char *) malloc(200);
	if(type == 1){

		sprintf(sent,"int %s;\n%s = %s %s %s;\n",dest.lex,dest.lex,a.lex,op.lex,b.lex);
		fputs(sent,file);
	}
	else if(type == 4 ){
		sprintf(sent,"%s %s %s %s\n",dest.lex,a.lex,op.lex,b.lex);
		fputs(sent,file);
	}
	free(sent);
}
/*	1. else y salida
	2. entrada y salida
*/
void insertaDesc(int type){
	LIMIT++;
	TF[LIMIT].in = descriptor;
	if(type == 1){
		TF[LIMIT].descriptor.EtiquetaElse = etiqueta();
		TF[LIMIT].descriptor.EtiquetaSalida = etiqueta();
	}else if(type == 2){
		TF[LIMIT].descriptor.EtiquetaEntrada = etiqueta();
		TF[LIMIT].descriptor.EtiquetaSalida = etiqueta();
	}
}
void eliminaDesc(){
	LIMIT--;
}
/*	1.if con else
	2.while
	3.if sin else
*/
void insertaCond(int type){

	char * cadena, *sent;
	int topeTMP = LIMIT;
	cadena = (char *) malloc(20);
	sent = (char *) malloc(150);


	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}
	if(type == 1){
		sprintf(cadena, "temp%d",temp-1);
		TF[topeTMP].lex = (char *) malloc(50);
		strcpy(TF[topeTMP].lex,cadena);
		sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaElse);
	}
	else if(type == 2){
				sprintf(cadena, "temp%d",temp-1);
				sprintf(sent,"if(!%s) goto %s;\n",cadena,TF[topeTMP].descriptor.EtiquetaSalida);
			}

	fputs(sent,file);
	free(sent);
	free(cadena);
}
void insertaEtiqElse(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);

	while(TF[topeTMP].in != descriptor && topeTMP>0){
		topeTMP--;
	}
	//if(decElse == 1){
		sprintf(sent,"goto %s;\n%s:\n",TF[topeTMP].descriptor.EtiquetaSalida,TF[topeTMP].descriptor.EtiquetaElse);
	/*}
	else{
		sprintf(sent,"%s:",TF[topeTMP].descriptor.EtiquetaElse);
		}*/
	fputs(sent,file);
  //printf("FUERA_ELSE\n" );
}

void insertaEtiqSalida(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);
  //printf("\nAntes\n");
	while(TF[topeTMP].in != descriptor && topeTMP>0){
    //printf("\nDentro while %d\n", topeTMP);
		topeTMP--;
	}

	sprintf(sent,"%s:\n",TF[topeTMP].descriptor.EtiquetaSalida);

	fputs(sent,file);
  //printf("FUERA\n" );
}
void insertaEtiqEntrada(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}

	sprintf(sent,"%s:\n",TF[topeTMP].descriptor.EtiquetaEntrada);
	fputs(sent,file);
}
void insertaGotoEntrada(){
	int topeTMP = LIMIT;
	char * sent;
	sent = (char *) malloc(200);
	while(TF[topeTMP].in != descriptor){
		topeTMP--;
	}

	sprintf(sent,"goto %s;\n",TF[topeTMP].descriptor.EtiquetaEntrada);
	fputs(sent,file);
}
void generaEntSal(int type,attrs a){

	if(type == 1){
		fputs("scanf(\"%",file);
		if(a.type == ENTERO) fputs("d",file);
		if(a.type == REAL) fputs("f",file);
		if(a.type == CARACTER) fputs("c",file);
		if(a.type == BOOLEANO) fputs("d",file);
		fputs("\",&",file);
		fputs(a.lex,file);
		fputs(");",file);
		fputs("\n",file);
	}
	if(type == 2){
		if(a.type != NA){
			fputs("printf(\"%",file);
			if(a.type == ENTERO) fputs("d",file);
			else if(a.type == REAL) fputs("f",file);
			else if(a.type == CARACTER) fputs("c",file);
			else if(a.type == BOOLEANO) fputs("d",file);
			fputs("\",",file);
			fputs(a.lex,file);
			fputs(");",file);
		}else {
			fputs("printf(",file);
			fputs(a.lex,file);
			fputs(");",file);
		}
		fputs("\n",file);
	}
	if(type == 3){
		fputs("printf(",file);
		fputs(a.lex,file);
		fputs(");\n",file);
	}

}
