#include "c_low_to_upper.h"
#include <stdio.h>
int main() {

  char str1[20] = "abcDeFzZZZ";
  char str2[20] = "BcCdDfFgGhH";
  char str3[20] = "12aAbc,sSsz2xX56Xcc9";
  printf("\nAs strings originais são: \nstr1:%s\n", str1);
  printf("str2:%s\n",str2);
  printf("str3:%s\n",str3);

  // Vamos alterar as duas strings
  lstous(str1);
  lstous(str2);
  lstous(str3);
  // Vamos escrever as strings alteradas
  printf("\nAs strings alteradas são: \nstr1:%s\n", str1);
  printf("str2:%s\n",str2);
  printf("str3:%s\n",str3);

  return 0;
}