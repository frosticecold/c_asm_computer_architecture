#include "sort_without_reps.h"
#include <stdio.h>
int main() {

  const int SIZE_VEC = 10;
  int vec_original[] = {1, 1, 2, 3, 4, 4, 6, 7, 8, 9};
  int vec_copiado[SIZE_VEC];

  int vec_copiado_size = sort_without_reps(vec_original, SIZE_VEC, vec_copiado);
  int i;
  printf("Vamos escrever o vector copiado com o tamanho:%d\n",
         vec_copiado_size);
  for (i = 0; i < vec_copiado_size; i++) {
    printf("vec[%d]=%d\n", i, vec_copiado[i]);
  }
  return 0;
}