#include "asm.h"
#include <stdio.h>
int main() {
  int vec[5] = {1,2,3,4,5};
  int n = 5;
  int result = count_odd(vec,n);
  printf("Têm %d números ímpares.",result);
}