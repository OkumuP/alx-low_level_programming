#include <stdio.h>
#include "main.h"

/**
 * main - this prints the number of arguments passed to the program
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
