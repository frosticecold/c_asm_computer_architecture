#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  int n = 4;
  res = sum_n(n);
  printf("A soma dos %d números é: %d\n",n,res);
  return 0;
}