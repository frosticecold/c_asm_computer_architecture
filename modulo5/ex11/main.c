#include "count_even_matrix.h"
#include "create_matrix.h"
#include <stdio.h>
#include <stdlib.h>
int main() {

  int v[16] = {1, 2, 1, 1, 1, 1, 2, 1, 1,1, 1, 1, 1, 1, 2, 1};

  // Inicializar uma matrix 4x4
  int p = 4, q = 4;
  int **m = create_matrix(p, q);
  int i, j, k = 0;

  // Copiar a matrix
  for (i = 0; i < p; i++) {
    for (j = 0; j < q; j++) {
      m[i][j] = v[k++];
    }
  }
  //Contar quantos números pares existem
  int res = count_even_matrix(m, p, q);
  printf("Existem %d par(es)",res);

  //Libertar espaço alocado
  for (i = 0; i < p; i++) {
      free(m[i]);
  }
  free(m);
  return 0;
}