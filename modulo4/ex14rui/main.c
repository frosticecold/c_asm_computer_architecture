#include <stdio.h>
#include "asm.h"
#include "mixedsum.h"
#include "join_bits.h"
char str[33];

int main(){
    int a = 1000;
    int b = 255;
    int pos = 4;
    int result = join_bits_asm(a,b,pos);
    printf("%d\n",result);

    printf("%d\n",join_bits_asm(255,1000,pos));
    
    int mixedsum = mixed_sum(a,b,pos);
    printf("%d\n",mixedsum);
    
    return 0;
}