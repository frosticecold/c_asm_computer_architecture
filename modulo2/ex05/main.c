#include <stdio.h>
#include "asm.h"

short num = 16385;
short res = 0;
int main(){

    //O número após troca tem que ser 320
    
    printf("Número antes da troca:%d\n",num);
    res = swapBytes();
    //Supostamente para 16385 é 320
    printf("Número após a troca é:%d\n",res);


}