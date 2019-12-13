#include <stdio.h>
int n;
int curr;

int main(int argc, char *argv[] ){
printf("introduce numero: ");
scanf("%d",&n);
printf(" ");
printf(n);
printf(" == ");
curr = 2;
{
int d;
{ //Comienzo de traducción de la asignación
int temp0;
temp0 = n/curr;
d = temp0;
} //Fin de traducción de la asignación
int temp1;
temp1 = d*curr;
int temp2;
temp2 = temp1==n;
{
printf("* ");
printf(curr);
printf(" ");
{ //Comienzo de traducción de la asignación
int temp3;
temp3 = n/curr;
n = temp3;
} //Fin de traducción de la asignación
}
{ //Comienzo de traducción de la asignación
int temp4;
temp4 = curr+1;
curr = temp4;
} //Fin de traducción de la asignación
}
int temp5;
temp5 = curr<=n;
printf("\n");
}
