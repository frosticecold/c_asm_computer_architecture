#include "c_low_to_upper.h"
#include <stdlib.h>

char *find_word(char *str, char *word, char *initial_addr) {
  lstous(str);
  lstous(word);

  int i, j = 0, index, found = 0;
  while (&str[j] != initial_addr) {
    j++;
  }
  index = j;
  //Enquanto não chegarmos ao fim da string
  while (str[index] != '\0') {
    //Se a letra na string for igual à letra inicial da palavra a procurar
    if (str[index] == word[0]) {
      // || str[index] + dif == word[0] || str[index] - dif == word[0]
      // Encontrar a palavra total
      i = 0;
      found = 1;
      //Então vamos percorrer a palavra e comparar se é igual
      //Se não for igual parámos
      //E procuramos a seguinte
      while (word[i] != '\0') {
        if (str[index + i] != word[i]) {
          found = 0;
          break;
        }
        i++;
      }
    }
    //SE encontrar-mos então parámos o ciclo
    if (found == 1) {
      break;
    }
    index++;
  }
  //Se encontrar-mos retornamos o endereço da palavra
  if (found == 1) {
    return &str[index];
  } else {
    //Se não é porque não existe
    return NULL;
  }
}