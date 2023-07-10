#include "main.h"

/**
 * append_text_to_file - Text appended at the end of a file.
 * @filename: Pointer to file name
 * @text_content: String to be added to the text file
 *
 * Return: -1 if NULL or the function fails.
 *         File does not exist -1
 *         File lacks write permissions -1
 *         Otherwise return   1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, w, len1 = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len1 = 0; text_content[len1];)
			len1++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len1);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
