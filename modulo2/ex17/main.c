#include "asm.h"
#include <stdio.h>

int current=0;
int desired=0;
int main() {

    current = 12;
    desired = 16;    
    int result = function();


    printf("Current: %d Desired: %d Time: %d sec\n",current, desired,result);

    current = 18;
    desired = 14;    
    result = function();


    printf("Current: %d Desired: %d Time: %d sec\n",current, desired,result);
}