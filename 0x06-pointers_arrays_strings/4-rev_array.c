#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: The array to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i <= (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
