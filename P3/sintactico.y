%{
#include <stdio.h>
#include <string.h>

#define YYDEBUG 0

  int yylex();  // Para evitar warning al compilar
  void yyerror(const char * msg);

  #define YYERROR_VERBOSE
%}

%error-verbose

 //Tokens

%token PRINCIPAL
%token INI_BLOQUE FIN_BLOQUE
%token INI_VAR FIN_VAR
%token INI_EXPR FIN_EXPR
%token INI_TAM FIN_TAM
%token PTCOMA COMA
%token TIPO_BASICO
%token CADENA
%token CONSTANTE CTE_ENTERA
%token SI SI_NO
%token RETORNO
%token ENTRADA SALIDA
%token HACER HASTA


%left OPOR
%left OPAND
%left OPIG
%left OPTSUMREST
%left OPDIST
%right OPUN


%%

 //Producciones

programa : PRINCIPAL bloque PTCOMA
;

bloque : INI_BLOQUE
         dec_var_loc
         dec_subpr
         sentencias
         FIN_BLOQUE
;

dec_subpr : cabe_subpr bloque
;

dec_var_loc : INI_VAR
              var_loc
              FIN_VAR
;
var_loc : var_loc cuerpo_dec_var
        | cuerpo_dec_var
;

cuerpo_dec_var : TIPO_BASICO lista_id PTCOMA
;

cabe_subpr : TIPO_BASICO ident_array INI_EXPR lista_param FIN_EXPR
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
sentencia_asig : array_ident OPIG expresion
;
sentencia if  :  SI INI_EXPR expresion FIN_EXPR sentencia
                | SI INI_EXPR expresion FIN_EXPR sentencia SI_NO sentencia
;
sentencia_do_until : HACER bloque HASTA INI_EXPR expresion FIN_EXPR
;
sentencia_entrada : ENTRADA lista_id PTCOMA
;
sentencia_salida : SALIDA lista_id PTCOMA
;
sentencia_return : RETORNO expresion PTCOMA
;
expresion : INI_EXPR expresion FIN_EXPR
          | OP_UNARIO expresion
          | CONSTANTE
          | array_ident
          | 



