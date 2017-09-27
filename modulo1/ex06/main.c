#include "power_ref.h"
#include <stdio.h>

int main() {

  int x = 3, y = 5;
  printf("Vamos calcular %d elevado a %d\n", x, y);
  power_ref(&x, y);
  printf("O valor de x é: %d\n", x);

  x = 9, y = 5;
  printf("Vamos calcular %d elevado a %d\n", x, y);
  power_ref(&x, y);
  printf("O valor de x é: %d\n", x);

  return 0;
}