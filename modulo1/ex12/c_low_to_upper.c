#include "c_low_to_upper.h"
#include <stdio.h>

#define difFromLowerCharUpperChar 'a' - 'A';

void lstous(char *str) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= difFromLowerCharUpperChar;
    }
    i++;
  }
}

void lstous_pointer(char *str) {
  while (*str != '\0') {
    if (*str >= 'a' && *str <= 'z') {
      *str -= difFromLowerCharUpperChar;
    }
    str++;
  }
}