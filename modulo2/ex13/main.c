#include "asm.h"
#include <stdio.h>

int a=0,b=0,c=0,d=0;
int main() {

   // A + (B * C) / D
   a= 10;
   b= 100;
   c= 100;
   d= 5;
   // 10 + (100*100) / 5 = 2010
   int result = function();
   printf("%d + ( %d * %d ) / %d = %d\n",a,b,c,d,result);

   a=1000;
   b=5000;s
   c=3500;
   d=10;
   // 10000 + (5000*3500) / 10 = 1751000
   result = function();
   printf("%d + ( %d * %d ) / %d = %d\n",a,b,c,d,result);


   //Overflow
   //1000 0000 + (500 0000*60 0000) / 10 = 3.0 * 10 ^11
   //Resultado = -1
   a=10000000;
   b=5000000;
   c=600000;
   d=10;
   result=function();
   printf("%d + ( %d * %d ) / %d = %d\n",a,b,c,d,result);

   a= 1000;
   b= 10;
   c = 10;
   d = -5;
   result=function(); // 1000 + (10*10) / -5 = 1000 - -20 = 980
   printf("%d + ( %d * %d ) / %d = %d\n",a,b,c,d,result);
}