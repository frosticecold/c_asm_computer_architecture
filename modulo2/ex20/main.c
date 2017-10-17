#include "asm.h"
#include <stdio.h>

int i=0;
int j=0;
int result=0;
int main() {

    printf("f()\n");
    i = 101;
    j = 101;
    result = f();

    printf("I: %d J: %d H: %d\n",i, j, result);

    i = 101;
    j = 100;
    result = f();

    printf("I: %d J: %d H: %d\n",i, j, result);

    printf("\nf2()\n");

    i = -20;
    j = 49;
    result = f2();

    printf("I: %d J: %d H: %d\n",i, j, result);

    i = 243;
    j = 90;
    result = f2();

    printf("I: %d J: %d H: %d\n",i, j, result);

    printf("\nf3()\n");

    i = 27;
    j = 42;
    result = f3();

    printf("I: %d J: %d R: %d\n",i, j, result);

    i = 42;
    j = 27;
    result = f3();

    printf("I: %d J: %d R: %d\n",i, j, result);

    printf("\nf4()\n");
    
    i = 42;
    j = 27;
    result = f4();
    
    printf("I: %d J: %d R: %d\n",i, j, result);

    i = 27;
    j = 42;
    result = f4();
    
    printf("I: %d J: %d R: %d\n",i, j, result);

}