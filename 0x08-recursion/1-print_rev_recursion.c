#include "main.h"
/**
 * _print_rev_recursion - A function that reverses a string without a new line.
 *
 * @s: This is the string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
