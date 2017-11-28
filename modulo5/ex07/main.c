#include "s2.h"
#include "save_data.h"
#include <stdio.h>

void printstruct(s2 *s) {
  int i;
  int n = 3;
  printf("A imprimir a estrutura s2\n\n");
  printf("vetor w[3]\n");
  for (i = 0; i < n; i++) {
    printf("w[%d]=%hd\n", i, s->w[i]);
  }

  printf("\nint j=%d\n\n", s->j);
  printf("vetor c[3]\n");
  for (i = 0; i < n; i++) {
    printf("c[%d]=%c\n", i, s->c[i]);
  }
}

int main() {
  s2 s; //Estrutura s2
  short v[3] = {1, 2, 3};   // Vetor de shorts a copiar
  int j = 1337;             // Inteiro a copiar
  char c[3] = {'Z', 'X', 'C'};  //Vetor de chars a copiar
  save_data(&s, v, j, c);       //Copiar os dados para a estrutura
  printstruct(&s);              //Imprimir a estrutura
  return 0;
}