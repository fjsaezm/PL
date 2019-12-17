#include "dec_dat.h"

void mostrarVectorEnteros(int a[], int dim){
  for (int i=0;i < dim; ++i)
    printf("%i\t",a[i]);
  printf("\n");
}

void mostrarMatrizEnteros(int a[], int dim1, int dim2){
  for (int i = 0; i < dim1; ++i){
    for (int j = 0; j < dim2; ++j)
      printf("%i\t",a[i*dim2+j]);
  printf("\n");
  }
}

void mostrarVectorReales(double a[], int dim){
  for (int i=0;i < dim; ++i)
    printf("%d\t",a[i]);
  printf("\n");
}

void mostrarMatrizReales(double a[], int dim1, int dim2){
  for (int i = 0; i < dim1; ++i){
    for (int j = 0; j < dim2; ++j)
      printf("%d\t",a[i*dim2+j]);
  printf("\n");
  }
}

void asignacionVectorEnteros(int a[], int b[], int dim){
  for (int i=0;i < dim; ++i)
    a[i] = b[i];
}

void asignacionMatrizEnteros(int a[], int b[], int dim1, int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      a[i*dim2+j]= b[i*dim2+j];
}

void asignacionVectorReales(double a[], double b[], int dim){
  for (int i=0;i < dim; ++i)
    a[i] = b[i];
}

void asignacionMatrizReales(double a[], double b[], int dim1, int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      a[i*dim2+j]= b[i*dim2+j];
}

void sumaVectoresEnteros (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]+b[i];
}

void restaVectoresEnteros (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]-b[i];
}

void multiplicacionVectoresEnteros (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]*b[i];
}

void divisionVectoresEnteros (int a[], int b[], int result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]/b[i];
}


void sumaMatricesEnteros (int a[], int b[], int result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]+b[i*dim2+j];
}

void restaMatricesEnteros (int a[], int b[], int result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]-b[i*dim2+j];
}

void multiplicacionMatricesEnteros (int a[],int b[], int result[], int dimA1,int dimA2B1, int dimB2){
  for (int i = 0; i < dimA1; ++i)
    for (int j = 0; j < dimB2; ++j)
      result[i*dimB2+j]= 0;

  for (int k=0;k < dimA1;++k)
    for (int i = 0; i < dimA2B1; ++i)
      for (int j = 0; j < dimB2; ++j)
        result[k*dimB2+j]+= a[k*dimA2B1+i]*b[i*dimB2+j];

}

void sumaVectoresReales (double a[], double b[], double result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]+b[i];
}

void restaVectoresReales (double a[], double b[], double result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]-b[i];
}

void multiplicacionVectoresReales (double a[], double b[], double result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]*b[i];
}

void divisionVectoresReales (double a[], double b[], double result[], int dim){
  for (int i = 0; i < dim; ++i)
    result[i]= a[i]/b[i];
}


void sumaMatricesReales (double a[], double b[], double result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]+b[i*dim2+j];
}

void restaMatricesReales (double a[], double b[], double result[], int dim1,int dim2){
  for (int i = 0; i < dim1; ++i)
    for (int j = 0; j < dim2; ++j)
      result[i*dim2+j]= a[i*dim2+j]-b[i*dim2+j];
}

void multiplicacionMatricesReales (double a[],double b[], double result[], int dimA1,int dimA2B1, int dimB2){
  for (int i = 0; i < dimA1; ++i)
    for (int j = 0; j < dimB2; ++j)
      result[i*dimB2+j]= 0;

  for (int k=0;k < dimA1;++k)
    for (int i = 0; i < dimA2B1; ++i)
      for (int j = 0; j < dimB2; ++j)
        result[k*dimB2+j]+= a[k*dimA2B1+i]*b[i*dimB2+j];

}
