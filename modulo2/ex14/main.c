#include "asm.h"
#include <stdio.h>

int op=0;
int main() {

   // A + (B * C) / D
   op=1000;
   printf("Para ((((((%d -1) * 3) + 12) / 3) + 5) - %d) \n",op,op);
   int result = function();
   printf("Resultado: %d\n",result); // resultado é 8

   op = 2000;
   printf("\nPara ((((((%d -1) * 3) + 12) / 3) + 5) - %d) \n",op,op);
   result = function();
   printf("Resultado: %d\n",result); // resultado é 8
}