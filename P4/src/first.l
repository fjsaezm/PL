%{
// descomentar para hacer léxico
#define LEXICO 0
#include "y.tab.h"  // Códigos de tokens generados por YACC

#include <stdlib.h>
#include <string.h>

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
cadena \"[^\"]*\"
identificador [a-zA-Z_][a-zA-Z0-9_]*
%%


"\n"          {ECHO;yylineno;}
" "           {ECHO;}
"principal"   {ECHO; return PRINCIPAL;}
"{"           {ECHO; return INI_BLOQUE;}
"}"           {ECHO; return FIN_BLOQUE;}
"("           {ECHO; return INI_EXPR;}
")"           {ECHO; return FIN_EXPR;}
"["           {ECHO; return INI_TAM;}
"]"           {ECHO; return FIN_TAM;}
","           {ECHO; return COMA;}
";"           {ECHO; return PTCOMA;}
"="	      {ECHO; return ASIG;}
"+"           {ECHO; yylval.attr = 0; return SUMARESTA;}
"-"           {ECHO; yylval.attr = 1; return SUMARESTA;}
"*"           {ECHO; yylval.attr = 0; return OPMUL;}
"/"           {ECHO; yylval.attr = 1; return OPMUL;}
">"           {ECHO; yylval.attr = 0; return OPREL;}
"<"           {ECHO; yylval.attr = 1; return OPREL;}
"<="          {ECHO; yylval.attr = 2; return OPREL;}
">="          {ECHO; yylval.attr = 3; return OPREL;}
"=="	      {ECHO; yylval.attr = 0; return OPIGUAL;}
"!="	      {ECHO; yylval.attr = 1; return OPIGUAL;}
"entrada>>"   {ECHO; return ENTRADA;}
"salida<<"    {ECHO; return SALIDA;}
"hacer"       {ECHO; return HACER;}
"hasta"       {ECHO; return HASTA;}
"||"          {ECHO; return OR;}
"&&"          {ECHO; return AND;}
"^"           {ECHO; return XOR;}
"entero"      {ECHO; yylval.type = ENTERO; return TIPO_BASICO;}
"booleano"    {ECHO; yylval.type = BOOLEANO; return TIPO_BASICO;}
"caracter"    {ECHO; yylval.type = CARACTER; return TIPO_BASICO;}
"real"        {ECHO; yylval.type = FLOTANTE; return TIPO_BASICO;}
"si"          {ECHO; return SI;}
"si_no"       {ECHO; return SI_NO;}
"ini_var"     {ECHO; return INI_VAR;}
"fin_var"     {ECHO; return FIN_VAR;}
"retorno"     {ECHO; return RETORNO;}
"&"           {ECHO; yylval.attr = 0; return OPUNARIO;}
"!"           {ECHO; yylval.attr = 1; return OPUNARIO;}

"verdadero"	{ECHO; yylval.attr = 0; yylval.lex = strdup(yytext); return CTE_LOGICA;}
"falso"		{ECHO; yylval.attr = 1; yylval.lex = strdup(yytext); return CTE_LOGICA;}

\'[^\']\' {ECHO; yylval.lex = strdup(yytext); return CTE_CARACTER;}
{real}		{ECHO; yylval.lex = strdup(yytext); return CTE_REAL;}
{entero}        {ECHO; yylval.lex = strdup(yytext); return CTE_ENTERA;}

\"[^\"]*\"  {ECHO; yylval.lex = strdup(yytext); return CADENA;}
[a-zA-Z_][a-zA-Z0-9_]* {ECHO; yylval.lex = strdup(yytext); return CADENA;}

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
