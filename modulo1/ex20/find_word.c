#include "c_low_to_upper.h"
#include <stdlib.h>

char *find_word(char *str, char *word, char *initial_addr) {
  lstous(str);
  lstous(word);

  int i, j = 0, index, found = 0;
  while (&str[j] != initial_addr) {
    j++;
  }
  index = j;
  while (str[index] != '\0') {
    if (str[index] == word[0]) {
      // || str[index] + dif == word[0] || str[index] - dif == word[0]
      // Encontrar a palavra total
      i = 0;
      found = 1;
      while (word[i] != '\0') {
        if (str[index + i] != word[i]) {
          found = 0;
          break;
        }
        i++;
      }
    }
    if (found == 1) {
      break;
    }
    index++;
  }
  if (found == 1) {
    return &str[index];
  } else {
    return NULL;
  }
}

void find_all_words(char* str, char* word, char**addrs) {
  
}