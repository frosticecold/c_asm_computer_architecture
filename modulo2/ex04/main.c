/***********************main.c***********************/ 
#include <stdio.h>
#include "asm.h"

    int op1 = 0,
        op2 = 0, 
        op3 = 0,  res = 0;

int main(void) {
  printf("Valor op1:");
  scanf("%d", &op1);
  printf("Valor op2:");
  scanf("%d", &op2);
  printf("SubConst = %d:0x%x\n", subconst(), subconst());

  return 0;
}
