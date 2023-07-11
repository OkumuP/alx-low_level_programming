#include "main.h"

/**
 * clear_bit - set a given bit value to 0
 * @n: pointer to number to be changed
 * @index: bit index to clear
 *
 * Return: on success 1 otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
