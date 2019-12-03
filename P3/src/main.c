#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
int yyparse();  // Para evitar warning al compilar

int main(int argc, char * argv[]) {
  if (argc >= 2) {
    yyin = fopen (argv[1], "rt");
    if (yyin == NULL) {
      printf ("No se puede abrir el fichero\n", argv[1]);
      exit (1);
    }
    else {
      printf("Leyendo archivo '%s'\n", argv[1]);
    }
  }
  else {
    printf("Leyendo desde la entrada estándar\n");
    yyin = stdin;
  }

  
  yyparse();


  printf("Fin\n");
}
