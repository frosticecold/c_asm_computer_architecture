#include <stdio.h>
#include <stdlib.h>
#include "search_matrix.h"

int main() {

  int v1[4] = {57, 82, 25, 38};
  int v2[4] = {48, 16, 10, 29};
  int v3[4] = {32, 7, 64, 42};
  int v4[4] = {35, 23, 39, 50};
  int *m[4] = {v1, v2, v3, v4};
  
  printf("%d\n", search_matrix(m,4,4,23));
  printf("%d\n", search_matrix(m,4,4,11));
  
  return 0;
}