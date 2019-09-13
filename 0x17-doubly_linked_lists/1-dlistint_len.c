#include "lists.h"

/**
 * dlistint_len - Return the number of elements in a linked dlistint_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
