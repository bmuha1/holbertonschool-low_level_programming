#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculate the sum of all the data of a listint_t linked list
 * @head: The list
 *
 * Return: The sum of the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;

		if (head->next)
			head = head->next;
		else
			break;
	}

	return (sum);
}
