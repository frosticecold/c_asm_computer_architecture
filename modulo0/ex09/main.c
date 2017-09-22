#include "media.h"
#include <stdio.h>

int main() {
  double v[] = {1, 2};
  double r = 0;
  double av = 0;
  double vm = 0;
  r = media(v[0], v[1]);
  av = average_vetor(v, 2);
  vm = media_vetor_g();
  printf("media =%.2f\n", r);
  printf("average=%.2f\n", av);
  printf("media vetor g=%.2f\n", vm);
  return 0;
}