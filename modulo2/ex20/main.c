#include "functions.h"
#include "asm.h"

#include <stdio.h>

int i=0;
int j=0;
int h=0;
int main() {

    printf("Assembly\nf()\n");
    i = 101;
    j = 101;
    h = f();

    printf("I: %d J: %d H: %d\n",i, j, h);

    i = 101;
    j = 100;
    h = f();

    printf("I: %d J: %d H: %d\n",i, j, h);

    printf("\nf2()\n");

    i = -20;
    j = 49;
    h = f2();

    printf("I: %d J: %d H: %d\n",i, j, h);

    i = 243;
    j = 90;
    h = f2();

    printf("I: %d J: %d H: %d\n",i, j, h);

    printf("\nf3()\n");

    i = 27;
    j = 42;
    h = f3();

    printf("I: %d J: %d R: %d\n",i, j, h);

    i = 42;
    j = 27;
    h = f3();

    printf("I: %d J: %d R: %d\n",i, j, h);

    printf("\nf4()\n");
    
    i = 42;
    j = 27;
    h = f4();
    
    printf("I: %d J: %d R: %d\n",i, j, h);

    i = 2;
    j = 6;
    h = f4();
    
    printf("I: %d J: %d R: %d\n",i, j, h);

    printf("\n\nC\nf()\n");
    i = 101;
    j = 101;
    h = cf();

    printf("I: %d J: %d H: %d\n",i, j, h);

    i = 101;
    j = 100;
    h = cf();

    printf("I: %d J: %d H: %d\n",i, j, h);

    printf("\nf2()\n");

    i = -20;
    j = 49;
    h = cf2();

    printf("I: %d J: %d H: %d\n",i, j, h);

    i = 243;
    j = 90;
    h = cf2();

    printf("I: %d J: %d H: %d\n",i, j, h);

    printf("\nf3()\n");

    i = 27;
    j = 42;
    h = cf3();

    printf("I: %d J: %d R: %d\n",i, j, h);

    i = 42;
    j = 27;
    h = cf3();

    printf("I: %d J: %d R: %d\n",i, j, h);

    printf("\nf4()\n");
    
    i = 42;
    j = 27;
    h = cf4();
    
    printf("I: %d J: %d R: %d\n",i, j, h);

    i = 2;
    j = 6;
    h = cf4();
    
    printf("I: %d J: %d R: %d\n",i, j, h);

    /*
    Todas as quatro funções, tanto em Assembly como em C, estão a dar os resultados esperados/corretos.
    */

}