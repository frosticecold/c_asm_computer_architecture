#include "asm.h"
#include <stdio.h>

int num = 5;
 int array[5] = {5, 4, 3, 2, 1};
//int array[5] = {6, 1, 2, 4, 3};
int *ptrvec;
int main() {
  ptrvec = array;

  int i;
  printf("Desordenado:{ ");
  for (i = 0; i < num; i++) {
    printf("%d%s", array[i], (i < num - 1) ? ", " : "}\n");
  }
  array_sort();
  printf("Ordenado:{ ");
  for (i = 0; i < num; i++) {
    printf("%d%s", array[i], (i < num - 1) ? ", " : "}\n");
  }
  return 0;
}