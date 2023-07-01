#include <stdlib.h>
#include "lists.h"

/**
 * list_len - elements in a linked list
 * @h: the pointer to the list
 *
 * Return: total number of elemnts in h
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
