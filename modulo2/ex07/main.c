#include "asm.h"
#include <stdio.h>
//00001010  
char ch1 = 10;
//00001010
char ch2= 10;
//Numero junto 00001010 00001010
//Resultado 2570

short op1=0, op2=0;

short num = 0, res = 0;
int main() {
    //0000 0000 0000 1010
    op1=10;
    //0000 0000 0001 0100
    op2=20;
    //Result
    //0000 0000 + 0001 0100 = 0001 0100 High byte
    //0000 1010 + 0000 0000 = 0000 1010 low byte
    // 0001 0100 0000 1010 = 5130
    short int result = crossSumBytes();
    printf("%hd\n",result);

    //0000 0011 1110 1000
    op1=1000;
    //0000 0111 1101 0000
    op2=2000;
    //HB:0000 0011 + 1101 0000 = 1101 0011
    //LB: 1110 1000 + 0000 0111 = 1110 1111
    //Result: 1101 0011 1110 1111
    //Vai ser negativo
    //-11281
    result = crossSumBytes();
    printf("%hd\n",result);


}