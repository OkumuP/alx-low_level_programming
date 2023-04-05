#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of linked list
 * @head: pointer to the first node in the list
 * @n: inserts data to the new node
 *
 * Return: pointer to the new node, and  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
