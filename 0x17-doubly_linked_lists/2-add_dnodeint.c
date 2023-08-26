#include "lists.h"

/**
* add_dnodeint - Adds a new node to the beginning of a doubly linked list.
* @head: A double pointer to the first node.
* @n: The data for the new node.
*
* Description: This function adds a new node with the given data to the
* beginning of a doubly linked list.
*
* Return: The address of the new element.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
