#include "search_algos.h"

/**
 * binary_search - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int j = size - 1;
	unsigned int curr;

	if (!array)
		return (-1);

	while (i <= j)
	{
		print_array(array, i, j);
		curr = (i + j) / 2;
		if (array[curr] == value)
			return (curr);
		else if (array[curr] > value)
			j = curr - 1;
		else if (array[curr] < value)
			i = curr + 1;
	}

	return (-1);
}

/**
 * print_array - Print elements of an array between two indexes
 * @array: The array to print
 * @start: The starting index
 * @end: The ending index
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
