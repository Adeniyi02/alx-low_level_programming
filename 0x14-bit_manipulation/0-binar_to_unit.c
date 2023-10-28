#include "main.h"

/**
 * binary_to_uint -to convert a binary number to an unsigned int.
 * @b: for pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 *
 * written by:Adeniyi02
 */
unsigned int binary_to_uint(const char *b)
{
	// Check for empty input
	int i;
	unsigned

	int j = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
