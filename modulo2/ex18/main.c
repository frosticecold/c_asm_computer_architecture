#include "asm.h"
#include <stdio.h>

int op=0;
int main() {

    op = 12;
    int result = function();


    printf("Num: %d Result: %d\n",op, result);

    op = -20;
    result = function();

    printf("Num: %d Result: %d\n",op, result);

    op = 11;
    result = function();


    printf("Num: %d Result: %d\n",op, result);

    op = -21;
    result = function();


    printf("Num: %d Result: %d\n",op, result);




}