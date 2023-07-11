#include "main.h"

/**
 * set_bit - set a bit at a given index to 1
 * @n: pointer to the number to be changed
 * @index: bit ndex to be set to 1
 *
 * Return: on success 1 otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
