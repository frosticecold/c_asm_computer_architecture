#include <stdio.h>
#include <limits.h>
void var_sizes() {
    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("Size of Char: %i bits\n", sizeof(c)*CHAR_BIT);
    printf("Size of Int: %i bits\n", sizeof(i)*CHAR_BIT);
    printf("Size of Long Int: %i bits\n", sizeof(li)*CHAR_BIT);
    printf("Size of Float: %i bits\n", sizeof(f)*CHAR_BIT);
    printf("Size of Double: %i bits\n\n", sizeof(d)*CHAR_BIT);
}