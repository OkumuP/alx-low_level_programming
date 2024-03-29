#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file that is printed to STDOUT
 * @filename: File to read
 * @letters: letters to be read
 * Return: wr actual numbers printed otherwise 0 if null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
