#include "sort.h"

/**
 * shell_sort - shell sort algorithm
 * @array: array
 * @size: size of array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i = 0, j = 0;
	int temp;

	while (gap < size)
		gap = gap * 3 + 1;

	gap = ((gap - 1) / 3);

	for (; gap > 0; gap = ((gap - 1) / 3))
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}

		print_array(array, size);
	}
}

/**
 * swap - swaps two elements in an array.
 * @a: first int to be swapped.
 * @b: second element to be swapped.
 * @arr: array.
 * @size: size of array.
 * Return: nothing.
 */
void swap(int *a, int *b, size_t size, int *arr)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	print_array(arr, size);
}
