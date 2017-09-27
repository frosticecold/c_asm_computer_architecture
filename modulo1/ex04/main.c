#include "c_low_to_upper.h"
#include <stdio.h>
int main() {

  char str1[20] = "abcDeFzZZZ";
  char str2[20] = "BcCdDfFgGhH";

  printf("As strings originais são: \n str1:%s \n str2:%s\n", str1, str2);

  // Vamos alterar as duas strings
  lstous(str1);
  lstous(str2);

  // Vamos escrever as strings alteradas
  printf("As strings alteradas são: \n str1:%s \n str2:%s\n", str1, str2);

  return 0;
}