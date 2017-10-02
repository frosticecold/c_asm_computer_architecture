#include <ctype.h>
#include <string.h>

void capitalize(char *str) {
  int i = 0;
  // Se não for uma string vazia
  if (strlen(str) > 0) {
    // Vamos converter a primeira letra;
    str[i] = toupper(str[i]);
    while (str[i] != '\0') {
      /*Se for um espaço
      Então vamos trocar para maiúscula a primeira
      letra depois do espaço
      */
      if (str[i] == ' ') {
        str[i + 1] = toupper(str[i + 1]);
        i += 2;
      } else {
        i++;
      }
    }
  }
}