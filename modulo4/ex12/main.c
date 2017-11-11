#include <stdio.h>
#include "asm.h"
#include "activate_bit.h"
int main(){
    int num, nrbits,result;
    printf("======C:======\n");
    num = 0x0000000F;
    nrbits = 4;
    result = activate_bit(&num,nrbits);
    printf("Num %d Modificado %d\n",num,result);

    num = 0x0000000F;
    nrbits = 2;
    result = activate_bit(&num,nrbits);
    printf("Num %d Modificado %d\n",num,result);

    printf("\n======ASM:======\n");
    num = 0x0000000F;
    nrbits = 2;
    result = activate_bit_asm(&num,nrbits);
    printf("Num %d Modificado %d\n",num,result);
    num = 0x0000000F;

    num = 0x0000000F;
    nrbits = 4;
    result = activate_bit_asm(&num,nrbits);
    printf("Num %d Modificado %d\n",num,result);
    num = 0x0000000F;

    printf("\n======ASM: 2 BITS======\n");
    num = 0x0000000F;
    nrbits = 2;
    activate_2bits(&num,nrbits);
    printf("Num %d\n",num);
    num = 0x0000000F;

    num = 0x000000FF;
    nrbits = 4;
    activate_2bits(&num,nrbits);
    printf("Num %d\n",num);
}