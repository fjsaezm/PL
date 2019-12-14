#include <stdio.h>
int n;
int curr;

int main(int argc, char *argv[] ){
printf("introduce numero: ");
scanf("%d",&n);
printf(" ");
printf("%d",n);
printf(" == ");
curr = 2;
etiqueta_0:
{
int d;
{ //Comienzo de traducción de la asignación
int temp0;
temp0 = n/curr;
d = temp0;
} //Fin de traducción de la asignación
{ // comienzo de la traducción del if
int temp1;
temp1 = d*curr;
int temp2;
temp2 = n==temp1;
if (!temp2) goto etiqueta_2;
printf("* ");
printf("%d",curr);
printf(" ");
{ //Comienzo de traducción de la asignación
int temp3;
temp3 = n/curr;
n = temp3;
} //Fin de traducción de la asignación
goto etiqueta_3;
etiqueta_2:
{
{ //Comienzo de traducción de la asignación
int temp4;
temp4 = curr+1;
curr = temp4;
} //Fin de traducción de la asignación
}
} //fin de la traducción del if
etiqueta_3:
{}
int temp5;
temp5 = curr<=n;
if (temp5) goto etiqueta_0;
}
printf("\n");
}