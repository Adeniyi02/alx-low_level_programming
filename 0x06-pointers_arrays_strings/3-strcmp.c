/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: 0 if the strings are equal, a positive value if s1 is greater,
 *         and a negative value if s2 is greater.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
