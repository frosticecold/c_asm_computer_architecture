#include <stdio.h>
#include <stdlib.h>
#include "search_matrix.h"
#include "create_matrix.h"

int main() {

  //Vetor com dados iniciais
  int v[16] = {57, 82, 25, 38,48, 16, 10, 29,32, 7, 64, 42,35, 23, 39, 50};

  //Criar matriz 4x4
  int **m = create_matrix(4,4);

  //Copiar os valores para a matriz
  int i,j,k=0;
  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      m[i][j] = v[k++];
    }
  }
  
  //Procurar pelo numero 23;
  printf("%d\n", search_matrix(m,4,4,23));
  //Procurar pelo numero nao existente
  printf("%d\n", search_matrix(m,4,4,11));
  
  //Libertar o espaço alocado
  for(i=0; i < 4; i++){
    free(m[i]);
  }
  free(m);
  return 0;
}