#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determines whether a number is prime or not
 * @n: number to be checked
 * Return: 1 if yes and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively checks if a number is prime
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if yes and 0 if not prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
