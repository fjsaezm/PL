%{
#include <stdio.h>
  %}



%%
PRINCIPAL     principal
INI_BLOQUE    \{
FIN_BLOQUE    \}
INI_EXPR      \(
INI_TAM       \[
FIN_TAM       \]
FIN_EXPR      \)
COMA          ,
PTCOMA        ;
OP_BINARIO    [ * | == | != | >= | <= | > | < | && ]
VERDADERO     verdadero
FALSO         falso
TIPO_BASICO   [ entero | real | caracter | booleano]
SI            ["si"]
SI_NO         ["si_no"]
INI_VAR       ["ini_var"]
FIN_VAR       ["fin_var"]
FUNCION       []
RETORNO
HACER
HASTA
OP_UNARIO
IGUAL
CONST_ENT
CONST_R
CONST_CAR
ENTRADA
SALIDA
CADENA

%%


int yywrap(void) {
return 1;
}

int main(void) {
yylex();
return 0;
}
