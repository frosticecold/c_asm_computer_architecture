#include "asm.h"
#include <stdio.h>

short current=0;
short desired=0;
int main() {

    current = 12;
    desired = 16;    
    int result = function();


    printf("Current: %d Desired: %d Time: %d sec\n",current, desired,result);

    current = 18;
    desired = 14;    
    result = function();


    printf("Current: %d Desired: %d Time: %d sec\n",current, desired,result);

    current = 30;
    desired = 900;    
    result = function();


    printf("Current: %d Desired: %d Time: %d sec\n",current, desired,result);
}