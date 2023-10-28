#include "main.h"

/*
 * flip_bits - flip the bits to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m) {
  unsigned long int difference, result;
  unsigned int count = 0;

  difference = n ^ m;
  while (difference != 0) {
    if (difference & 1) {
      count++;
    }
    difference >>= 1;
  }

  return (count);
}
