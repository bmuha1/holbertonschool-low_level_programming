#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Return the number of elements in a listint_t list
 * @h: The list
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
