unsigned int size_string_wrong(char s[]) { return sizeof(s); }

//unsigned int size_string_wrong(char s[]) { return sizeof(&s); }  -> Correção proposta

//Um array ao ser passado por parâmetro, o array indicado vai passar a ser o endereço de memória desse array.

//sizeof on array function parameter will return size of 'char *' instead of 'char []'

unsigned int size_string_correct(char s[]) {
  unsigned int cont = 0;
  while (s[cont] != 0)
    cont++;
  return cont;
}