#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((*action) == NULL || array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
