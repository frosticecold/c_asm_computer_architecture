#include "search_matrix.h"
#include <stdio.h>

int search_matrix(int **m, int y, int k, int num) {
  int i, j;  //set indexes for top left element
  for(i=0; i<y;i++) {
    for(j=0; j<k; j++) {
      if(m[i][j] == num) {
        return 1;
      }
    }
  }
  return 0;
}