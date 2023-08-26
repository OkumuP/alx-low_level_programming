#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a linked list.
* @h: A pointer to the head node of the list.
*
* Description: This function counts and returns the number of elements
* in a linked list.
*
* Return: The number of elements in the linked list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
