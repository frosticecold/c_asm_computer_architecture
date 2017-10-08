#include "power_ref.h"
#include <stdio.h>

void power_ref(int *x, int y) {
  int i;
  //Vamos guardar o valor inicial de x para multiplicar
  //Sucessivamente
  int b = *x;
  for (i = 1; i < y; i++) {
    *x = *x * b;
  }
}