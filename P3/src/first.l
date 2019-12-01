%{
// descomentar para hacer léxico
#define LEXICO 0
#include "y.tab.h"  // Códigos de tokens generados por YACC

FILE *source,*destiny;
char sourceName[20];

%}

%option yylineno
%option noyywrap

sumaresta [+-]
letra [a-zA-Z]
alfanumerico {letra}[a-zA-Z0-9]*
digito [0-9]
entero {digito}+
real {entero}.{entero}


op_unario    {and}|{not}
tipo_basico  ("entero"|"booleano"|"caracter"|"real")
cte          ("verdadero"|"falso"|'{letra}'|{real})

%%


"\n"          {yylineno;}
" "           
"principal"   {ECHO; return PRINCIPAL;}
"{"           {ECHO; return INI_BLOQUE;}
"}"           {ECHO; return FIN_BLOQUE;}
"("           {ECHO; return INI_EXPR;}
")"           {ECHO; return FIN_EXPR;}
"["           {ECHO; return INI_TAM;}
"]"           {ECHO; return FIN_TAM;}
","           {ECHO; return COMA;}
";"           {ECHO; return PTCOMA;}
"*"           {ECHO; return OPMUL;}
"/"           {ECHO; return OPMUL;}
"<"           {ECHO; return OPREL;}
">"           {ECHO; return OPREL;}
"<="          {ECHO; return OPREL;}
">="          {ECHO; return OPREL;}
"="           {ECHO; return IGUAL;}
"entrada>>"   {ECHO; return ENTRADA;}
"salida<<"    {ECHO; return SALIDA;}
"hacer"       {ECHO; return HACER;}
"hasta"       {ECHO; return HASTA;}
"||"          {ECHO; return OR;}
"&&"          {ECHO; return AND;}
"^"           {ECHO; return XOR;}
{tipo_basico}   {ECHO; return TIPO_BASICO;}
"si"          {ECHO; return SI;}
"si_no"       {ECHO; return SI_NO;}
"ini_var"     {ECHO; return INI_VAR;}
"fin_var"     {ECHO; return FIN_VAR;}
"retorno"     {ECHO; return RETORNO;}
"&"           {ECHO; return AND;}
"!"         {ECHO; return NOT;}

{cte}           {ECHO; return CONSTANTE;}
{alfanumerico}+     {ECHO; return CADENA;}
{sumaresta}     {ECHO; return SUMARESTA;}
{entero}        {ECHO; return CTE_ENTERA;}

. {
printf(" \nError Léxico en Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}


%%

#if LEXICO == 1
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

#endif
