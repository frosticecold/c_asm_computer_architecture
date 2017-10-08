#include "array_sort.h"

void array_sort(int *vec, int n) {
  int temp = 0, i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - 1; j++) {
      //Se o número de vec[i] for menor que o valor em vec[j]
      //Vamos trocá-los para ficar ordem crescente
      if (vec[i] < vec[j]) {
          temp = vec[i];
          vec[i] = vec[j];
          vec[j] = temp;
      }
    }
  }
}