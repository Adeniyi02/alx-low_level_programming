#include <stdio.h>

/**
 * rot13 - Encode a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	int i, j;
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_sub = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13_sub[j];
				break;
			}
		}
	}

	return (str);
}

int main(void)
{
	char test[] = "Hello, World! This is a test.";
	char *result = rot13(test);
	printf("%s\n", result);

	return (0);
}
