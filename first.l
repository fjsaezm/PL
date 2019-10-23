%{
#include<stdio.h>
#include<string.h>
#include "tokens.h"
FILE *source,*destiny;
char sourceName[20];

%}

letra [a-zA-Z]
digito [0-9]
entero {digito}+
real {entero}.{entero}

%%


letra [a-zA-Z]
digito [0-9]
entero {digito}+
real {entero}.{entero}

{op_unario}    [&^!]
op_binario   [\* | /]
tipo_basico  ["entero"|"booleano"|"caracter"|"real"]
cte          ["verdadero"|"falso"|\'[^\']\' | [0-9]+.[0-9]+]

"principal"   return PRINCIPAL;
"{"           return INI_BLOQUE;
"}"           return FIN_BLOQUE;
"("           return INI_EXPR;
")"           return FIN_EXPR;
"["           return INI_TAM;
"]"           return FIN_TAM;
","           return COMA;
";"           return PTCOMA;
{op_binario}    return OP_BINARIO;
{tipo_basico}   return TIPO_BASICO;
"si"          return SI;
"si_no"       return SI_NO;
"ini_var"     return INI_VAR;
"fin_var"     return FIN_VAR;
"retorno"     return RETORNO;
{op_unario}   return OP_UNARIO;
"="           return IGUAL;
"entrada>>"   return ENTRADA;
"salida<<"    return SALIDA;
\'[^\']*'     return CADENA;
"+"           return SUMA;
"-"           return RESTA;
{cte}           return CONSTANTE;
[0-9]*        return CTE_ENTERA;


. {
printf(" \nError Léxico en Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}

%%


int main(int argc,char **argv)
{
if(argc < 2){

printf("\n Error. No se ha introducido el fichero. \n %s fichero_fuente\n",argv[0]);
exit(-1);
}

yyin = fopen(argv[1],"rt");
if (yyin == NULL){
printf( "El fichero %s no se puede abrir \n", argv[1]);
exit(-2);
}

destiny=fopen("functions.txt","w");

int parser = yylex();
while (parser != 0) {

printf("_%d_ ", parser);
//printf("%s ", yytext());
parser = yylex();

}
return(0);
}
