#include <string.h>

char* find_word(char* str, char* word, char* initial_addr) {

    // nao sei se está certo
    initial_addr = strstr(str, word) - *str;
    return initial_addr;
}