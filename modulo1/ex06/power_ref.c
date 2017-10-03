#include "power_ref.h"
#include <stdio.h>

void power_ref(int *x, int y) {
  int i;
  int b = *x;
  for (i = 1; i < y; i++) {
    *x = *x * b;
  }
}