#include "main.h"
/**
 * _strlen_recursion - the function to return the length of a string.
 * @s: The string to find the length.
 *
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
