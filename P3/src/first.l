%{

#include <stdlib.h>
#include <string.h>

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
"+"           {ECHO; return SUMARESTA;}
"-"           {ECHO; return SUMARESTA;}
"*"           {ECHO; return OPMUL;}
"/"           {ECHO; return OPMUL;}
">"           {ECHO; return OPREL;}
"<"           {ECHO; return OPREL;}
"<="          {ECHO; return OPREL;}
">="          {ECHO; return OPREL;}
"=="	      {ECHO; return OPIGUAL;}
"!="	      {ECHO; return OPIGUAL;}
"entrada>>"   {ECHO; return ENTRADA;}
"salida<<"    {ECHO; return SALIDA;}
"hacer"       {ECHO; return HACER;}
"hasta"       {ECHO; return HASTA;}
"||"          {ECHO; return OR;}
"&&"          {ECHO; return AND;}
"^"           {ECHO; return XOR;}
"entero"      {ECHO; return TIPO_BASICO;}
"booleano"    {ECHO; return TIPO_BASICO;}
"caracter"    {ECHO; return TIPO_BASICO;}
"real"        {ECHO; return TIPO_BASICO;}
"si"          {ECHO; return SI;}
"si_no"       {ECHO; return SI_NO;}
"ini_var"     {ECHO; return INI_VAR;}
"fin_var"     {ECHO; return FIN_VAR;}
"retorno"     {ECHO; return RETORNO;}
"&"           {ECHO; return OPUNARIO;}
"!"           {ECHO; return OPUNARIO;}

"verdadero"	{ECHO; return CTE_LOGICA;}
"falso"		{ECHO; return CTE_LOGICA;}

\'[^\']\' {ECHO; return CTE_CARACTER;}
{real}		{ECHO; return CTE_REAL;}
{entero}        {ECHO; return CTE_ENTERA;}

\"[^\"]*\"  {ECHO; return CADENA;}
[a-zA-Z_][a-zA-Z0-9_]* {ECHO; return CADENA;}

. {
printf(" \nError Léxico en Linea: %d. No se reconoce la palabra '%s'. ", yylineno, yytext);
}


%%
