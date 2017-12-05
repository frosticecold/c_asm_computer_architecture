#include <stdio.h>
#include <stdlib.h>
#include "sum_matrixes.h"
#include "create_matrix.h"

int main() {

  //Vetor inicial
  int v[16] = {57, 82, 25, 38,48, 16, 10, 29,32, 7, 64, 42,35, 23, 39, 50};

  //Criar as duas matrizes
  int p=4,q=4;
  int **m = create_matrix(p,q);
  int **m1 = create_matrix(p,q);

  //Copiar os valores dos vetores para as matrizes
  int i,j,k=0;
  for(i=0;i<p;i++) {
    for(j=0;j<q;j++) {
      m[i][j] = v[k];
      m1[i][j] = v[k++];
    }
  }

  //Somar as matrzies
  int **m2 = sum_matrixes(m,m1,p,q);
  
  //Imprimir as matrizes
  printf("Matrix 1\n");
  printMatrix(m,p,q);
  printf("Matrix 2\n");
  printMatrix(m1,p,q);
  printf("Matrix Sum\n");
  printMatrix(m2,p,q);
  
  //Libertar o espaço alocado pelas matrizes nos vetores
  for(i=0; i < p; i++){
    free(m[i]);
    free(m1[i]);
    free(m2[i]);
  }
  //Libertar o espaço alocado pelas matrizes
  free(m);
  free(m1);
  free(m2);
  
  return 0;
}