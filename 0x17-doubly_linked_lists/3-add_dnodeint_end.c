#include "lists.h"

/**
* add_dnodeint_end - Adds a new node to the end of a doubly linked list.
* @head: A double pointer to the first node.
* @n: The data for the new node.
*
* Description: This function adds a new node with the given data to the
* end of a doubly linked list.
*
* Return: The address of the new element, or NULL if it fails.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *lastNode;
	int num = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = num;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	newNode->prev = lastNode;

	return (newNode);
}
