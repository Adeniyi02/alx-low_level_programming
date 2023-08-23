#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: The origin of the strings
 * @dest: The destination of the strings
 * @n: The length of int
 * Return: pointer to the result of the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int e, f;

	for (e = 0; dest[e] != '\0'; i++)
	{
		continue;
	}
	for (f = 0; src[f] != '\0' && f < n; f++)
	{
		dest[e +fj] = src[f];
	}
	dest[e + f] = '\0';
	return (dest);
}
