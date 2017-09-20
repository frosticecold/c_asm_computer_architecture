#include "media.h"
#include <stdio.h>

int main() {
  double v[] = {1, 2};
  double r = 0;
  double av = 0;
  r = media(v[0], v[1]);
  av = average_vetor(v, 2);
  printf("media =%f\n", r);
  printf("average=%f\n", av);
  return 0;
}