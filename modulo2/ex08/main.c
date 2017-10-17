#include "asm.h"
#include <stdio.h>

char op8 = 0;
short op16 = 0;
int op32a=0,op32b=0;


int main() {

    //0111 1111
    //op1= 127;

    //0111 1111 1111 1111
    //op2= 32767;

    //0000 0000 0000 0000 0010 0111 0001 0000
    //op3=100000;

    //0000 0000 0000 0000 1100 0011 0101 0000
    //op4=200000;

    // op1 + op2 - op3 + op4
    op8 = 127;
    op16 = 30767;
    //op8 + op16 = 30894
    //100 0000
    op32a = -2147483647;
    op32b = 2147483647;
    //Vai estourar
    long long result = specialsum();

    printf("%lld\n",result);

    op8=127;
    op16=30000;
    op32a=-100000;
    op32b=2147483647;
    //Resultado
    // 127 + 30000 - (-100000) + 2147483647 =
    // 30127 + 100 000 + 2 147 483 647
    // R= 2147613774
    result = specialsum();
    printf("%lld\n",result);

}