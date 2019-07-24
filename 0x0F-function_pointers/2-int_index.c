#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Search for an integer in an array
 * @array: The array
 * @size: The size of the array
 * @cmp: Pointer to the function to use to compare values
 *
 * Return: The index of the first element for which cmp doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((*cmp) == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);

	return (-1);
}
