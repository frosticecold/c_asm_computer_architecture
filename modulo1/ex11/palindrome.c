#include <ctype.h>
#include <string.h>

int palindrome(char *str) {
  // Tamanho da String
  int length = strlen(str);
  // Apontador a apontar para o inicio da string
  char *s = str + 0;
  // Apontador a apontar para o fim da string
  const char *e = str + length - 1;

  while (s < e) {
    // Se o inicio não for um letra/algarismo, saltamos
    if (!isalnum(*s)) {
      s++;
      // O mesmo para o final
    } else if (!isalnum(*e)) {
      e--;
      // Senão se for igual
      // Incrementa S
      // Decrementa E
    } else if (toupper(*s) == toupper(*e)) {
      s++;
      e--;
    } else {
      return 0;
    }
  }
  return 1;
}