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
%left OPIGUALDAD
%left OPRELACION
%left OPSIGNO
%left OPMULTIPLICATIVO
%right OP_UNARIO


%start programa

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
          | OPUN expresion
          | CONSTANTE
          | array_ident
          | expresion OPIG expresion
          | expresion OP_BINARIO expreison
          | OP_UNARIO expresion
          | funcion

;
corchetes_digitos: INI_TAM lista_digitos FINTAM
                 | lista_digitos COMA corchetes_digitos
;

corchetes_matriz : INI_TAM corchetes_digitos FIN_TAM
;

lista_digitos : digito COMA lista_digitos
              | digito
;


 constante :   const_entero |  const_real |  const_booleano |  const_caracter
           |  const_array
 ;

   funcion :  identificador INI_EXPR lista_expr FIN_EXPR
  |  identificador INI_EXPR FIN_EXPR
   ;
 tipo_basico : entero   |  booleano  |  real  |  caracter
 ;

   lista_identificador :  lista_identificador COMA  ident_array
                      |  ident_array

   ;
   idarray:  identificador INI_TAM  numero FIN_TAM
          | identificador INI_TAM  numero FIN_TAM INI_TAM  numero FIN_TAM
   ;
   ident_array: identificador |  idarray
   ;
   array:  identificador INI_TAM  expresion FIN_TAM
        |  identificadorINI_TAM  expresion FIN_TAM INI_TAM  expresion FIN_TAM
   ;
   array_ident:  array |  identificador
   ;
   lista_parametros :  lista_parametros COMA  tipo_basico  ident_array
                   |  tipo_basico  ident_array
   ;
   num:  CTE_ENTERA
   ;


identificador : identificador alfanumerico
              | letra
;

alfanumerico : alfanumerico letra
             | alfanumerico digito
             | letra
             | digito
;

lista_expresiones_o_cadena :  lista_expresiones_o_cadena expresiones_cadena PTOCOMA | expresiones_cadena
;

expresiones_cadena : expresion
  | CADENA
;
  const_entero : num
;
  const_real : const_entero . const_entero
;
  const_caracter : CONSTANTE
  ;
  const_boolena ::= verdadero | falso
    ;
lista_expr : lista_expr COMA expresion | expresion
;

const_array : = INI_TAM lista_expr FIN_TAM
  ;
