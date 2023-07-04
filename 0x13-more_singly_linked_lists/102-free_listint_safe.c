#include "lists.h"

/**
 * free_listint_safe - this frees a list
 * @h: first node pointer in a list
 *
 * Return: total no. of elements in a list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			s++;
		}
		else
		{
			free(*h);
			*h = NULL;
			s++;
			break;
		}
	}

	*h = NULL;
	return (s);
}
