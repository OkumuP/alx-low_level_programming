#include "lists.h"

/**
 * get_nodeint_at_index - A function that return  node
 *  at an index in a linked list
 * @head: first node in the list
 * @index: node index
 *
 * Return: pointer to the node otherwise  NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
