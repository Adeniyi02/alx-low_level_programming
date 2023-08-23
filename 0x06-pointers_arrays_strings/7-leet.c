#include <stdio.h>

/**
 * leet - Encode a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_subs = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_subs[j];
				break;
			}
		}
	}

	return (str);
}

int main(void)
{
	char test[] = "Hello, World! This is a test.";
	char *result = leet(test);
	printf("%s\n", result);

	return (0);
}
