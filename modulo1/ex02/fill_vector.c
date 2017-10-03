#ifndef FILL_VECTOR_H
#define FILL_VECTOR_H

#include "fill_vector.h"
#include "string_to_int.h"
#include <stdio.h>
#include <stdlib.h>

/*
  Método que lê n números para um vetor
  de inteiros
*/
void fill_vec(int *vec, int n) {

  // Inicializar o indice i;
  int i;
  // Inicializar um array de chars para ler o número
  char str[20] = "";
  // Número máximo de caractéres -1 que podemos ler
  const int STR_MAX_SIZE = 20;
  for (i = 0; i < n; i++) {
    printf("Vamos ler um número para a posição vec[%d]: ", i);
    // Vamos ler um linha com no número máximo de caractéres
    fgets(str, STR_MAX_SIZE, stdin);
    // Vamos converter uma string num inteiro e guardar na posição i do vec
    vec[i] = string_to_int(str);
  }
}

#endif