#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: The list
 * @n: The integer
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (!head)
		return (NULL);

	last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;
	last->next = new;

	return (new);
}
