#include "asm.h"
#include <stdio.h>

int op32a = 0, op32b = 0;

int main() {

  op32a = 100000;
  op32b = 200000;
  // Resultado 300 000
  int result = sum2intscheck();
  printf("%d\n", result);

  op32a = 500000;
  op32b = 10000;
  // Rsultado 510 000
  result = sum2intscheck();
  printf("%d\n", result);

  op32a = 2147483647;
  op32b = 2147483647;
  //2147483647 + 2147483647
  //4294967294 Existe overflow, a flag vai ativar
  result = sum2intscheck();
  printf("%d\n", result);

  op32a = 2147483647;
  op32b = op32a * 2;
  //2147483647 + 4294967294
  //6442450941 Existe carry, a flag vai ativar
  result = sum2intscheck();
  printf("%d\n", result);

}