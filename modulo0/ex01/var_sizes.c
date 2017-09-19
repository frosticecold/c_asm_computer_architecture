#include <stdio.h>

void var_sizes() {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of Char: %i bits\n", sizeof(c)*8);
    printf("Size of Int: %i bits\n", sizeof(i)*8);
    printf("Size of Long Int: %i bits\n", sizeof(li)*8);
    printf("Size of Float: %i bits\n", sizeof(f)*8);
    printf("Size of Double: %i bits\n\n", sizeof(d)*8);
}