#include "search_algos.h"

/**
 * advanced_binary - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @low: The left bound
 * @high: The right bound
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int binary_search_recursive(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	mid = (low + high) / 2;

	if (array[mid] > value)
		return (binary_search_recursive(array, low, mid, value));
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, high, value));
	else if (array[mid - 1] == value)
		return (binary_search_recursive(array, low, mid, value));
	return (mid);
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
