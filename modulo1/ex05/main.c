#include "c_low_to_upper.h"
#include <stdio.h>
int main() {
  
  char str3[20] = "aJlghJKOIBN";
  char str4[20] = "iaGSmq912ha";

  printf("As strings originais são: \n str3:%s \n str4:%s\n", str3, str4);

  // Vamos alterar as duas strings
  lstous_pointer(str3);
  lstous_pointer(str4);

  // Vamos escrever as strings alteradas
  printf("As strings alteradas são: \n str3:%s \n str4:%s\n", str3, str4);

  return 0;
}