#include "lists.h"

/**
 * free_listint - a function that frees listint_t linked list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
