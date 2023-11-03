#include "main.h"
/**
 * create_file -to create an array of chars, and initializes
 *
 * @text_content: is a NULL to terminate string and write to the file
 * @filename: it is the name of the file to be created
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(o, text_content, len);

	if (x == -1 || y == -1)
		return (-1);

	close(o);

	return (1);
}
