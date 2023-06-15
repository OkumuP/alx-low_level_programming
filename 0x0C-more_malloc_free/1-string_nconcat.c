#include <stdlib.h>
#include "main.h"

/**
 **malloc_checked - memory allocated using malloc
 * @b: bytes allocated
 * Return: pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
