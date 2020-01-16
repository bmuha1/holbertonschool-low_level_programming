#include "search_algos.h"

/**
 * jump_search - Search for the value in an array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int j = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += j;
		if (i >= size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", i - j, i);
	i -= j;

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}
