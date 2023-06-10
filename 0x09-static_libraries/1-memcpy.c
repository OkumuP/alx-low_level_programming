#include "main.h"
/**
 *_memcpy - copies the memory area
 *@dest: storage location of the memory
 *@n: total number of bytes
 *@src: memory copied
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
