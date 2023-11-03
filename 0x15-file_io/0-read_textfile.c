/*
 * File: 0-read_textfile.c
 * Auth: Ade02.
 */
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - to read a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(o, buffer, letters);
	c = write(STDOUT_FILENO, buffer, r);

	if (a == -1 || b == -1 || c == -1 || c != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (c);
}
