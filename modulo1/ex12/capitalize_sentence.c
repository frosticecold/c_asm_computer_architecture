#include "c_low_to_upper.h"

/**
 * Função que converter apenas uma letra minúscula para maiúscula
 **/
void lowercharToupperChar(char *ch) {
  int dif = 'a' - 'A';
  if (*ch != ' ') {
    if (*ch >= 'a' && *ch <= 'z') {
      *ch = *ch - dif;
    }
  }
}

/**
 * Método que lê uma string e capitaliza cada letra inicial de cada palavra
 * **/
void capitalize(char *str) {
  int i = 0;
  // Se não for uma string vazia
  if (str != '\0') {
    // Vamos converter a primeira letra;
    lowercharToupperChar((str + i));
    while (*(str + i) != '\0') {
      /*Se for um espaço
      Então vamos trocar para maiúscula a primeira
      letra depois do espaço
      */
      if (*(str + i) == ' ') {
        lowercharToupperChar((str + i + 1));
        i += 2;
      } else {
        i++;
      }
    }
  }
}
