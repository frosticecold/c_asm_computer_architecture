#include "asm.h"
#include <stdio.h>

int op32a = 0, op32b = 0;

int main() {

  op32a = 100000;
  op32b = 200000;
  // op32a + op32b = 300 000
  // 0100 1001 0011 1110 0000

  // Resultado 300 000
  long long result = sum2ints();
  printf("%lld\n", result);
  // 0111 1111 1111 1111 1111 1111 1111 1111
  op32a = 2147483647;

  // 0000 0000 0000 0000 0010 0111 0001 0000
  op32b = 10000;

  // Resultado
  // 1000 0000 0000 0000 0010 0111 0000 1111
  // 0 1000 0000 0000 0000 0010 0111 0000 1111
  // 2147483647 + 10000=
  // 2147493647
  result = sum2ints();
  printf("%lld\n", result);

  op32b = 2147483647;

  //2147483647 + 2147483647
  //4294967294
  result = sum2ints();
  printf("%lld\n", result);
}