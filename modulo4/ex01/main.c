#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  int x = 4;
  res = square(x);
  printf("%d\n", res);
  return 0;
}