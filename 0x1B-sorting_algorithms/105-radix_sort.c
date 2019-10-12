#include "sort.h"

/**
 * radix_sort - Sort integers using the LSD Radix sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void radix_sort(int *array, size_t size)
{
	unsigned int i;
	int j, max, digit = 1;
	int *sorted = NULL;
	int bucket[10] = {0};

	sorted = malloc(size * sizeof(int));
	if (!sorted)
		return;
	for (i = 0; i < size; i++)
		sorted[i] = 0;

	max = get_max(array, size);
	while (max / digit > 0)
	{
		for (i = 0; i < 10; i++)
			bucket[i] = 0;

		for (i = 0; i < size; i++)
			bucket[(array[i] / digit) % 10]++;

		for (i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];

		for (j = size - 1; j >= 0; j--)
			sorted[--bucket[(array[j] / digit) % 10]] = array[j];

		for (i = 0; i < size; i++)
			array[i] = sorted[i];

		print_array(array, size);
		digit *= 10;
	}
}

/**
 * get_max - Get the largest number in an array
 * @array: The array of integers
 * @size: The number of elements
 *
 * Return: The largest number in the array
 */
int get_max(int *array, size_t size)
{
	unsigned int i;
	int max;

	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}
