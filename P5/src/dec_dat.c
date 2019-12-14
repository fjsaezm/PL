//#include "dec_sat.h"
#include <stdio.h>

void sumaVectores (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]+b[i];
}

void restaVectores (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]-b[i];
}

void multiplicacionVectores (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]*b[i];
}

void divisionVectores (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]/b[i];
}


void sumaMatrices (int a[], int b[], int result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]+b[i*dim2+j];
}

void restaMatrices (int a[], int b[], int result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]-b[i*dim2+j];
}

void multiplicacionMatrices (int a[],int b[], int result[], int dimA1,int dimA2B1, int dimB2){
  for (int i = 0; i < dimA1; ++i)
    for (int j = 0; j < dimB2; ++j)
      result[i*dimB2+j]= 0;

  for (int i = 0; i < dimA1; ++i){
      for (int j = 0; j < dimB2; ++j)
        printf("%d\t",result[i*dimA2B1+j]);
      printf("\n");}

  printf("\n");
  printf("\n");

  for (int k=0;k < dimA1;++k)
    for (int i = 0; i < dimA2B1; ++i)
      for (int j = 0; j < dimB2; ++j)
        result[k*dimB2+j]+= a[k*dimA2B1+i]*b[i*dimB2+j];

}



int main(){
  int dimA1=2;
  int dimA2B1=1;
  int dimB2=2;

  int a[dimA1][dimA2B1];
  a[0][0]=1;
  a[1][0]=2;
  int b[dimA2B1][dimB2] ;
  b[0][1]=1;
  b[0][0]=2;
  int result[dimA1][dimB2];

  multiplicacionMatrices(a,b,result, dimA1,dimA2B1, dimB2);

  for (int i = 0; i < dimA1; ++i){
    for (int j = 0; j < dimA2B1; ++j)
      printf("%d\t",*a[i*dimA2B1+j]);
    printf("\n");}

    printf("\n");
    printf("\n");


  for (int i = 0; i < dimA2B1; ++i){
    for (int j = 0; j < dimB2; ++j)
      printf("%d\t",b[i][j]);
    printf("\n");}

    printf("\n");
    printf("\n");

  for (int i = 0; i < dimA1; ++i){
    for (int j = 0; j < dimB2; ++j)
      printf("%d\t",result[i][j]);
    printf("\n");}


  return 0;

}
