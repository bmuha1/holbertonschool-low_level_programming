#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		size++;
	}

	return (size);
}
