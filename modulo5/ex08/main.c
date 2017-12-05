#include "create_str.h"
#include <stdio.h>
#include <stdlib.h>
int main() {

  char str[80] = "ola1234567";

  char *s = NULL;
  s = create_str(str);
  if (s != NULL) {
    printf("%s\n", s);
    free(s);
  }
  /*
    É possível retornar um endereço de memória para o vetor de chars, pois
    consegue-se dínamicamente alocar memória
    necessária para o vetor de chars com o uso de malloc/calloc.
    Caso não seja possível alocar memória, o malloc/calloc retorna NULL, isto é,
    não é possível alocar memória suficiente para guardar a informaçao da string
    em memória.
  */
  return 0;
}