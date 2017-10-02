#include "sort_without_reps.h"
#include <stdio.h>
int main() {

  // Vamos declarar um vetor com tamanho 10
  const int SIZE_VEC = 10;
  // Vamos declarar um vetor com 10 elementos
  int vec_original[] = {1, 1, 2, 3, 4, 4, 6, 7, 8, 9};
  // Vamos declarar um vetor para onde copiar com 10 elementos;
  int vec_copiado[SIZE_VEC];

  int i;
  // Vamos imprimir o vetor original no formato {1,2,3,4}
  printf("{");
  for (i = 0; i < SIZE_VEC; i++) {
    printf("%d", vec_original[i]);
    if (i < SIZE_VEC - 1) {
      printf(",");
    } else {
      printf("}\n");
    }
  }
  /*Vamos copiar devec_original os números não repetidos
  para vec_copiado e guardar o número de elementos copiados*/
  int vec_copiado_size = sort_without_reps(vec_original, SIZE_VEC, vec_copiado);
  printf("\nVamos escrever o vector copiado com o tamanho:%d\n",
         vec_copiado_size);
  // Vamos escrever o vetor copiado no formato {1,2,3,4}
  printf("{");
  for (i = 0; i < vec_copiado_size; i++) {
    printf("%d", vec_copiado[i]);
    if (i < vec_copiado_size - 1) {
      printf(",");
    } else {
      printf("}\n");
    }
  }
  return 0;
}