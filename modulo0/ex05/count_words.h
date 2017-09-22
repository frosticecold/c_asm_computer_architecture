#include <stdio.h>
#include <string.h>

// Função para contar palavras
int count_words(char *str) {
  // Inicial count a zero
  int count = 0;
  // Se o primeiro caracter não for já o fim da string
  if (str[0] != '\0') {
    // Para todos os caracteres não iguais ao fim da string
    for (int i = 0; str[i] != '\0'; i++) {
      // Se igual a espaço então vamos incrementar o número de palavras
      if (str[i] == ' ') {
        count++;
      }
    }
  }
  // Como contamos o número de espaços, se for maior que zero
  // Existe mais uma palavra do que espaços existentes
  if (count > 0) {
    count++;
  }
  return count;
}