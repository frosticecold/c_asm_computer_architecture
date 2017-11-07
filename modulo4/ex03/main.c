#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  int a = 4, b = 5, c = 3 ;
  res = greater(a,b,c);
  printf("%d\n", res);
  return 0;
}