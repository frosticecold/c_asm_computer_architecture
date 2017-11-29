#include "create_matrix.h"
#include <stdlib.h>

int **create_matrix(int y, int k) { // matriz YxK
  int **matrix = NULL; // inicializar apontador de apontadores a null
  matrix = (int **)malloc(y * sizeof(int *)); // inicializar o vetor com y
                                              // linhas
  int i;
  for (i = 0; i < y; i++) {                     // Para as y linhas
    matrix[i] = (int *)calloc(k, sizeof(int)); // Reservar espaço para cada vetor na matriz
  }
  return matrix;
}