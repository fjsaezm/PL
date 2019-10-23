%{
#include<stdio.h>
#include<string.h>
FILE *source,*destiny;
char sourceName[20];
%}

%%

"principal"   printf("PRINCIPAL");
"{"           printf("INI_BLOQUE");
"}"           printf("FIN_BLOQUE");


%%

int main(int argc,char *argv[])
{

if (argc == 2){
yyin = fopen (argv[1], "rt");
if (yyin == NULL){
printf( "El fichero %s no se puede abrir \n", argv[1]);
exit(-1);
}
}
else
yyin = stdin;

destiny =fopen("parsed.txt","w");

yylex();
return(0);
}


int yywrap(void) {
return 1;
}

int main(void) {
yylex();
return 0;
}
