#include <stdio.h>
#include "asm.h"

int main(){

    //int vec[5] = {-1,1,-2,2,-3};
    int vec[5] = {-1,-2,-1,-1,-2};
    int num = 5;
    int result = vec_count_bits_zero(vec,num);

    printf("Result:%d\n",result);
}