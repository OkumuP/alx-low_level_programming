#include "main.h"

/**
 * _isalpha - a function that checks for alphabetical char
 * @c: char
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
