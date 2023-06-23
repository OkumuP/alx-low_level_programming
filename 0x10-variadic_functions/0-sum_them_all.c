#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all parameters is returned
 * @n: total number of parameters passed
 * @...: the variable to sum its parameters
 *
 * Return: 0 if n == 0 otherwise sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
