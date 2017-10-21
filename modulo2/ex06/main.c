#include "asm.h"
#include <stdio.h>
//0000 1010  
char ch1 = 10;
//0000 1010
char ch2= 10;

short num = 0, res = 0;
int main() {

    //Numero junto 00001010 00001010
    //Resultado 2570
    res= concatBytes();
    printf("O resultado do teste 1:%hd\n",res);

    //00001011
    ch1= 11;
    //00001100
    ch2= 12;
    //Resultado 00001011 00001100
    //2828
    res= concatBytes();
    printf("O resultado do teste 2:%hd\n",res);
}