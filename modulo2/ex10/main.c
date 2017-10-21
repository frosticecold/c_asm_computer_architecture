#include "asm.h"
#include <stdio.h>

int op32a = 0, op32b = 0;

int main() {

  /*Soma de dois ints signed
  */
  op32a = 100000;
  op32b = 200000;
  // Resultado 300 000
  printf("A verificar se flags de carry ou overflow são ativas:\n");
  printf("-1 Overflow\n");
  printf("-2 Carry \n");

  int result = sum2intscheck();
  printf("\nPara %d e %d\n",op32a,op32b);
  printf("%d\n", result);

  op32a = 500000;
  op32b = 10000;
  // Rsultado 510 000s
  result = sum2intscheck();
  printf("\nPara %d e %d\n",op32a,op32b);
  printf("%d\n", result);

  op32a = 2147483647;
  op32b = 10;
  //2147483647 + 10
  //Existe overflow, a flag vai ativar
  result = sum2intscheck();
  printf("\nPara %d e %d\n",op32a,op32b);
  printf("%d\n", result);

  op32a = -2147483647;
  op32b = -1;
  //-2147483647 - 1
  //Aqui vai dar carry
  result = sum2intscheck();
  printf("\nPara %d e %d\n",op32a,op32b);
  printf("%d\n", result);

}