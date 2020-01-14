#include "search_algos.h"

/**
 * interpolation_search - Search for the value in a sorted array of integers
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or -1 if it's not there
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low = 0;
	unsigned int high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	while ((array[low] != array[high]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int) pos,
		       array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
	}

	if (array[low] == value)
		return (low);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", (int) pos);
	return (-1);
}
