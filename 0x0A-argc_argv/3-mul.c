#include <stdio.h>
#include "main.h"

/**
 * _atoi - to convert a string into an int
 * @s: this is the string to be converted
 * Return: value of the int converted from a string
 */
int _atoi(char *s)
{
	int a, b, c, len, y, digit;

	a = 0;
	y = 0;
	b = 0;
	c = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && y == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
			}
		a++;
	}

	if (y == 0)
		return (0);

	return (c);
}

/**
 * main - takes two numbers and multiplies
 * @argc: the number of arguments
 * @argv: this is the array of arguments
 *
 * Return: 0 on success
 * 0 on error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
