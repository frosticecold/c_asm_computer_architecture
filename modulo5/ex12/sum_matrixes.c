#include "sum_matrixes.h"
#include "create_matrix.h"
#include <stdio.h>

int **sum_matrixes(int **a, int **b, int y, int k) {
  int **m = create_matrix(y,k);
  int i, j;  //set indexes for top left element
  for(i=0; i<y;i++) {
    for(j=0; j<k; j++) {
      m[i][j] = a[i][j] + b[i][j];
    }
  }
  return m;
}