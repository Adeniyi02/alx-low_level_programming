#include "main.h"

/**
 * set_bit - for a value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer number of i
 * Return: true if it worked, or false if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (false);
	i = 1 << index;
	*n = *n | i;

	return (true);
}
