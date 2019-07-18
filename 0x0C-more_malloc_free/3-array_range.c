#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Create an array of integers
 * @min: The minimum value to include
 * @max: The maximum value to include
 *
 * Return: Pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int i, value;
	int *ar;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (1 + max - min));
	if (ar == NULL)
		return (NULL);

	for (i = 0, value = min; value <= max; i++, value++)
		ar[i] = value;

	return (ar);
}
