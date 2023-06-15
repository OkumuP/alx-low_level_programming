#include <stdlib.h>
#include "main.h"

/**
 * *array_range - this creates a array of inteers
 * @min: the minimum range of stored values
 * @max: the maximum range of values stored
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
