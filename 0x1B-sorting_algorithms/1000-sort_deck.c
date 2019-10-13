#include "deck.h"
#include <stdio.h>

/**
 * sort_deck - Sort a deck of cards
 * @deck: The deck
 */
void sort_deck(deck_node_t **deck)
{
	(void) deck;
/*	qsort(*deck, 52, sizeof(deck_node_t), compare_cards); */
	return;
}

/**
 * compare_cards - Compare two cards
 * @p: The first card
 * @q: The second card
 *
 * Return: 1 if the first card is higher, -1 if the second, 0 if equal
 */
int compare_cards(const void *p, const void *q)
{
	deck_node_t *x = (deck_node_t *)p;
	deck_node_t *y = (deck_node_t *)q;
	char *values[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10",
			"Jack", "Queen", "King"};
	int value1 = 0, value2 = 0;

	printf("%s %s\n", values[value1], x->card->value);

	while (strcmp(values[value1], x->card->value) != 0)
		value1++;
	while (strcmp(values[value2], y->card->value) != 0)
		value2++;

	if (value1 < value2)
		return (-1);
	else if (value1 > value2)
		return (1);

	return (0);
}
