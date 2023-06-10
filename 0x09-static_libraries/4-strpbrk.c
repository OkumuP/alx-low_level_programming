#include "main.h"
/**
 * _strpbrk - the point of entry
 * @s: the value input
 * @accept: the value input
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
		if (*s == accept[b])
		return (s);
		}
	s++;
	}

return ('\0');
}
