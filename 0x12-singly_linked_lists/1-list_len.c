#include <stdio.h>
#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list_t list
 * @h: The list
 *
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
