#include "function_even_elements.h"

//Função que lê o número de elementos na posição vec[0]
//E calcula a soma todos os elementos pares
int sum_of_pair_elements(int *vec) {

  int sum = 0;
  int n = vec[0];
  //Se existirem elementos
  if (n > 0) {
    int i;
    //Então vamos percorrer o vetor até n+1 elementos
    for (i = 1; i < n + 1; i++) {
        //Se o valor em vec[i] for par então somamos
      if (vec[i] % 2 == 0) {
        sum += vec[i];
      }
    }
  }
  return sum;
}