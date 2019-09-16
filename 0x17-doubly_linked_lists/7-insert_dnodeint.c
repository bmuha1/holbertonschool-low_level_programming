#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position
 * @h: The head of the list
 * @idx: The index, starting at 0
 * @n: The value of the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			curr->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = curr;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = curr;
	new->next = curr->next;
	if (curr->next)
		curr->next->prev = new;
	curr->next = new;
	return (new);
}
