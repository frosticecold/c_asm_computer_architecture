#include "palindrome.h"
#include <stdio.h>

int main() {
  char str[] = "Never odd or even";
  char str1[] = "A man a plan a canal Panama.";
  char str2[] = "Gateman sees name, garageman sees name tag";

  printf("A primeira string é um palindroma:%d\n", palindrome(str));
  printf("A segunda string é um palindroma:%d\n", palindrome(str1));
  printf("A terceira string é um palindroma:%d\n", palindrome(str2));
  return 0;
}