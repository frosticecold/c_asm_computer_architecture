#include "asm.h"
#include <stdio.h>

int main() {

    char str1[MAX_CHAR] = "Uma bola duas bolas";
    char str2[MAX_CHAR];
    ptr1=str1;
    ptr2=str2;
    str_copy_p();
    printf("ptr1: %s\nptr2: %s\n",ptr1,ptr2);
}