#include "find_all_words.h"
#include "find_word.h"
#include <stdio.h>
#include <stdlib.h>

// Tamanho de uma string
int strlength(char *str) {
  int word_size = 0;
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    word_size++;
  }
  return word_size;
}

void find_all_words(char *str, char *word, char **addr) {

  //Endereço da palavra encontrada
  char *ptr;
  //Primeiro endereço da string
  char *initialAddress = str;

  //Tamanho da palavra pedida
  int word_size = strlength(word);
  while (*str != '\0') {
    //Endereço da primeira letra da palavra, NULL se não existir
    ptr = find_word(str, word, initialAddress);
    if (ptr != NULL) {
      //Guardar no vetor de endereços o endereço da palavra
      *addr = ptr;
      //Mostrar no ecrã a palavra e o resto da string por analisar
      printf("%s %p\n",*addr,*addr);
      //Proxima posicao do vetor
      addr++;
      //O endereco passa a ser o do caracter a seguir à palavra encontrada
      initialAddress += word_size;
      //Posicao a seguir à da palavra
      str += word_size;
    } else {
      str++;
    }
  }
}
