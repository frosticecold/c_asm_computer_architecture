#include "asm.h"
#include <stdio.h>
//00001010  
char ch1 = 0xA;
//00001010
char ch2= 0xA;
//Numero junto 00001010 00001010
//Resultado 2570
short num = 0, res = 0;
int main() {

   res= concatBytes();
   printf("O resultado é:%hd\n",res);

   //00001011
   ch1= 0xB;
   //00001100
   ch2= 0xC;

   //Resultado 00001011 00001100
   //2828
   res= concatBytes();
   printf("O resultado é:%hd\n",res);
}