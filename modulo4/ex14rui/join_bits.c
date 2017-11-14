#include "join_bits.h"
#include <stdio.h>
#define INT_BITS 32

int join_bits(int a,int b, int pos) {
    
    int tb = b>>pos;                            // shift para a direita para manter os bits que serao apresentados
    int ta = a<<(INT_BITS-pos);                 // shift para a esquerda para remover os bits que nao interessam
    int tc = (unsigned int)ta>>(INT_BITS-pos);  // shift logico para a direita para ser possivel fazer OR
    return tc | tb<<pos;

}