#include "main.h"
/**
 * _strcat - this is to to concatenate a pair of strings
 * @dest: value input
 * @src: input value
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}

