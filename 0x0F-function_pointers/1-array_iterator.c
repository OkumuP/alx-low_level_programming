#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each element of an array in a new line
 * @array:array to be printed
 * @size: the number of elements to be printed
 * @action: the pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
