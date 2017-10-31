#include "asm.h"
#include <stdio.h>

int num = 5;
 int array[5] = {5, 4, 4, 2, 1};
 int vec[5];
//int array[5] = {6, 1, 2, 4, 3};
int *ptrsrc;
int *ptrdest;
int main() {
  ptrsrc = array;
  ptrdest = vec;

  int i;
  int res = sort_without_reps();
  printf("Number of items in the second array: [%d]\n", res);
  printf("{ ");
  for (i = 0; i < res; i++) {
    printf("%d%s", vec[i], (i < res - 1) ? ", " : "}\n");
  }
  return 0;
}