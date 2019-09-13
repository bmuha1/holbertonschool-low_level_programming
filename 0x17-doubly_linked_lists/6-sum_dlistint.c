#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data (n) in a dlistint_t list
 * @head: The head of the list
 *
 * Return: The sum of the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
