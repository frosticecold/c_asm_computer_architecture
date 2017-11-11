#include <stdio.h>
#include "activate_bits.h"

int activate_bits(int a, int left, int right){

    int left_part = 1;
    left_part = (left_part << 31);
    left_part = (left_part >> (31-left));

    int right_part = 1;
    right_part = (right_part << 31);
    right_part = (right_part >> (31-right+1));
    right_part = ~right_part;

    int mask = (left_part | right_part);

    return (a | mask);
}