#include "join_bits.h"
#include <stdio.h>
#include "int2bin.h"
char str[33];
#define INT_BITS 32
int join_bits(int a,int b, int pos){

   int left_mask = (1 << (INT_BITS-1));
   left_mask = (left_mask >> (INT_BITS - pos - 1));
   int right_mask = ~left_mask;
   int2bin(left_mask,str,32);
   printf("%s\n",str);
   int2bin(right_mask,str,32);
   printf("%s\n",str);

   int a_masked = a & left_mask;
   int b_masked = b & right_mask;

   return a_masked | b_masked;

}