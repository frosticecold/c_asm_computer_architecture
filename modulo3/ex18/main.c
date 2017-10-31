#include <stdio.h>
#include "asm.h"
int num = 10;
int array[10] = {1,2,3,4,3,2,1,2,3,4};
int* ptrvec = array;
int main(){

    int result = count_seq();
    printf("O resultado é:%d\n",result);

    return 0;
}