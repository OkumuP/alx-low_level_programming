#include "main.h"
/**
 * _strlen - a function to return the length of a string
 * @s: the string
 * Return:string lenght
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}

	return (a);
}
