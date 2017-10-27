#include <stdio.h>
#include "asm.h"
short int x;
int num=5;
short int array[] = {1,2,3,4,5};
short int* ptrvec;
int main() {
    x=0;
    ptrvec=array;
    short int * result = vec_search();
    printf("O apontador é recebido por assembly é:%p\n",result);
    printf("O apontador para o valor em C é:%p\n",&array[2]);

    return 0;
}