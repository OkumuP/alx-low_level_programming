#include "main.h"

/**
 * get_endianness - checks if a machine is big or little
 * Return: big 0 little 1
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
