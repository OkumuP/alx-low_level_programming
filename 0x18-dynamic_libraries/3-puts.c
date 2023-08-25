#include "main.h"
/**
 * _puts -> this is a function that prints a string followed by a new line
 * @str: a param to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
