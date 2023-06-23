#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - this prints numbers then a new line
 * @separator: string to print it's numbers.
 * @n: the intergers passed
 * @...: the variable number of numbers printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int a;

	va_list numbers

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
