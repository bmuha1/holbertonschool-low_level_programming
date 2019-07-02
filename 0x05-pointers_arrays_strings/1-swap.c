#include "holberton.h"

/**
 * swap_int - Swap the value of two integers
 * @a: The first integer to swap
 * @b: The second integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
