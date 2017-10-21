#include "asm.h"
#include <stdio.h>

int op32a = 0, op32b = 0;

int main() {

  op32a = 4;
  op32b = 2;

  char result = isMultiple();
  printf("Para %d/%d é multiplo?\n",op32a,op32b);
  printf("É multiplo:%d\n",result);

  op32a = 6;
  op32b = 3;

  result = isMultiple();
  printf("\nPara %d/%d é multiplo?\n",op32a,op32b);
  printf("É multiplo:%d\n",result);

  op32a = 7;
  op32b = 3;
  result = isMultiple();
  printf("\nPara %d/%d é multiplo?\n",op32a,op32b);
  printf("É multiplo:%d\n",result);


  op32a = 700000;
  op32b = -30000000;
  result = isMultiple();
  printf("\nPara %d/%d é multiplo?\n",op32a,op32b);
  printf("É multiplo:%d\n",result);
}