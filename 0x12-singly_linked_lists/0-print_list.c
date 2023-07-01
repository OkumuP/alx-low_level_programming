#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list
 * @h: the pointer to the list
 * Return: total number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len1, h->str);
		h = h->next;
		z++;
	}

	return (z);
}
