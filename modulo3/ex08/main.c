#include "asm.h"
#include <stdio.h>

int num, even;
int main() {
    int res = 0;
    even=10;
    
    res = test_even();
    printf("even:%d\n", res);       

    even=9;
    
    res = test_even();
    printf("even:%d\n", res);

    even=1928;
    
    res = test_even();
    printf("even:%d\n", res);

    even=0;
    
    res = test_even();
    printf("even:%d\n", res);

    even=1919;
    
    res = test_even();
    printf("even:%d\n", res);

    int vtr[] = {1,2,3,4,5,6};
    num = 6;
    ptrvec = vtr;
    res = vec_sum_even();
    printf("vec sum even: %d\n", res);

    int vtr1[] = {2,1,1,1,1,1};
    num = 6;
    ptrvec = vtr1;
    res = vec_sum_even();
    printf("vec sum even: %d\n", res);
}
