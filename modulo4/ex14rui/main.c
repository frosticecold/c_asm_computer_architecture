#include <stdio.h>
#include "asm.h"
#include "join_bits.h"
#include "int2bin.h"
char str[33];

int main(){
    int a = 1000;
    int b = 255;
    int pos = 4;
    int result = join_bits_asm(a,b,pos);
    printf("%d\n",result);
    
/*     int result = join_bits(a,b,pos);
    //a) 0000 0000 0000 0000 0000 0011 1110 1000
    //b) 0000 0000 0000 0000 0000 0000 1111 1111
    // 0000 0000 0000 0000 0000 0000 1111 1000
    printf("%d",result); */

    
    return 0;
}