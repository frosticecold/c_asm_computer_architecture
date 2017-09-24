#ifndef FRACTION_NUMBER_H
#define FRACTION_NUMBER_H

#include "limits.h"
#include "string.h"
#include "string_to_int.h"

int integer_part(char *x) {

  int numConstruido = 0;
  int isNegative = 0;
  // String para onde copiar
  // char newstr[11] = "";

  // String para copiar um caracter com \0 a terminar
  char stringCharCopy[2] = "";

  // Se o caracter é o fim da linha
  if (x[0] != '\0') {

    // Indice 0
    int index = 0;
    if (x[0] == '-') {
      isNegative = 1;
      index++;
    }
    // Se o programa acabou
    int finished = 0;
    // Enquanto não encontrar fim da string ou . de fracção
    while (finished == 0) {
      // Vamos guardar o caracter
      char ch = x[index];
      //É o fim da linha ou ponto separador?
      if (ch == '\0' || ch == '.') {
        finished = 1;
        // Senão vamos copiar o caracter para uma string o caracter que
        // enconramos
        // incrementos o indíce
      } else {
        stringCharCopy[0] = ch;
        // strcat(newstr, stringCharCopy);
        numConstruido = (numConstruido * 10) + string_to_int(stringCharCopy);
        index++;
      }
    }
  }
  // Vamos retornar o inteiro
  if (isNegative == 1) {
    numConstruido *= -1;
  }
  return numConstruido;
}

int fractional_part(char *x) {
  // String para onde copiar
  char newstr[30] = "";
  // String para copiar um caracter com \0 a terminar
  char stringCharCopy[2] = "";
  // Qual é o delimitador da parte fracionária
  char delimiter = '.';
  // Declarar se encontramos o delimitador
  int foundDelimiter = 0;
  // Se a string é vazia
  if (x[0] != '\0') {
    // Declarar indice 0
    int index = 0;
    // Declarar que não acabamos
    int finished = 0;
    // Enquanto não acabares
    while (finished == 0) {
      // Vamos ler o caracter
      char ch = x[index];
      // Se for fim da linha acabou
      if (ch == '\0') {
        finished = 1;
        // Senão se encontramos o delimitador
      } else {
        if (ch == delimiter) {
          foundDelimiter = 1;
        }
      }
      // Se encontramos o delimitador então podemos começar a ler os números
      if (foundDelimiter == 1) {
        // Ignorar o delimitador
        if (ch != delimiter) {
          stringCharCopy[0] = ch;
          strcat(newstr, stringCharCopy);
        }
      }
      index++;
    }
  }
  return string_to_int(newstr);
}

#endif
