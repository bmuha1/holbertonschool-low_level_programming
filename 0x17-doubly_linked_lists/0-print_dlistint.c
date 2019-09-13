#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
