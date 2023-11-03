/*
 * File: read_textfile.c
 * Author: Ade02
 */
#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *      function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *     O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char buffer[letters];

	if (filename == NULL) {
		return 0;
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		return 0;
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1) {
		close(fd);
		return 0;
	}

	bytes_written = fwrite(buffer, 1, bytes_read, stdout);
	if (bytes_written == -1) {
		close(fd);
		return 0;
	}

	close(fd);

	return bytes_written;
}
