#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
  
  push(21);
  push(22);
  push(23);
  display();
  size();

  int res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();
  res = pop();
  printf("Popped value: %d\n",res);
  display();
  size();

  
  return 0;
}