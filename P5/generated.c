#include <stdio.h>
#include "include/dec_dat.h"
int n;
int curr;
int a23[2][3];
int a32[3][2];
int a22[2][2];

int main(int argc, char *argv[] ){
{ //Comienzo de traducción de la asignación
int temp0[2][2];
multiplicacionMatricesEnteros (a23, a32, temp0, 2, 3, 2);
a22 = temp0;
} //Fin de traducción de la asignación
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
int temp1;
temp1 = n/curr;
d = temp1;
} //Fin de traducción de la asignación
{ // comienzo de la traducción del if
int temp2;
temp2 = d*curr;
int temp3;
temp3 = n==temp2;
if (!temp3) goto etiqueta_2;
printf("* ");
printf("%d",curr);
printf(" ");
{ //Comienzo de traducción de la asignación
int temp4;
temp4 = n/curr;
n = temp4;
} //Fin de traducción de la asignación
goto etiqueta_3;
etiqueta_2:
{
{ //Comienzo de traducción de la asignación
int temp5;
temp5 = curr+1;
curr = temp5;
} //Fin de traducción de la asignación
}
} //fin de la traducción del if
etiqueta_3:
{}
int temp6;
temp6 = curr<=n;
if (temp6) goto etiqueta_0;
}
printf("\n");
}
