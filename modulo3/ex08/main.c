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
}
