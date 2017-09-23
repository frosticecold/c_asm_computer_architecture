#include "coef.h"
#include <stdio.h>
void createPascalTriangle(int n, int k) {
  int space;
  //Número da linha
  //Um triângulo de pascal tem n+1 linhas
  for (int i = 0; i <= n; i++) {
    //Vamos imprimir o espaçamento 
    //Necessário para centrar os números
    for(space = 1; space <= n-i; space++){
      printf("  ");
    }
    //Número da coluna
    for (int j = 0; j <= k; j++) {
      //Vamos calcular o coeficiente
      int cf = coef(i, j);
      //Se for diferente de zero vamos escrever
      if (cf != 0) {
        printf("%4d ", cf);
      }
    }
    printf("\n");
  }
}