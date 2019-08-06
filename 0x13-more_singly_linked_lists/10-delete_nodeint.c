#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the specified node
 * @head: The list
 * @index: The index where the node should be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pos = *head;
	listint_t *delete;

	if (!head || !(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (pos->next)
			pos = pos->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = pos;
		*head = pos->next;
	}
	else
		delete = pos->next;

	pos->next = delete->next;

	free(delete);

	return (1);
}
