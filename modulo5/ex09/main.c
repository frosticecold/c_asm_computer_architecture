#include "create_matrix.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  int y = 4;
  int k = 4;
  int **matrix = NULL;
  matrix = create_matrix(y, k);
  if (matrix != NULL) {
    int i;
    for (i = 0; i < y; i++) {
      free(matrix[i]);
    }
    free(matrix);
  }
  return 0;
}