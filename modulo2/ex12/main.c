#include "asm.h"
#include <stdio.h>


int main() {

    printf("Comprimento = 10, Largura = 20 (declarado em assembly)\n");
    int result = getArea();
    printf("A área é do rectangulo:%d\n",result);
}