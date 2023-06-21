#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - program to return the sum of two numbers
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - program to return the difference between two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The difference 
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - program to return the product of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - program to return the quotient of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the modulo o two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
