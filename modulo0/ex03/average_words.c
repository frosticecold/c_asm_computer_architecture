#include <stdio.h>
#include "string_to_int.c"

int average_words(char *str1, char *str2) {
    return (string_to_int(str1) + string_to_int(str2))/2;
}