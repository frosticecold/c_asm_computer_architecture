#include "compress_shorts.h"
#include <stdio.h>
int main() {

  const int vecSize = 6;
  short vecS[6] = {10, 10, 8, 8, 4, 2};
  int vecI[3] = {0};

  compress_shorts(vecS, vecSize, vecI);
  int i;
  printf("{");
  int vecIsize = vecSize / 2;
  // Expected output is 655370 524296 262146
  for (i = 0; i < vecIsize; i++) {
    printf("%d%s", vecI[i], (i < (vecIsize - 1)) ? ", " : "}\n");
  }

  const int vs2size = 10;
  short vs2[10] = {10, 10, 4, 4, 2, 2, 6, 6, 3, 3};
  int vi2[5] = {0};

  compress_shorts(vs2, vs2size, vi2);
  printf("{");
  int vi2size = (vs2size / 2);
  // Expected output is 655370 262148 131074 393222 196611
  for (i = 0; i < vi2size; i++) {
    printf("%d%s", vi2[i], (i < (vi2size - 1)) ? ", " : "}\n");
  }

  return 0;
}