#include "asm.h"
#include <stdio.h>

int op1=0, op2=0;
int main() {

   // A + B
   op1=10;
   op2=5;
   int result = sum();
   printf("%d\n",result);

   // A - B
   op1=10;
   op2=5;
   result = subtract();
   printf("%d\n",result);

   // A * B
   op1=10;
   op2=5;
   result = multiply();
   printf("%d\n",result);

   // A / B
   op1=10;
   op2=5;
   result = divide();
   printf("%d\n",result);

   // |A|
   //op1=10;
   //int result = sum();
   //printf("%d\n",result);
}