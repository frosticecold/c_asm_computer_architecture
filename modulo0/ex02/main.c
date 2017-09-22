#include <stdio.h>
#include <stdlib.h>

#include "string_to_int.h"

int main() {
  char string_neg[] = "-21631";

  printf("String Negativa: %s\n", string_neg);
  printf("Integer Negativo:%i\n", string_to_int(string_neg));

  char string_pos[] = "123456";

  printf("String Negativa: %s\n", string_pos);
  printf("Integer Negativo:%i\n", string_to_int(string_pos));

  return 0;
}