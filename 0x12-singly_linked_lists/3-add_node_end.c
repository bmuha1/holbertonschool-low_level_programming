#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: Pointer to the list
 * @str: The string
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (!head || !str)
		return (NULL);

	last = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
