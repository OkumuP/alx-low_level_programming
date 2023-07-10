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
	ssize_t tr;
	ssize_t wr;
	ssize_t s;

	tr = open(filename, O_RDONLY);
	if (tr == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(tr);
	return (wr);
}
