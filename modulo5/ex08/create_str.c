#include "create_str.h"
#include <stdlib.h>
#include <string.h>

char *create_str(char str[80]) {
  int len = strlen(str);	// Tamanho da string
  char *s = (char *)calloc(len + 1,sizeof(char));	// Alocar memoria para uma string do tamanho 'len'
  if (s != NULL) {			// Se existir uma string
    strncpy(s, str, len);	// Copia a string para a memoria alocada
    return s;				// Retorna a string
  } else {
    return NULL;			// Se nao existir string, retorna null
  }
}