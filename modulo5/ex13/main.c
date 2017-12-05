#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
  
  // Guardar na stack o numero 21
  push(21);
  // Guardar na stack o numero 22
  push(22);
  // Guardar na stack o numero 23
  push(23);
  // Apresentar a estrutura
  display();
  // Apresentar o tamanho da estrutura
  size();

  // Remover da stack o numero 23
  int res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();

  // Remover da stack o numero 22  
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();
  
  // Remover da stack o numero 21
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();
  
  // Stack vazia  
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();

  
  return 0;
}