#include <stdio.h>
#include <stdlib.h>
#include "sum_matrixes.h"
#include "create_matrix.h"

int main() {

  int v[16] = {57, 82, 25, 38,48, 16, 10, 29,32, 7, 64, 42,35, 23, 39, 50};

  int **m = create_matrix(4,4);
  int **m1 = create_matrix(4,4);

  int i,j,k=0;
  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      m[i][j] = v[k];
      m1[i][j] = v[k++];
    }
  }

  int **m2 = sum_matrixes(m,m1,4,4);

  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      printf("%d ",m2[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  
  
  return 0;
}