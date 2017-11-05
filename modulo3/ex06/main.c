#include "asm.h"
#include <stdio.h>

int main() {
    char str1[16] = "password manhosa";
    int res;
    ptr1=str1;
    printf("ptr1 não encriptada \"%s\"\n",str1);
    res = encrypt();
    printf("ptr1 encriptada: \"%s\" caracteres alterados: %d\n", str1, res);

}
