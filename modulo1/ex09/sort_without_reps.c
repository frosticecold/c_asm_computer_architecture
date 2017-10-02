#include "sort_without_reps.h"
#include "array_sort.h"

/*
Função que recebe como argumento um numero, um vetor e o tamanho do vetor
A função verifica se o num recebido já existe no vetor de tamanho n
Se existir retorna 1
Senão retorna 0
*/
int verify_if_repeated(int num, int *vec, int n) {
  int isRepeated = 0;

  int i;
  for (i = 0; i < n; i++) {
    if (vec[i] == num) {
      isRepeated = 1;
      break;
    }
  }

  return isRepeated;
}

/*
  Função que recebe como argumento dois vetores e o tamanho deles
  e copia os valores não repetidos do vetor src para dest
  e ordenado na ordem ascendente
  por fim retorna quantos elementos são copiados
  */
int sort_without_reps(int *src, int n, int *dest) {

  int index = 0;

  int i;
  for (i = 0; i < n; i++) {
    if (verify_if_repeated(src[i], dest, n) == 0) {
      dest[index] = src[i];
      index++;
    }
  }
  if (index > 0) {
    array_sort(dest, index);
  }
}
