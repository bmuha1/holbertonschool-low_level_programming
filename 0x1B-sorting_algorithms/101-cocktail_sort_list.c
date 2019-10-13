#include "sort.h"

/**
 * cocktail_sort_list - Sort integers using the Cocktail shaker sort algorithm
 * @list: The doubly linked list of integers
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *end, *current;
	int sorted_list = 0;

	if (!list || !*list || !(*list)->next)
		return;

	for (end = *list; end->next; end = end->next)
		;

	while (!sorted_list)
	{
		sorted_list = 1;

		for (current = *list; current != end; current = current->next)
			if (current->n > current->next->n)
			{
				forward_swap(list, &end, &current);
				print_list((const listint_t *)*list);
				sorted_list = 0;
			}

		for (current = current->prev; current != *list;
		     current = current->prev)

			if (current->n < current->prev->n)
			{
				backward_swap(list, &end, &current);
				print_list((const listint_t *)*list);
				sorted_list = 0;
			}
	}
}

/**
 * forward_swap - swap current and next
 * @list: head of list
 * @end: end of list
 * @current: current node
 * Return: nothing
 */
void forward_swap(listint_t **list, listint_t **end, listint_t **current)
{
	listint_t *temp = (*current)->next;

	if ((*current)->prev)
		(*current)->prev->next = temp;
	else
		*list = temp;

	temp->prev = (*current)->prev;
	(*current)->next = temp->next;

	if (temp->next)
		temp->next->prev = *current;
	else
		*end = *current;

	(*current)->prev = temp;
	temp->next = *current;
	*current = temp;
}


/**
 * backward_swap - swaps backward a node.
 * @list: head of list
 * @end: end of list
 * @current: current node
 * Return: none.
 */
void backward_swap(listint_t **list, listint_t **end, listint_t **current)
{
	listint_t *temp = (*current)->prev;

	if ((*current)->next)
		(*current)->next->prev = temp;
	else
		*end = temp;

	temp->next = (*current)->next;
	(*current)->prev = temp->prev;

	if (temp->prev)
		temp->prev->next = *current;
	else
		*list = *current;

	(*current)->next = temp;
	temp->prev = *current;
	*current = temp;
}
