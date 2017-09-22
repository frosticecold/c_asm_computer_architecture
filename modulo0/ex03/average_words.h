#include <stdio.h>
#include "string_to_int.h"

// Média de 2 Inteiros previamente convertidos de String

float average_words(char *str1, char *str2) {
    return (float)(string_to_int(str1) + string_to_int(str2))/2;
}