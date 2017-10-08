#include "increment_sets.h"

/*
    Function that verify if
    V(i) < V(i+1) < V(i+2)
    and increments the number of triple condition found
*/
int verify_condition(int *str, int n) {
  int i, count = 0;
  for (i = 0; i < n - 2; i++) {
    if (*(str + i + 1) > *(str + i) && *(str + i + 2) > *(str + i + 1)) {
      increment_number_of_triple_condition(&count);
    }
  }
  return count;
}