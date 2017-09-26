#include <stdio.h>

int main() {

  int x = 5;
  int *xPtr = &x;
  float y = *xPtr + 3;
  int vec[] = {10, 11, 12, 13};

  // The value of x and y
  printf("The value of x: %d\n", x);
  printf("The value of y: %f\n", y);

  // The address(in Hexadecimal) of x and xptr;
  printf("The address of x (hex): %p\n", &x);
  printf("The address of xPtr (hex): %p\n", xPtr);

  // The value pointed by xptr
  printf("The value pointed by xptr: %d\n", *xPtr);

  // The address of vec
  printf("The address of vec: %p\n", vec);

  // The values of
  // vec[0],vec[1],vec[2],vec[3]
  int vecSize = 4;
  int i = 0;
  for (i = 0; i < vecSize; i++) {
    printf("vec[%d]= %d \n", i, vec[i]);
  }
  printf("\n=========\n\n");
  // The addresses of
  // vec[0], vec[1],vec[2] and vec[3]
  i = 0;
  for (i = 0; i < vecSize; i++) {
    printf("Address of vec[%d]= %p \n", i, &vec[i]);
  }
  printf("\n");

  /*
  A) Analyze the information that appears on the screen.

  *Valor de X
  The value of x: 5

  *Valor de Y
  The value of y: 8.000000

  *Endereço de memória da variável x
  The address of x (hex): 0xbff563d8

  *Endereço de memória ao qual o apontador xPtr aponta
  Neste caso aponta para o mesmo endereço de memória que x
  The address of xPtr (hex): 0xbff563d8

  *
  O valor para qual o apontador xPtr aponta
  The value pointed by xptr: 5

  *Endereço de memória de vector
  Neste caso aponta para o primeiro elemento do vetor
  The address of vec: 0xbff563ec

  *Valores desde cada índice de vec
  vec[0]= 10
  vec[1]= 11
  vec[2]= 12
  vec[3]= 13

  =========

  *Endereço de memória de cada elemento de vec
  Neste caso como são valores inteiros, a memória
  reservada para cada inteiro do vetor são 4 bytes
  Address of vec[0]= 0xbff563ec
  Address of vec[1]= 0xbff563f0
  Address of vec[2]= 0xbff563f4
  Address of vec[3]= 0xbff563f8

  */

  /*
  B)Explain the relationship between the addresses of vec, vec[0],vec[1] and
  vec[2]

    *Endereço de memória de cada elemento de vec
  Neste caso como são valores inteiros, a memória
  reservada para cada inteiro do vetor são 4 bytes de memória reservada
  Address of vec[0]= 0xbff563ec
  Address of vec[1]= 0xbff563f0
  Address of vec[2]= 0xbff563f4
  Address of vec[3]= 0xbff563f8

  */

  /*
  C) If the program was run in different  computers,
  would you expect to see the same  or different addresses of the variables?

  Nós esperaríamos endereços de memória diferentes
  */
  return 0;
}