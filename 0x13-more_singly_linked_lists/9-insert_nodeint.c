#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a given position
 * @head: The list
 * @idx: The index where the new node should be added
 * @n: The value of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *pos = *head;

	if (!head)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		if (pos)
			pos = pos->next;
		else
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (pos)
	{
		new->next = pos->next;
		pos->next = new;
	}

	return (new);
}
