#include "fill_array.h"
#include "verify_condition.h"
#include <stdio.h>
#define VEC_SIZE 100

int main() {
  int vec[VEC_SIZE], count, i;
  fill_array(vec, 100);
  printf("{");
  for (i = 0; i < VEC_SIZE; i++) {
    printf("%d%s", vec[i], (i < VEC_SIZE - 1) ? ", " : "}\n");
  }
  count = verify_condition(vec,VEC_SIZE);
  printf("The number of three consecutive elements is: %d\n",count);
  return 0;
}