#include "lists.h"

/**
 * delete_dnoteint_at_index - Delete the node at the specified index
 * @head: The head of the list
 * @index: The index, starting at 0
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *curr = *h;
	unsigned int i;

	if (!h || !(*h))
		return (-1);

	for (i = 0; i < index; i++)
	{
		curr = curr->next;
		if (curr == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (curr->next)
			curr->next->prev = NULL;
		*h = curr->next;
	}
	else
	{
		if (curr->next)
			curr->next->prev = curr->prev;
		if (curr->prev)
			curr->prev->next = curr->next;
	}

	free(curr);
	return (1);
}
