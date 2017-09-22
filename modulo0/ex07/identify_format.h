#include <stdio.h>
// Verify if a string is Binary

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
  const char li = '0', ls = 'F';
  return searchRange(str, li, ls);
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