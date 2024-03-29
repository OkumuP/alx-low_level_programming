#include "lists.h"

/**
 * print_listint - to print elements of a linked list
 * @h: listint_t linked list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
