%{
#include <stdio.h>
  %}



%%

"principal"   printf("PRINCIPAL")
"{"           printf("INI_BLOQUE")
"}"           printf("FIN_BLOQUE")
%PRINCIPAL     principal
INI_BLOQUE    \{
FIN_BLOQUE    \}
INI_EXPR      \(
INI_TAM       \[
FIN_TAM       \]
FIN_EXPR      \)
COMA          [","]
PTCOMA        [";"]
OP_BINARIO    [ * | == | != | >= | <= | > | < | && ]
TIPO_BASICO   ["entero" | "booleano" | "caracter" | "real" ]
SI            ["si"]
SI_NO         ["si_no"]
INI_VAR       ["ini_var"]
FIN_VAR       ["fin_var"]
FUNCION       ["funcion"]
RETORNO       ["retorno"]
HACER         ["hacer"]
HASTA         ["hasta"]
OP_UNARIO     [ & | !]
IGUAL         ["="]
CONST_ENT     
CONST_R
CONST_CAR
ENTRADA
SALIDA
CADENA

%%


int main(int argc,char *argv[])
{

    if (argc == 2){
       yyin = fopen (argv[1], "rt");
       if (yyin == NULL){
       printf( "El fichero %s no se puede abrir \n", argv[1]);
       exit(-1);
       }
    }
    else
       yyin = stdin;

    destiny =fopen("parsed.txt","w");

    yylex();
    return(0);
}


int yywrap(void) {
return 1;
}

int main(void) {
yylex();
return 0;
}
