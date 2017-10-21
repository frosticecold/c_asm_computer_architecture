#include "asm.h"
#include <stdio.h>

int op32a = 0, op32b = 0;

int main() {
  op32a = 100000;  
  op32b = 200000;// op32a + op32b = 300 000 Em binário: 0100 1001 0011 1110 0000      
  printf("Para %d + %d \n",op32a,op32b);        
  long long result = sum2ints();// Resultado 300 000
  printf("Resultado: %lld\n", result);
  
  op32a = 2147483647;// 0111 1111 1111 1111 1111 1111 1111 1111
  op32b = 10000;// 0000 0000 0000 0000 0010 0111 0001 0000
  printf("\nPara %d + %d \n",op32a,op32b);      
  result = sum2ints(); // Resultado da soma 0000 0000 0000 0000 0000 0000 0000 0000 1000 0000 0000 0000 0010 0111 0000 1111
  printf("Resultado: %lld\n", result);
  
  op32a = 2147483647;
  op32b = 2147483647;
  //2147483647 + 2147483647
  //4294967294 Em binário : 1111 1111 1111 1111 1111 1111 1111 1110
  printf("\nPara %d + %d \n",op32a,op32b);      
  result = sum2ints(); //Resultado 0000 0000 0000 0000 0000 0000 0000 0000 1111 1111 1111 1111 1111 1111 1111 1110
  printf("Resultado: %lld\n", result);
}