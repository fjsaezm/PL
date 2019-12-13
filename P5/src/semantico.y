%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantico.h"

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
%token CADENA2



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


programa : { generaFich(); } //CI
	PRINCIPAL bloque
	{ closeInter(); } //CI
;
;

bloque : INI_BLOQUE {tsAddMark();}
	{if (isMain==0){ fputs("{\n",file); }} //CI
	interiorBloque FIN_BLOQUE
	{ fputs("}\n",file); } //CI
	{tsCleanIn();}
;

interiorBloque :
	dec_var_loc
	dec_subprogs
	|
	dec_var_loc
	dec_subprogs
	sentencias
;

dec_subprogs : dec_subprogs dec_subprog
          | /*vacio*/
;

dec_subprog : cabe_subprog { subProg = 1;} bloque { subProg = 0;}
;

cabe_subprog : TIPO_BASICO identificador {decParam = 1; tsAddSubprog($2);} INI_EXPR cabe2
;

cabe2 : lista_parametros FIN_EXPR { tsUpdateNparam($1); nParam = 0; decParam = 0; } {$1.nDim=0;}
	| FIN_EXPR
;

dec_var_loc : { varPrinc++;	}
	INI_VAR {decVar = 1;} var_loc FIN_VAR {decVar = 0;} 
	{if(isMain==1){fputs("\nint main(int argc, char *argv[] ){\n",file); isMain=0;}}
	| /*vacío*/
;
var_loc : var_loc cuerpo_dec_var
	| cuerpo_dec_var
;

cuerpo_dec_var : TIPO_BASICO
		{tipoTMP = $1.type;tipoArray = $1.type;} //CI
		{setType($1);}
		 lista_identificador PTCOMA
               | error
;

sentencias : sentencias {decVar = 2;} sentencia
	| {decVar = 2;} sentencia
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

sentencia_asig : array_ident ASIG {isAsig=1;} expresion PTCOMA
	{
	  if($1.type != $4.type){
	    printf("Error semántico(%d),los tipos no coinciden (%d) y (%d).\n",yylineno,$1.type,$3.type);
	  }
	  if(!equalSize($1,$4)){
	    printf("Error semántico(%d),los tamaños no coinciden.\n",yylineno);
	  }
	}
  { generaAsignacion($1,$2,$4); isAsig=0;} //CI
;

sentencia_if  :  SI INI_EXPR expresion FIN_EXPR sentencia
	{
  	  if($3.type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  	  }
	}
| SI INI_EXPR expresion FIN_EXPR sentencia SI_NO sentencia
	{
  	  if($3.type != BOOLEANO){
    	    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  	  }
	}
;

sentencia_do_until : HACER bloque HASTA INI_EXPR expresion FIN_EXPR
{
  if($5.type != BOOLEANO){
    printf("Error semántico (%d),la expresión no es de tipo lógico.\n",yylineno);
  }
}

;

sentencia_entrada : ENTRADA {decEnt=1;} lista_identificador PTCOMA {decEnt=0;}
;

sentencia_salida : SALIDA {decSal=1;} lista_expr PTCOMA {nParam = 0;} {decSal=0;}
| SALIDA CADENA2 PTCOMA {generaEntSal(3,$2);}
;

sentencia_return : RETORNO expresion { tsCheckReturn($2,&$$);/* printTS();*/} PTCOMA
;

expresion : INI_EXPR expresion FIN_EXPR { $$.lex=$2.lex; $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2; }
	| array_ident {decVar = 0;}
	| SUMARESTA expresion {tsOpSign($1, $2, &$$); }
	| OPUNARIO expresion {tsOpUnary($1, $2, &$$); }
	| expresion OR expresion {tsOpOr($1, $2, $3, &$$); 
generaExpresion($1,$2,$3,&$$); } //CI
	| expresion AND expresion {tsOpAnd($1, $2, $3, &$$); 
generaExpresion($1,$2,$3,&$$); } //CI
	| expresion XOR expresion {tsOpXor($1, $2, $3, &$$); 
generaExpresion($1,$2,$3,&$$); } //CI
	| expresion OPIGUAL expresion {tsOpEqual($1, $2, $3, &$$); 
generaExpresion($1,$2,$3,&$$); } //CI
	| expresion SUMARESTA expresion {tsOpSignBin($1, $2, $3, &$$);  generaExpresion($1,$2,$3,&$$); } //CI
	| expresion OPREL expresion {tsOpRel($1, $2,$3, &$$);  
generaExpresion($1,$2,$3,&$$); } //CI
	| expresion OPMUL expresion {tsOpMul($1,$2,$3,&$$); 
generaExpresion($1,$2,$3,&$$); } //CI
	| funcion {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; /*currentFunction = -1;*/}
	| constante {$$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
	| error
;


/* revisar array ident*/
constante : CTE_ENTERA{ $$.type = ENTERO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
| const_matriz { aux = 1; $$.type = $1.type; $$.nDim = $1.nDim; $$.tDim1 = $1.tDim1; $$.tDim2 = $1.tDim2; }
	| CTE_LOGICA { $$.type = BOOLEANO; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
| CTE_REAL { $$.type = REAL; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
	| CTE_CARACTER  { $$.type = CARACTER; $$.nDim = 0; $$.tDim1 = 0; $$.tDim2 = 0; }
;

funcion :  identificador  INI_EXPR lista_expr FIN_EXPR { tsFunctionCall($1, &$$); nParam = 0; }
|  identificador INI_EXPR FIN_EXPR { tsFunctionCall($1, &$$); nParam = 0;}
;

const_matriz: INI_BLOQUE lista_expr FIN_BLOQUE { $$.type = $2.type; $$.nDim = $2.nDim; $$.tDim1 = $2.tDim1; $$.tDim2 = $2.tDim2;} ;

//falta declarar bien los arrays
lista_identificador :  lista_identificador COMA  ident_array
	|  ident_array
;

ident_array: identificador { if(decVar == 1){
				$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
				{ generaDecVar($1); }//CI
			      }
		             else{
				if(decParam == 0)
				   tsGetId($1, &$$);
			     }
				//printf(" El tipo es (%d).\n",$1.type);
				if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
			    }
	|  identificador INI_TAM  num FIN_TAM { if(decVar == 1) { $1.nDim=1; $1.tDim1=atoi($3.lex); $1.tDim2=0; tsAddId($1);
	{ generaDecVar($1); }//CI
	 }
	if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
	}
	| identificador INI_TAM  num FIN_TAM INI_TAM  num FIN_TAM { if(decVar == 1) { $1.nDim=2; $1.tDim1=atoi($3.lex); $1.tDim2=atoi($6.lex); tsAddId($1);
	{ generaDecVar($1); }//CI
	 }
	if(decEnt == 1){tsGetId($1, &$$); generaEntSal(1, $$);}
	}
	|  error
;

array_ident: identificador { if(decVar == 1){
				$1.nDim=0; $1.tDim1 = 0; $1.tDim2 = 0; tsAddId($1);
			      }
		             else{
				if(decParam == 0)
				   tsGetId($1, &$$);
			     }
				//printf(" El tipo es (%d).\n",$1.type);
			    }
	| identificador INI_TAM  lista_expr FIN_TAM { if(decVar == 2){ tsGetId($1, &$$); $$.tDim1 = $3.tDim1; $$.tDim2 = $3.tDim2; $$.nDim = $$.nDim -1; } }
	|  identificador INI_TAM  lista_expr FIN_TAM INI_TAM lista_expr FIN_TAM { if(decVar == 2){ tsGetId($1, &$$); $$.tDim1 = $3.tDim1; $$.tDim2 = $6.tDim2; $$.nDim = $$.nDim -2;} }
;

lista_parametros :  lista_parametros COMA  TIPO_BASICO  ident_array { $4.nDim=0; nParam++; setType($3); tsAddParam($4); }
	|  TIPO_BASICO  ident_array { $2.nDim=0; nParam++; setType($1); tsAddParam($2); }
	|  lista_parametros error  TIPO_BASICO  ident_array
;

identificador : CADENA
;

num:  CTE_ENTERA
;



lista_expr : lista_expr COMA expresion { nParam++; tsCheckParam($-1,$3, nParam); } {if(decSal == 1){generaEntSal(1,$1);}}
| expresion { nParam++; tsCheckParam($-1,$1, nParam); } {if(decSal == 1){generaEntSal(1,$1);}}
;



%%


#include "lex.yy.c"

void yyerror(const char * msg) {
  printf("\n(Línea %d) %s\n", yylineno, msg);
}
