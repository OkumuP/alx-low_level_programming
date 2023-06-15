#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - to use malloc in allocating memory
 * @b: bytes allocated
 * Return: pointer to the memory that has been allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
