#include "function_pointers.h"
/**
 * int_index - return index if comparison = true, else -1
 * @array: this is the array
 * @size: size of array elements
 * @cmp: pointer to one of the 3 functions in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
