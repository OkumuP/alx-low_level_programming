#include "lists.h"

/**
 * pop_listint - this deletes head node of a list
 * @head: pointer to the first element in the list
 *
 * Return: the deleted data inside the element otherwise 0 if empty,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
