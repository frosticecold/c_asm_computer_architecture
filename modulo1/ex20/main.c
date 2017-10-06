#include "c_low_to_upper.h"
#include "find_all_words.h"
#include <stdio.h>
#define MAX_PALAVRAS_SIZE 40
int main() {

  // char str[300] = "Vamos contar quantas vezes aparecerem estas palavras,
  // vamos contar quantas vezes aparecem estas palavras, vamos";
  char str[100] = "Vamos a vamos a, vamos";
  char word[20] = "vamos";
  char *palavras[MAX_PALAVRAS_SIZE];

  //printf("%p\n%p\n%p\n", &str[0], &str[8], &str[17]);

  lstous(str);
  lstous(word);

  find_all_words(str, word, palavras);
  return 0;
}