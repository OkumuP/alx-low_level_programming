#include "main.h"
/**
 * _strncat - a function concatenating a pair of strings
 * usinga a max of n bytes
 * @dest: value input
 * @src: value input
 * @n: value input
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
