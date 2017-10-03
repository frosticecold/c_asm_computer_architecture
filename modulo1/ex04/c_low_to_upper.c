#include "c_low_to_upper.h"
#include <stdio.h>

/*
  Método que converte todos os caractéres minúsculos para maiúsculos
  de uma string
  */
void lstous(char *str) {

  int difFromLowerCharUpperChar = 'a' - 'A';
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= difFromLowerCharUpperChar;
    }
    i++;
  }
}