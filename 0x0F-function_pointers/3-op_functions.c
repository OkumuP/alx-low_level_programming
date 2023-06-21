#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: The first number
 * @b: The second number
 *
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference
 * @a: The first number
 * @b: The second number
 *
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: The first number
 * @b: The second number
 *
 * Return: Product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the quotient
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulo
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
