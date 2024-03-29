#include "main.h"

/**
 * create_file - This creates a text file
 * @filename: A pointer to the file created
 * @text_content: A pointer to a string to be written
 *
 * Return: -1 if it fails otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len1 = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len1 = 0; text_content[len1];)
			len1++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len1);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
