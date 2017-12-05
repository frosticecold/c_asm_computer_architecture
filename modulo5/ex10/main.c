#include <stdio.h>
#include <stdlib.h>
#include "search_matrix.h"
#include "create_matrix.h"
#define Y 4
#define K 4

int main() {

  //Vetor com dados iniciais
  int v[16] = {57, 82, 25, 38,48, 16, 10, 29,32, 7, 64, 42,35, 23, 39, 50};

  //Criar matriz 4x4
  int **m = create_matrix(Y,K);

  //Copiar os valores para a matriz
  int i,j,k=0;
  for(i=0;i<Y;i++) {
    for(j=0;j<K;j++) {
      m[i][j] = v[k++];
    }
  }
  
  //Procurar pelo numero 23;
  int num = 23;
  printf("Existe o número %d: %d\n",num, search_matrix(m,Y,K,num));
  //Procurar pelo numero nao existente
  num = 11;
  printf("Existe o número %d: %d\n",num, search_matrix(m,Y,K,num));
  
  //Libertar o espaço alocado
  for(i=0; i < Y; i++){
    free(m[i]);
  }
  free(m);
  return 0;
}