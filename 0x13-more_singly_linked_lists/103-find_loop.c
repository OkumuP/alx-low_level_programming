#include "lists.h"

/**
 * find_listint_loop - find loop in a list
 * @head: linked list
 * Return: node address otherwise NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *left = head;
	listint_t *right = head;

	if (!head)
		return (NULL);

	while (left && right && right->next)
	{
		right = right->next->next;
		left = left->next;
		if (right == left)
		{
			left = head;
			while (left != right)
			{
				left = right->next;
				right = right->next;
			}
			return (right);
		}
	}

	return (NULL);
}
