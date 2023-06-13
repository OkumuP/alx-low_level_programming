#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array size and assigns character c
 * @size: this is the size of the array
 * @c: the character to assign
 * Description: Create Size array and assign character c
 * Return: pointer to array if success and null if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
