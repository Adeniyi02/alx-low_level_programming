#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * Function to perform simple operations 
  * op_add - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */

int calc(int num1, char operator, int num2) {
  int result;
  switch (operator) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      exit(100);
    }
    result = num1 / num2;
    break;
  case '%':
    if (num2 == 0) {
      exit(100);
    }
    result = num1 % num2;
    break;
  default:
    exit(99);
  }
  return result;
}

