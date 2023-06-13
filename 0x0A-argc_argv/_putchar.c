#include <stdio.h>
#include "main.h"

/**
 * _putchar - this prints char to the stdout
 * @c: this is the character to be printed
 * Return: 1 on success
 * On error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
