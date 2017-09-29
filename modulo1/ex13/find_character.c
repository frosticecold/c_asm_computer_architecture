#include <string.h>

void find_character(char *str, char c, int *vec) {
  int i, j = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if (c == str[i]) {
      vec[j] = i;
      j++;
    }
  }
}