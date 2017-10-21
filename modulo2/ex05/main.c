#include <stdio.h>
#include "asm.h"

short int num = 16385;
short int res = 0;

int main(){

    printf("\nCaso de teste 1: \n");
    //O número após troca tem que ser 320
    // 16385
    //Em binário : 0100 0000 0000 0001
    printf("Número antes da troca:%hd\n",num);
    res = swapBytes();
    //Supostamente para 16385 é 320
    // Em binário : 0000 0001 0100 0000
    printf("Número após a troca é:%hd\n",res);

    printf("\nCaso de teste 2:\n");
    num = 20000;
    // 20000
    //Em binário : 0100 1110 0010 0000
    printf("Número antes da troca:%hd\n",num);
    res = swapBytes();
    //Após a troca
    //Res em binário : 0010 0000 0100 1110
    //Resultado = 8270
    printf("Número após a troca é:%hd\n",res);

}