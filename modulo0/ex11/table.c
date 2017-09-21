#include "coef.h"
#include <stdio.h>

void create_table() {
  int t = 0, i, f, d = 10;
  for (i = 0; i < d; i++) {
    for (f = 0; f < d; f++) {
      t = coef(i, f);
      if (t != 0) {
        printf("%d ", t);
      }
    }
    printf("\n");
  }
}