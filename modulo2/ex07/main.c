#include "asm.h"
#include <stdio.h>
// 00001010
char ch1 = 10;
// 00001010
char ch2 = 10;
// Numero junto 00001010 00001010
// Resultado 2570

short op1 = 0, op2 = 0;

short num = 0, res = 0;
int main() {
  op1 = 10; // 0000 0000 0000 1010
  op2 = 20; // 0000 0000 0001 0100
  // Result
  // 0000 0000 + 0001 0100 = 0001 0100 High byte
  // 0000 1010 + 0000 0000 = 0000 1010 low byte
  // 0001 0100 0000 1010 = 5130
  printf("Para op1=%d e op2=%d\n",op1,op2);
  short int result = crossSumBytes();
  printf("CrossSumBytes: %hd\n", result);

  op1 = 1000; // 0000 0011 1110 1000
  op2 = 2000; // 0000 0111 1101 0000
  // HB:0000 0011 + 1101 0000 = 1101 0011
  // LB: 1110 1000 + 0000 0111 = 1110 1111
  // Result: 1101 0011 1110 1111
  // Vai ser negativo
  //-11281
  printf("\nPara op1=%d e op2=%d\n",op1,op2);
  result = crossSumBytes();
  printf("CrossSumBytes: %hd\n", result);
}