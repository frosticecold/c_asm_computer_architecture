#include "identify_format.h"
#include <stdio.h>
// Generic funcion that searchs if a value is comprehended between
// a lower limit and a upper limit
int searchRange(char *str, int li, int ls) {
  int isValid = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < li || str[i] > ls) {
      isValid = 0;
      break;
    }
  }
  return isValid;
}
// Verify if a string is Binary
int isBinary(char *str) {
  const char li = '0', ls = '1';
  return searchRange(str, li, ls);
}

// Verify if a string is Octal
int isOctal(char *str) {
  const char li = '0', ls = '7';
  return searchRange(str, li, ls);
}

// Verify if a string is Hexadecimal
int isHexadecimal(char *str) {
  const char lin = '0', lsn = '9';
  const char liAl = 'a', liAh = 'f';
  const char liACl = 'A', liACh = 'F';
  int isValid = 1;
  for (int i = 0; str[i] != '\0'; i++) {

    /* Verify if a char is between 0-9 e a-f e A-F
        if ((str[i] < lin || str[i] > lsn))
          if (str[i] < liAl || str[i] > liAh) {
            if (str[i] < liACl || str[i] > liACh) {
              {
                isValid = 0;
                break;
              }
            }
          }
          */
    // Multiple conditions in one line
    if ((str[i] < lin || str[i] > lsn) && (str[i] < liAl || str[i] > liAh) &&
        (str[i] < liACl || str[i] > liACh)) {
      isValid = 0;
      break;
    }
  }
  return isValid;
}

int isDecimal(char *str) {
  const char li = '0', ls = '9';
  return searchRange(str, li, ls);
}

void runVerifyType(char *str) {

  /*Three possible values,
  -1 None
  0 Binary
  1 Octal
  2 Hexadecimal

  */
  const int FAILED_FLAG = -1;
  const int BINARY_FLAG = 0;
  const int OCTAL_FLAG = 1;
  const int HEX_FLAG = 2;
  const int DEC_FLAG = 3;
  const int SUCCESS = 1;
  const char MSG[] = "The number";
  const char NONE_MSG[] = "not valid type";
  const char BINARY_MSG[] = "Binary";
  const char OCTAL_MSG[] = "Octal";
  const char HEX_MSG[] = "Hexadecimal";
  const char DEC_MSG[] = "Decimal";
  int typeOfNumber = -1;

  if (isBinary(str) == SUCCESS) {
    typeOfNumber = BINARY_FLAG;
  } else {
    if (isOctal(str) == SUCCESS) {
      typeOfNumber = OCTAL_FLAG;
    } else {
      if (isDecimal(str) == SUCCESS) {
        typeOfNumber = DEC_FLAG;
      } else {
        if (isHexadecimal(str) == SUCCESS) {
          typeOfNumber = HEX_FLAG;
        } else {
          typeOfNumber = FAILED_FLAG;
        }
      }
    }
  }
  switch (typeOfNumber) {
  case -1:
    printf("%s %s %s\n", MSG, str, NONE_MSG);
    break;
  case 0:
    printf("%s %s %s\n", MSG, str, BINARY_MSG);
    break;
  case 1:
    printf("%s %s %s\n", MSG, str, OCTAL_MSG);
    break;
  case 2:
    printf("%s %s %s\n", MSG, str, HEX_MSG);
    break;
  case 3:
    printf("%s %s %s\n", MSG, str, DEC_MSG);
    break;
  }
}