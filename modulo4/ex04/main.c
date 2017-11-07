#include "asm.h"
#include <stdio.h>
int main() {
  int res = 0;
  int num1 = 6, num2 = 5, zero = 0;
  int *smaller = &zero;
  res = sub_greater(num1,num2,smaller);
  printf("%d\n", res);
  printf("%d\n",*smaller);
  return 0;
}