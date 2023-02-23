#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the passed arguments
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar(x + '0');
	return (x);
}
