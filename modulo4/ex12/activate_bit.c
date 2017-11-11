#include "activate_bit.h"
#include <stdio.h>
#define INT_BITS 32
int activate_bit(int *ptr, int pos){
    
    int modified = 0;
    int mask = (1 << pos);
    if((*ptr & mask) == 0){
        modified = 1;
    }
    *ptr = *ptr | mask;
    return modified;
}