#include "search_matrix.h"
#include <stdio.h>

int search_matrix(int **m, int y, int k, int num) {
  int i, j;  // define index para o elemento no canto superior esquerdo
  for(i=0; i<y;i++) {	// percorrer linhas
    for(j=0; j<k; j++) {	// percorrer colunas
      if(m[i][j] == num) {	// se o numero na matriz for igual ao numero passado por parametro
        return 1;
      }
    }
  }
  return 0;
}