#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped linked list
 * @head: A pointer to the head of the linked list to check.
 *
 * Return: the number of unique nodes
 * Or - 0 if the list is not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *sheep, *goat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sheep = head->next;
	goat = (head->next)->next;

	while (hare)
	{
		if (sheep == goat)
		{
			sheep = head;
			while (sheep != goat)
			{
				nodes++;
				sheep = sheep->next;
				goat = goat->next;
			}

			sheep  = sheep->next;
			while (sheep != goat)
			{
				nodes++;
				sheep = sheep->next;
			}

			return (nodes);
		}

		sheep = sheep->next;
		goat = (goat->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
			{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
