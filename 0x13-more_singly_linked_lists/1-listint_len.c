#include "lists.h"

/**
 * listint_len - the total number of elements in a linked list
 * @h: linked list to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}
