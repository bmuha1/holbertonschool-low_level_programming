#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Free a listint_t list and set the head to NULL
 * @h: The list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (!h || !(*h))
		return (0);

	while (*h)
	{
		size++;

		if (*h < (*h)->next)
		{
			free(*h);
			break;
		}

		temp = *h;
		*h = (*h)->next;
		free(temp);
	}

	*h = NULL;

	return (size);
}
