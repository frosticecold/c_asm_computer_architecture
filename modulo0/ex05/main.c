#include "count_words.h"
#include <stdio.h>

#define STRING_SIZE 200

int main() {

  char s[STRING_SIZE];

  printf("Insert string: ");
  fgets(s, STRING_SIZE, stdin);
  printf("Number of words: %d\n", count_words(s));

  char string_1[] = "A B C D E F";
  printf("\nPrinting the size of %s: %d",string_1, count_words(string_1));

  char string_2[] = "Z X C V B";
  printf("\n Printing the size of %s: %d\n",string_2, count_words(string_2));
  return 0;
}