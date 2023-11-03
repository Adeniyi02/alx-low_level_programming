#include "main.h"

/**
 * create_file - creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL) {
		return -1;
	}

	len = text_content ? strlen(text_content) : 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1) {
		return -1;
	}

	w = write(fd, text_content, len);
	if (w == -1) {
		close(fd);
		return -1;
	}

	close(fd);

	return 1;
}
