#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase in a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;  	}

	return str;
}
