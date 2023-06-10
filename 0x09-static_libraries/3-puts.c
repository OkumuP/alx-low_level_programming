#include "main.h"
/**
 * _puts - to print a string followed by a new line
 * to the standard output
 * @str: the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
