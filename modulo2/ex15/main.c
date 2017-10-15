#include "asm.h"
#include <stdio.h>

int op1=0, op2=0;
int main() {

   // A + B
   op1=10;
   op2=5;
   int result = sum();
   printf("Sum: %d + %d: ",op1,op2);
   printf("%d\n",result);

   // A - B
   op1=10;
   op2=50;
   result = subtract();
   printf("Subtract: %d - %d: ",op1,op2);
   printf("%d\n",result);

   // A * B
   op1=10;
   op2=5;
   result = multiply();
   printf("Multiply: %d * %d: ",op1,op2);
   printf("%d\n",result);

   // A / B
   op1=10;
   op2=6;
   result = divide();
   printf("Division: %d / %d: ",op1,op2);
   printf("%d\n",result);

   // A % B
   op1=10;
   op2=3;
   result = modulus();
   printf("Modulus: %d %% %d: ",op1,op2);   
   printf("%d\n",result);
}