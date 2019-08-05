#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t linked list
 * @head: The list
 * @index: The index of the node
 *
 * Return: The nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 1; i <= index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
