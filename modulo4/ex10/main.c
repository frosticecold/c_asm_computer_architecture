#include <stdio.h>
#include "asm.h"
int main(){
    int x = 765;
    int res = count_bits_zero_assembly(x);
    printf("%d\n",res);
    return 0;
}