#include <stdio.h>
#include <stdlib.h>
#include "string_to_int.h"

int countStringSize(char *str) {
  int size = 0;
  short finished = 0;

  // Verifica o tamanho da string fornecida utilizando a caracteristica de que
  // em C o ultimo caracter é '\0'
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
    int number = 0;
    if (ch >= '0' && ch <= '9') {
  
      int ZERO_ASCII_TABLE = 48;
  
      number = ch - ZERO_ASCII_TABLE;
    }
    return number;
  }


int string_to_int(char *str) {
    // Número inteiro a ser construido
    int integerConverted = 0;
    // Tamanho da String
    int stringSize = countStringSize(str);
    // Expoente para multiplicar o número por 10
    int expoente = 0;
  
    // Determinar o expoente tendo em conta o tamanho da string
    if (stringSize > 0) {
      expoente = stringSize - 1;
    }
  
    // Verifica se é negativo
    int i = 0;
    // Se for um número negativo, começamos a ler o número aseguir;
    if (str[0] == '-') {
      i = 1;
    }
  
    // Converte individualmente cada caracter para int
    for (; i < stringSize; i++) {
      int converted = convertCharToInt(str[i]);
      integerConverted = integerConverted * 10 + converted;
      expoente--;
    }
  
    // Possiveis retornos
    if (str[0] == '-') {
      return integerConverted * -1;
    } else {
      return integerConverted;
    }
  }