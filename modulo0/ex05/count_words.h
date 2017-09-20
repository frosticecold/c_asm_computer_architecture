#include <stdio.h>
#include <string.h>

int count_words(char *str) {
  int count = 0, i;
  if (str[0] != '\0') {
    for (i = 0; str[i] != '\0'; i++) {
      if (str[i] == ' ') {
        count++;
      }
    }
  }
  if (count > 0) {
    count++;
  }
  return count;
}