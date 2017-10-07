void find_character(char *str, char c, int *vec) {
  int i, j = 0;
  //Percorrer a string ate ao fim
  for (i = 0; str[i] != '\0'; i++) {
    //Se a letra fornecida for igual a uma da string
    if (c == str[i]) {
      //Index da letra na string é guardada no vetor
      vec[j] = i;
      j++;
    }
  }
}