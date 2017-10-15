#include "asm.h"
#include <stdio.h>

int i=2;
int main() {

    
    int result = function();
    //Para i=2 a=10, b = 5;
    // 1*2
    // 2 + (2*2)
    // 6
    printf("Para i=%d: %d\n",i,result);

    i=3;
    result = function();
    //6 + (3*2)
    // 12
    printf("Para i=%d: %d\n",i,result);
    
    i=4;
    result = function();
    //12 + (4*2)
    // 20
    printf("Para i=%d: %d\n",i,result);
}