#include <stdio.h>
#include <stdlib.h>

int countStringSize(char *str) {
  int size = 0;
  short finished = 0;

  while (finished == 0) {
    char ch = str[size];
    if (ch == '\0') {
      finished = 1;
    } else {
      size++;
    }
  }
  return size;
}

int convertCharToInt(char ch) {

  int ZERO_ASCII_TABLE = 48;

  int number = ch - ZERO_ASCII_TABLE;

  return number;
}

int string_to_int(char *str) {

  // Solução do Rui
  // int i = strtol(str, NULL, 10);

  // Número inteiro a ser construido
  int integerConverted = 0;
  // Tamanho da String
  int stringSize = countStringSize(str);
  // Expoente para multiplicar o número por 10
  int expoente = 0;
  if (stringSize > 0) {
    expoente = stringSize - 1;
  }
  int i = 0;
  if (str[0] == '-') {
    i = 1;
  }
  for (; i < stringSize; i++) {
    int converted = convertCharToInt(str[i]);
    integerConverted = integerConverted * 10 + converted;
    expoente--;
  }
  if (str[0] == '-') {
    return integerConverted * -1;
  } else {
    return integerConverted;
  }
}