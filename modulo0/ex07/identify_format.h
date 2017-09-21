#include <stdio.h>

// Binary
int isPowerOfTwo(unsigned int x) {
  while (((x % 2) == 0) && x > 1) /* While x is even and > 1 */
    x /= 2;
  return (x == 1);
}

// Hex
int validate_hex(const char *hex) {
  while (*hex != 0) {
    if (*hex < '0' || *hex > '9')
      return 0;
    if (*hex < 'A' || *hex > 'F')
      return 0;
    hex++;
  }
  return 1;
}