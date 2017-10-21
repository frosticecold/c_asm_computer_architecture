#include "asm.h"
#include <stdio.h>

int op=0;
int main() {

   // A + (B * C) / D
   op=1000;
   
   int result = function();
   printf("%d\n",result); // resultado é 8

   op = 2000;
   result = function();
   printf("%d\n",result); // resultado é 8
}