#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0, num = 0;
  num = 6;
  int ar[] = {1,2,3,4,5,6};
  int *vec = ar;
  res = count_odd(vec, num);
  printf("Igual?: %d\n", res);
  return 0;
}