#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: This is the character to be printed if successful
 * Return: 1 if success
 * On error: return  -1 and correction made
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
