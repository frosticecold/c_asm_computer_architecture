#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  int v2 = 3, zero = 3;
  int *v1 = &zero;
  res = dec_cube(v1, v2);
  printf("Cubo: %d\n", res);
  printf("V1-1: %d\n",*v1);
  return 0;
}