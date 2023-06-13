#include <stdio.h>
#include "main.h"

/**
 * main - this is the function that prints the name of the program
 * @argc: highlights number of arguments
 * @argv: this is the array of arguments
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
