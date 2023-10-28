#include "main.h"
/**
 * _power - to calculate (base and power)
 * @base: for base of the exponet
 * @pow: for power of the exponet
 * Return: for value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int result;
	unsigned int i;

	result = 1;
	for (i = 1; i <= pow; i++)
		result *= base;
	return (result);
}
/**
 * print_binary - to print the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else 
	if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
