#include "find_all_words.h"
#include "find_word.h"
#include <stdio.h>
#include <stdlib.h>

int strlength(char *str) {
  int word_size = 0;
  int i = 0;
  for (i = 0; str[i] != '\0'; i++) {
    word_size++;
  }
  return word_size;
}

void find_all_words(char *str, char *word, char **addr) {

  char *ptr = NULL;
  char *lastptr = NULL;
  char *initialAddress = str;

  int p_vez = 1;
  int word_size = strlength(word);
  while (*str != '\0') {
    ptr = find_word(str, word, initialAddress);
    if (ptr != NULL) {
      *addr = ptr;
      printf("%s %p\n",*addr,*addr);
      addr++;
      initialAddress += word_size;
      str += word_size;
    } else {
      str++;
    }
  }
}
