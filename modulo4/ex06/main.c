#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  char *a = "Um bezerro, dois bezerros", *b = "Um bezerro, dois bezerros";
  res = test_equal(a, b);
  printf("Igual?: %d\n", res);

  a = "Um bezerro, dois bezerros";
  b = "Tres bezerros, quatro bezerros";
  res = test_equal(a, b);
  printf("Igual?: %d\n", res);
  return 0;
}