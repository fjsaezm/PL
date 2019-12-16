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
real {entero}\.{entero}
cadena \"[^\"]*\"
identificador [a-zA-Z_][a-zA-Z0-9_]*
%%


"\n"          {ECHO; yylineno;}
" "           {ECHO;}
"principal"   {ECHO; yylval.lex = strdup(yytext); return PRINCIPAL;}
"{"           {ECHO; yylval.lex = strdup(yytext); return INI_BLOQUE;}
"}"           {ECHO; yylval.lex = strdup(yytext); return FIN_BLOQUE;}
"("           {ECHO; yylval.lex = strdup(yytext); return INI_EXPR;}
")"           {ECHO; yylval.lex = strdup(yytext); return FIN_EXPR;}
"["           {ECHO; yylval.lex = strdup(yytext); return INI_TAM;}
"]"           {ECHO; yylval.lex = strdup(yytext); return FIN_TAM;}
","           {ECHO; yylval.lex = strdup(yytext); return COMA;}
";"           {ECHO; yylval.lex = strdup(yytext); return PTCOMA;}
"="	          {ECHO; yylval.lex = strdup(yytext); return ASIG;}
"+"           {ECHO; yylval.attr = 0; yylval.lex = strdup(yytext); return SUMARESTA;}
"-"           {ECHO; yylval.attr = 1; yylval.lex = strdup(yytext); return SUMARESTA;}
"*"           {ECHO; yylval.attr = 0; yylval.lex = strdup(yytext); return OPMUL;}
"/"           {ECHO; yylval.attr = 1; yylval.lex = strdup(yytext); return OPMUL;}
">"           {ECHO; yylval.lex = strdup(yytext); yylval.attr = 0; return OPREL;}
"<"           {ECHO; yylval.lex = strdup(yytext); yylval.attr = 1; return OPREL;}
"<="          {ECHO; yylval.lex = strdup(yytext); yylval.attr = 2; return OPREL;}
">="          {ECHO; yylval.lex = strdup(yytext); yylval.attr = 3; return OPREL;}
"=="	        {ECHO; yylval.lex = strdup(yytext); yylval.attr = 0; return OPIGUAL;}
"!="	        {ECHO; yylval.lex = strdup(yytext); yylval.attr = 1; return OPIGUAL;}
"entrada>>"   {ECHO; yylval.lex = strdup(yytext); return ENTRADA;}
"salida<<"    {ECHO; yylval.lex = strdup(yytext); return SALIDA;}
"hacer"       {ECHO; yylval.lex = strdup(yytext); return HACER;}
"hasta"       {ECHO; yylval.lex = strdup(yytext); return HASTA;}
"||"          {ECHO; yylval.lex = strdup(yytext); return OR;}
"&&"          {ECHO; yylval.lex = strdup(yytext); return AND;}
"^"           {ECHO; yylval.lex = strdup(yytext); return XOR;}
"entero"      {ECHO; yylval.type = ENTERO; return TIPO_BASICO;}
"booleano"    {ECHO; yylval.type = BOOLEANO; return TIPO_BASICO;}
"caracter"    {ECHO; yylval.type = CARACTER; return TIPO_BASICO;}
"real"        {ECHO; yylval.type = REAL; return TIPO_BASICO;}
"si"          {ECHO; yylval.lex = strdup(yytext); return SI;}
"si_no"       {ECHO; yylval.lex = strdup(yytext); return SI_NO;}
"ini_var"     {ECHO; yylval.lex = strdup(yytext); return INI_VAR;}
"fin_var"     {ECHO; yylval.lex = strdup(yytext); return FIN_VAR;}
"retorno"     {ECHO; yylval.lex = strdup(yytext); return RETORNO;}
"&"           {ECHO; yylval.lex = strdup(yytext); yylval.attr = 0; return OPUNARIO;}
"!"           {ECHO; yylval.lex = strdup(yytext); yylval.attr = 1; return OPUNARIO;}

"verdadero"	{ECHO; yylval.attr = 0; yylval.lex = "1"; return CTE_LOGICA;}
"falso"		{ECHO; yylval.attr = 1; yylval.lex = "0"; return CTE_LOGICA;}

\'[^\']\' {ECHO; yylval.attr = 0;yylval.lex = strdup(yytext); return CTE_CARACTER;}
{real}		{ECHO; yylval.attr = 2;yylval.lex = strdup(yytext); return CTE_REAL;}
{entero}        {ECHO; yylval.attr = 1;yylval.lex = strdup(yytext); return CTE_ENTERA;}

\"[^\"]+\" { ECHO; yylval.lex = strdup(yytext); yylval.attr = 3; return CADENA2;}
({letra}|_)({letra}|{digito}|_)* {ECHO; yylval.lex = strdup(yytext); return CADENA;}

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
