#include <stdio.h>

// Binary
int isPowerOfTwo(unsigned int x) {
  while (((x % 2) == 0) && x > 1) /* While x is even and > 1 */
    x /= 2;
  return (x == 1);
}

// Hex
int validate_hex(const char *hex) {
  while (*hex != '\0') {
    if (*hex < '0' || *hex > '9')
      return 0;
    if (*hex < 'A' || *hex > 'F')
      return 0;
    hex++;
  }
  return 1;
}

// Verify if a string is Binary
int isBinary(char *str) {
  const char li = '0', ls = '1';
  int isValid = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < li || str[i] > ls) {
      isValid = 0;
      break;
    }
  }
  return isValid;
}

// Verify if a string is Octal
int isOctal(char *str) {
  const char li = '0', ls = '7';
  int isValid = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < li || str[i] > ls) {
      isValid = 0;
      break;
    }
  }
  return isValid;
}

// Verify if a string is Hexadecimal
int isHexadecimal(char *str) {
  const char li = '0', ls = 'F';
  int isValid = 1;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] < li || str[i] > ls) {
      isValid = 0;
      break;
    }
  }
  return isValid;
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
  const int SUCCESS = 1;
  const char MSG[] = "The number is: ";
  const char NONE_MSG[] = "None";
  const char BINARY_MSG[] = "Binary";
  const char OCTAL_MSG[] = "Octal";
  const char HEX_MSG[] = "Hexadecimal";
  int typeOfNumber = -1;

  if (isBinary(str) == SUCCESS) {
    typeOfNumber = BINARY_FLAG;
  } else {
    if (isOctal(str) == SUCCESS) {
      typeOfNumber = OCTAL_FLAG;
    } else {
      if (isHexadecimal(str) == SUCCESS) {
        typeOfNumber = HEX_FLAG;
      }
    }
  }
  switch (typeOfNumber) {
  case -1:
    printf("%s%s\n", MSG, NONE_MSG);
    break;
  case 0:
    printf("%s%s\n", MSG, BINARY_MSG);
    break;
  case 1:
    printf("%s%s\n", MSG, OCTAL_MSG);
    break;
  case 2:
    printf("%s%s\n", MSG, HEX_MSG);
    break;
  }
}