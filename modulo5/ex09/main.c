#include "create_matrix.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int y = 4;                    // Número de linhas
  int k = 6;                    // Número de colunas
  int **matrix = NULL;          // apontador de apontadores inicializado a null
  matrix = create_matrix(y, k); // Criar uma matriz
  if (matrix != NULL) { // Se a matriz não for nula, então vamos fazer free ao
                        // espaço ocupado
    int i;
    for (i = 0; i < y; i++) { //Free para cada vetor da matriz
      free(matrix[i]);
    }
    free(matrix);             //Free ao apontador de apontadores
  }
  return 0;
}