#include "asm.h"
#include <stdio.h>

unsigned char op8 = 0;
unsigned short op16 = 0;
unsigned int op32a=0,op32b=0;


int main() {

    op8 = 127;
    op16 = 30767;   //op8 + op16 = 30894
    op32a = 30000;  //30894 - 30000 = 894
    op32b = 4294967295;  //894 + 4294967295 = 4294968189
    unsigned long long result = specialsumunsig();    // op1 + op2 - op3 + op4
    printf("Para %u + %u - %u + %u\n",op8,op16,op32a,op32b);
    printf("%llu\n",result);

    op8=127;
    op16=30000;
    op32a=100000;
    op32b=2147483647;
    //Resultado
    // 127 + 30000 - 100000 + 2147483647 = erro
    //  -69873 + 2147483647 = erro, número negativo
    // função vai retornar zero, não garante números negativos
    printf("\nPara %u + %u - %u + %u\n",op8,op16,op32a,op32b);
    result = specialsumunsig();
    printf("%llu\n",result);

}