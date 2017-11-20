#include "changes.h"
#include <stdio.h>
#define num 4
int main() {

  int vec[num] = {3328, 2304, 2816, 2304};
  changes_vec(vec, num);

  int i;
  for (i = 0; i < num; i++) {
    printf("%d\n", vec[i]);
  }
  return 0;
}