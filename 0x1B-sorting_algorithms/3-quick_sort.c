#include "sort.h"

/**
 * quick_sort - quick sort algo
 * @array: integer array
 * @size: size_t
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int limit  = size - 1;

	if (size < 2)
		return;

	partition(array, size, 0, limit);
}

/**
 * partition - quick sort recursive
 * @arr: array
 * @size: size of array
 * @lower_limit: lower limit
 * @limit: upper limit
 * Return: nothing
 */
void partition(int *arr, size_t size, int lower_limit, int limit)
{
	int pivot;

	if (lower_limit < limit)
	{
		pivot = sort(arr, size, lower_limit,  limit);
		partition(arr, size, lower_limit, pivot - 1);
		partition(arr, size, pivot + 1, limit);
	}
}

/**
 * sort - sorts an array according to quick sort algo
 * @arr: array
 * @lower_limit: lower limit
 * @limit: upper limit
 * @size: size of array
 * Return: swap_index
 */
int sort(int *arr, size_t size, int lower_limit, int limit)
{
	int pivot = arr[limit], swap_index = lower_limit, i;

	for (i = lower_limit; i < limit; i++)
		if (arr[i] < pivot)
		{
			if (i != swap_index && arr[i] != arr[swap_index])
				swap(&arr[i], &arr[swap_index], size, arr);

			swap_index++;
		}

	if (limit != swap_index && arr[limit] != arr[swap_index])
		swap(&arr[limit], &arr[swap_index], size, arr);

	return (swap_index);
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
