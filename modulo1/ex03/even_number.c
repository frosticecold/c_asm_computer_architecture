#include "even_number.h"
#include <stdio.h>

/*
    Uma função que percorre os n números de um vetor de inteiros e
    imprime apenas os números pares
*/
void printEvenNumbers(int *vec, int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (vec[i] % 2 == 0) {
      printf("The number %d is even\n", vec[i]);
    }
  }
}