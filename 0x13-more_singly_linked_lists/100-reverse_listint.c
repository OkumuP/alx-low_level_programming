#include "lists.h"

/**
 * reverse_listint - linked list is reversed
 * @head: first node pointer in the list
 *
 * Return: first node pointer in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
