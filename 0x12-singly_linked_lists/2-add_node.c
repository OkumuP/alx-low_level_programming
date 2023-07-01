#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - new node at the beginning of a list
 * @head: pointer to the list
 * @str: string to be added to the new node
 *
 * Return: address of new element otherwise NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len1 = 0;

	while (str[len1])
		len1++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len1 = len1;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
