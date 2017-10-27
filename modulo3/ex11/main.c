#include <stdio.h>
#include "asm.h"
int num=5;
long int array[] = {9,12,15,8,14};
long int* ptrvec;
int main() {
    ptrvec=array;
    int res = vec_greater10();
    printf("Existem %d elementos do vetor maior que 10.\n",res);

    return 0;
}