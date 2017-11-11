#include <stdio.h>
#include "asm.h"
#include "activate_bits.h"
#include "int2bin.h"
char str[33];
int main(){
    int a,left,right;
    a=12;
    left = 6;
    right = 4;
    int result =activate_bits(a,left,right);
    printf("====C====\n");
    printf("Número:%d\n",result);
    int2bin(result,str,32);
    printf("%s\n",str);
    printf("====ASM====\n");
    result = activate_bits_asm(a,left,right);
    int2bin(result,str,32);
    printf("%s\n",str);
    printf("Número:%d\n",result);

    result = activate_invert_bits(a,left,right);
    int2bin(result,str,32);
    printf("%s\n",str);
    printf("Número:%d\n",result);
}