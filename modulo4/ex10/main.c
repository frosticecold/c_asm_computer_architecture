#include <stdio.h>
#include "asm.h"

#define INT_BITS (8*sizeof(int))

int count_bits_zero_c(int x) {
    int i, snum, res, count = 0;
    for(i=0; i<=INT_BITS;i++) {
        snum = x >> i;
        res = snum & 1;
        if(res==0) count++;
    }
    return count;
}

int main(){
    int x = 765;
    int res = count_bits_zero_assembly(x);
    printf("%d\n",res);

    res = count_bits_zero_c(x);
    printf("%d\n",res);
    return 0;
}