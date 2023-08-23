#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Add two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0, i, j = 0;

	len1 = strlen(n1);
	len2 = strlen(n2);

	if (size_r <= len1 || size_r <= len2)
		return (0);

	r[size_r - 1] = '\0';
	i = size_r - 2;

	while (len1 > 0 || len2 > 0 || carry)
	{
		int sum = carry;

		if (len1 > 0)
			sum += n1[--len1] - '0';

		if (len2 > 0)
			sum += n2[--len2] - '0';

		carry = sum / 10;
		r[i--] = (sum % 10) + '0';
	}

	if (i < 0)
		return (0);

	return (r + i + 1);
}

int main(void)
{
	char num1[] = "12345";
	char num2[] = "9876";
	int result_size = 10;
	char result[result_size];

	char *res = infinite_add(num1, num2, result, result_size);
	if (res != 0)
		printf("Result: %s\n", res);
	else
		printf("Result cannot be stored in the provided buffer.\n");

	return (0);
}
