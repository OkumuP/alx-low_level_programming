#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - new node at the end of a list
 * @head: pointer to the list
 * @str: string to insert to the new node
 *
 * Return: new element address otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len1 = 0;

	while (str[len1])
		len1++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len1 = len1;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
