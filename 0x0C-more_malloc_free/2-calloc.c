#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with specific bytes
 * @s: memory that is to be filled
 * @b: the character to copy
 * @n: the number of times it's copied
 *
 * Return: a pointer to the memory allocated
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - to allocate memory to an array
 * @size: the size of array
 * @nmemb: number of elements in the array
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
