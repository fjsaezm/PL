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



%left OR
%left AND
%left XOR
%left ASIG
%left OPREL
%left OPIGUAL
%left SUMARESTA
%left OPMUL
%right OPUNARIO

%start programa

%%


programa : PRINCIPAL INI_EXPR FIN_EXPR bloque
;

bloque : INI_BLOQUE
dec_var_loc
dec_subprogs
sentencias
FIN_BLOQUE
|
INI_BLOQUE
dec_var_loc
dec_subprogs
FIN_BLOQUE
;

dec_subprogs : dec_subprogs dec_subprog
          | /*vacio*/
;

dec_subprog : cabe_subprog bloque
;

cabe_subprog : TIPO_BASICO identificador INI_EXPR lista_parametros FIN_EXPR
;


dec_var_loc : INI_VAR
var_loc
FIN_VAR
| /*empty*/
;
var_loc : var_loc cuerpo_dec_var
| cuerpo_dec_var
;

cuerpo_dec_var : TIPO_BASICO lista_identificador PTCOMA
               | error
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
| error
;
sentencia_asig : array_ident ASIG expresion PTCOMA
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
| OPUNARIO expresion
| expresion OR expresion
| expresion AND expresion
| expresion XOR expresion
| expresion OPIGUAL expresion
| expresion SUMARESTA expresion
| expresion OPREL expresion
| expresion OPMUL expresion
| array_ident
| funcion
| CTE_LOGICA
| CTE_CARACTER
| CTE_ENTERA
| CTE_REAL
| error
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

ident_array: identificador |  idarray | error
;

array:  identificador INI_TAM  lista_expr FIN_TAM
|  identificador INI_TAM  lista_expr FIN_TAM INI_TAM  lista_expr FIN_TAM
;

array_ident:  array |  identificador
;

lista_parametros :  lista_parametros COMA  tipo_basico  ident_array
|  tipo_basico  ident_array
|  lista_parametros error  tipo_basico  ident_array
;

identificador : CADENA
;

num:  CTE_ENTERA
;



lista_expr : lista_expr COMA expresion | expresion 
;



%%


#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("\n(Línea %d) %s\n", yylineno, msg);
}
