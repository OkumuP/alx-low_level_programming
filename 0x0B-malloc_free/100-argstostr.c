#include "main.h"
#include <stdlib.h>
/**
 * argstostr - this is the entry point
 * @ac: the int input
 * @av: this is a double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; av[a][n]; n++)
	{
		str[r] = av[a][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
