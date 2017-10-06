#include "c_low_to_upper.h"

void capitalize(char *str) {
  int i = 0;
  // Se não for uma string vazia
  if (str != '\0') {
    // Vamos converter a primeira letra;
    lstous(&str[i]);
    while (str[i] != '\0') {
      /*Se for um espaço
      Então vamos trocar para maiúscula a primeira
      letra depois do espaço
      */
      if (str[i] == ' ') {
        lstous(&str[i + 1]);
        i += 2;
      } else {
        i++;
      }
    }
  }
}