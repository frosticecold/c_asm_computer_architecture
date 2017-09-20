#include <stdio.h>
#define BYTE_TO_BITS 8

void var_sizes() {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of Char: %i bits\n", sizeof(c)*BYTE_TO_BITS);
    printf("Size of Int: %i bits\n", sizeof(i)*BYTE_TO_BITS);
    printf("Size of Long Int: %i bits\n", sizeof(li)*BYTE_TO_BITS);
    printf("Size of Float: %i bits\n", sizeof(f)*BYTE_TO_BITS);
    printf("Size of Double: %i bits\n\n", sizeof(d)*BYTE_TO_BITS);
}