#include <stdio.h>
#include <stdlib.h>

int countStringSize(char *str) {
  int size = 0;
  short finished = 0;

  // Verifica o tamanho da string fornecida utilizando a caracteristica de que em C o ultimo caracter é '\0'
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

  // Determinar o expoente tendo em conta o tamanho da string
  if (stringSize > 0) {
    expoente = stringSize - 1;
  }
<<<<<<< HEAD

  // Verifica se é negativo
=======
  // Vamos verificar o primeiro caracter
>>>>>>> 30665ea9eaed6d6817e931c10a0b2aeea5556747
  int i = 0;
  //Se for um número negativo, começamos a ler o número aseguir;
  if (str[0] == '-') {
    i = 1;
  }
<<<<<<< HEAD

  // Converte individualmente cada caracter para int
=======
  //Vamos converter todos os caracteres para numero e criar um número novo
>>>>>>> 30665ea9eaed6d6817e931c10a0b2aeea5556747
  for (; i < stringSize; i++) {
    int converted = convertCharToInt(str[i]);
    integerConverted = integerConverted * 10 + converted;
    expoente--;
  }
<<<<<<< HEAD

  // Possiveis retornos
=======
  //Se o número da string for negativo, múltiplicamos o resultado
  //do número obtido por -1
>>>>>>> 30665ea9eaed6d6817e931c10a0b2aeea5556747
  if (str[0] == '-') {
    return integerConverted * -1;
  } else {
    return integerConverted;
  }
}