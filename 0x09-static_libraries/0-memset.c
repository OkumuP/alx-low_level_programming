#include "main.h"
/**
 * _memset - this fills memory with a specific value input
 * @b: the value used to fill the memomry
 * @s: the value to be filled
 * @n: number of bytes changed in the memory
 * Return: the value and the bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
