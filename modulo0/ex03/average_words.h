#include <stdio.h>
#include "string_to_int.h"

// Média de 2 Inteiros previamente convertidos de String

int average_words(char *str1, char *str2) {
    return (string_to_int(str1) + string_to_int(str2))/2;
}