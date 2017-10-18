#include "functions.h"

int r = 0;
int g = 0;

int cf() {
  if (i == j)
    h = i - j;
  else
    h = i + j;
  return h;
}

int cf2() {
  if (i <= j)
    i = i + 1;
  else
    j = j + 1;
  h = i * j;
  return h;
}

int cf3() {
  if (i >= j) {
    h = i + j;
    g = i + 1;
  } else {
    h = i * j;
    g = i + j + 2;
  }
  r = h / g;
  return r;
}

int cf4() {
  if (i + j > 10)
    h = 2 * i;
  else
    h = j / 3;
  return h;
}