#include "sort_without_reps.h"
#include "array_sort.h"

int verify_if_repeated(int num, int *vec, int n) {
  int isRepeated = 0;

  int i;
  for (i = 0; i < n; i++) {
    if (vec[i] == num) {
      isRepeated = 1;
      break;
    }
  }

  return isRepeated;
}

int sort_without_reps(int *src, int n, int *dest) {

  int index = 0;

  int i;
  for (i = 0; i < n; i++) {
    if (verify_if_repeated(src[i], dest, n) == 0) {
      dest[index] = src[i];
      index++;
    }
  }
  if (index > 0) {
    array_sort(dest, index);
  }
}
