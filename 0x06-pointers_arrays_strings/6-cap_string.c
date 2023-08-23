#include <stdio.h>

/**
 * cap_string - Capitalize all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		    (str[i - 1] == ' ' || str[i - 1] == '\t' ||
		     str[i - 1] == '\n' || str[i - 1] == ',' ||
		     str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' ||
		     str[i - 1] == '"' || str[i - 1] == '(' ||
		     str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}'))
		{
			str[i] -= 'a' - 'A';
		}
	}

	return (str);
}

int main(void)
{
	char test[] = "hello, world! this is a test.";
	char *result = cap_string(test);
	printf("%s\n", result);

	return (0);
}
