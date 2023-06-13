#include <stdio.h>
#include "main.h"

/**
 * main - to print all the arguments of the program
 * @argc: this is the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
