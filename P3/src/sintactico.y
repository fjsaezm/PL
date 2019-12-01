%{
#include <stdio.h>
#include <string.h>

#define YYDEBUG 0

  int yylex();  // Para evitar warning al compilar
  void yyerror(const char * msg);

  %}

%define parse.error verbose

 //Tokens

%token PRINCIPAL
%token INI_BLOQUE FIN_BLOQUE
%token INI_VAR FIN_VAR
%token INI_EXPR FIN_EXPR
%token INI_TAM FIN_TAM
%token PTCOMA COMA
%token TIPO_BASICO
%token CADENA
%token CTE_CARACTER CTE_ENTERA CTE_LOGICA CTE_REAL
%token SI SI_NO
%token RETORNO
%token ENTRADA SALIDA
%token HACER HASTA
%token PUNTO



%left OR
%left AND
%left XOR
%left IGUAL
%left OPREL
%left SUMARESTA
%left OPMUL
%right NOT

%start programa

%%


programa : PRINCIPAL bloque
;

bloque : INI_BLOQUE
dec_var_loc
dec_subprogs
sentencias
FIN_BLOQUE
;

dec_subprogs : dec_subprogs dec_subprog
          | /*vacio*/
;

dec_subprog : cabe_subprog bloque
;

cabe_subprog : TIPO_BASICO ident_array INI_EXPR lista_parametros FIN_EXPR
;


dec_var_loc : INI_VAR
var_loc
FIN_VAR
;
var_loc : var_loc cuerpo_dec_var
| cuerpo_dec_var
;

cuerpo_dec_var : TIPO_BASICO lista_identificador PTCOMA
;

sentencias : sentencias sentencia
| sentencia
;

sentencia : bloque
| sentencia_asig
| sentencia_if
| sentencia_do_until
| sentencia_entrada
| sentencia_salida
| sentencia_return
;
sentencia_asig : array_ident IGUAL expresion PTCOMA
;

sentencia_if  :  SI INI_EXPR expresion FIN_EXPR sentencia
| SI INI_EXPR expresion FIN_EXPR sentencia SI_NO sentencia
;
sentencia_do_until : HACER bloque HASTA INI_EXPR expresion FIN_EXPR
;
sentencia_entrada : ENTRADA lista_identificador PTCOMA
;
sentencia_salida : SALIDA lista_identificador PTCOMA
;
sentencia_return : RETORNO expresion PTCOMA
;
expresion : INI_EXPR expresion FIN_EXPR
| SUMARESTA expresion             %prec NOT
| expresion OR expresion
| expresion AND expresion
| expresion XOR expresion
| expresion SUMARESTA expresion
| expresion IGUAL expresion
| expresion OPREL expresion
| expresion OPMUL expresion
| array_ident
| funcion
;



funcion :  identificador INI_EXPR lista_expr FIN_EXPR
|  identificador INI_EXPR FIN_EXPR
;

tipo_basico : TIPO_BASICO
;

lista_identificador :  lista_identificador COMA  ident_array
|  ident_array
;

idarray:  identificador INI_TAM  num FIN_TAM
| identificador INI_TAM  num FIN_TAM INI_TAM  num FIN_TAM
;

ident_array: identificador |  idarray
;

array:  identificador INI_TAM  expresion FIN_TAM
|  identificador INI_TAM  expresion FIN_TAM INI_TAM  expresion FIN_TAM
;

array_ident:  array |  identificador
;

lista_parametros :  lista_parametros COMA  tipo_basico  ident_array
|  tipo_basico  ident_array
;

identificador : CADENA
;

num:  CTE_ENTERA
;

const_entero : num
;

const_real : CTE_REAL
;

const_caracter : CTE_CARACTER
;

const_booleano : CTE_LOGICA
;

lista_expr : lista_expr COMA expresion | expresion
;

const_array : INI_TAM lista_expr FIN_TAM
;


%%


#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("(Línea %d) %s\n", yylineno, msg);
}
