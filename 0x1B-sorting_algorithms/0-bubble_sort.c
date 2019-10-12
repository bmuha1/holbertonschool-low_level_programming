#include "sort.h"

/**
 * bubble_sort - Sort integers using the Bubble sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int swapped, temp;

	if (!array)
		return;

	do {
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
	} while (swapped);
}
