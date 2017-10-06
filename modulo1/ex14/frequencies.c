#include <stdio.h>

void frequencies(float *grades, int n, int *freq) {
  int vec[n], i, j, f = 21;

  //Parte inteira das notas
  for (i = 0; i < n; i++) {
    vec[i] = (int)grades[i];
  }

  //Frequencia de cada valor 0-20
  for (i = 0; i < n; i++) {
    for (j = 0; j < f; j++) {
      if (vec[i] == j) {
        freq[j]++;
      }
    }
  }
}