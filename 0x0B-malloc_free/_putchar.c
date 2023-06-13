#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes a character to the standard output
 * @c: this is the character to be printed
 * Return: 1 if success
 * and on  error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
