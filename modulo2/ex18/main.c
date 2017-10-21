#include "asm.h"
#include <stdio.h>

int num=0;
int main() {

    num = 12;
    int result = function();


    printf("Num: %d Result: %d\n",num, result);

    num = -20;
    result = function();

    printf("Num: %d Result: %d\n",num, result);

    num = 11;
    result = function();


    printf("Num: %d Result: %d\n",num, result);

    num = -21;
    result = function();


    printf("Num: %d Result: %d\n",num, result);


    num = 0;
    result = function();


    printf("Num: %d Result: %d\n",num, result);

}
