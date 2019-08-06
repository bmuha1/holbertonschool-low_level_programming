#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Print a list with the location in memory of each n
 * @head: The list
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		size++;

		if (head > head->next)
			head = head->next;
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *) head, head->n);
			break;
		}
	}

	return (size);
}
