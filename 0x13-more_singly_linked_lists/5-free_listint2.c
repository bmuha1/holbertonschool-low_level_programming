#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and set the head to NULL
 * @head: The list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head && head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
