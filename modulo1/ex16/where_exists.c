#include "where_exists.h"
#include <stdlib.h>

char *where_exists(char *str1, char *str2) {

  char *ptr = NULL;
  int i = 0;
  int j = 0;
  //Se não estamos no final da string 2
  while (*(str2 + j) != '\0') {
      /* Então vamos comparar se o caracter da str2 é igual
      ao primeiro caractére da str1
      Se for vamos percorrer a string*/
    if (*(str1 + i) == *(str2 + j)) {
        //Vamos guardar o endereço de memória da palavra
      ptr = (str2 + j);
      i++;
      j++;
      //Enquanto não chegar-mos ao fim da str1
      while (*(str1 + i) != '\0') {
          //Se cada caracter for igual então incrementamos para o a seguir
        if (*(str1 + i) == *(str2 + j)) {
          i++;
          j++;

        } else {
            //Senão é porque não é completamente igual
          ptr = NULL;
          break;
        }
      }
    }
    j++;
  }

  return ptr;
}