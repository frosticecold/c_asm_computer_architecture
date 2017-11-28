#include "create_str.h"
#include <stdlib.h>
#include <string.h>

char *create_str(char str[80]) {
  int len = strlen(str);
  char *s = NULL;
  s = (char *)calloc(len + 1,1);
  if (s != NULL) {
    strncpy(s, str, len);
    return s;
  } else {
    return NULL;
  }
}