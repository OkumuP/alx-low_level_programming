#include "main.h"

/**
 * factorial - function to return the factorial of a number
 * @n: This is the number to return it's factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
