#include <unistd.h>

/**
 * _putchar - Write a character to stdout.
 * @c: The character to write.
 * Return: On success, the number of characters written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_number - Print an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

int main(void)
{
	int num = -12345;
	print_number(num);
	_putchar('\n');

	return (0);
}
