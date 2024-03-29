#include "lists.h"

/**
* free_dlistint - Frees a doubly linked list.
* @head: A pointer to the first node of the doubly linked list.
*
* Description: This function frees the memory allocated
* for a doubly linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
