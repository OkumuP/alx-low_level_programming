#include "main.h"

/**
 * char *_strcpy - to copy a str pointed to a source
 * @dest: copy to
 * @src: copy from
 * Return:the string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
