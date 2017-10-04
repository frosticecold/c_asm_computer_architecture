#include <stdlib.h>
#include <time.h>

/*
    Fills an array with pseudo random values
*/
void fill_array(int *vec, int n) {
  int i;
  const int MAX_VALUE = 21;
  srand(time(NULL));
  for (i = 0; i < n; i++) {
    vec[i] = (rand() % MAX_VALUE);
  }
}