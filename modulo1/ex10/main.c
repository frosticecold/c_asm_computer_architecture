#include "function_even_elements.h"
#include <stdio.h>

int main() {

  int vec[11] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  //   int i;
  //   printf("Vamos imprimir %d valores\n", vec[0]);
  //   for (i = 1; i < vec[0]; i++) {
  //     printf("O Valor de vec[%d] é: %d\n", i, vec[i]);
  //   }

  int sum = sum_of_pair_elements(vec);
  // Suposta soma é 30
  printf("A soma de todos os elementos pares do vetor é: %d\n", sum);
  return 0;
}