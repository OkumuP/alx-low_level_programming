#include "lists.h"

/**
 * insert_nodeint_at_index- this inserts a new node in a linked list
 * at a specific point
 * @head: first node pointer in the list
 * @idx: point to insert the new node
 * @n: data to be inserted
 *
 * Return: pointer to new node otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
			}
		else
			temp = temp->next;
	}

	return (NULL);
}
