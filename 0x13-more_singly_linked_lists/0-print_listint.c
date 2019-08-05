#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all the elements of a listint_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
