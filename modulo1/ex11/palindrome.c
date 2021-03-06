#include "c_low_to_upper.h"

/*
Verifica se um dado caractére é alpha ou numérico
Caso seja retorna 1
Caso não seja retorna 0
*/
int isValidChar(char ch) {
  if (ch < '0') {
    return 0;
  }
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
      (ch >= '0' || ch <= '9')) {
    return 1;
  }
  return 0;
}
/*
  Método que calcula o tamanho de uma string
*/
int strlength(char *str) {
  int s = 0;
  while (*str != '\0') {
    s++;
    str++;
  }
  return s;
}
/*
  Método que verifica se uma palavra é palindroma
  Isto é, se é igual lida de trás para a frente e frente para trás
*/
int palindrome(char *str) {
  // Tamanho da String
  int length = strlength(str);
  // Apontador a apontar para o inicio da string
  char *s = str + 0;
  // Apontador a apontar para o fim da string
  const char *e = str + length - 1;
  lstous(str);

  while (s < e) {
    // Se o inicio não for um letra/algarismo, saltamos
    if (isValidChar(*s) == 0) {
      s++;
      // O mesmo para o final
    } else {
      if (isValidChar(*e) == 0) {
        e--;
        // Senão se for igual
        // Incrementa S
        // Decrementa E
      } else {
        if (*s == *e) {
          s++;
          e--;
        } else {
          return 0;
        }
      }
    }
  }
  return 1;
}