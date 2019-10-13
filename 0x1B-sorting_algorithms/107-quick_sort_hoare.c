#include "sort.h"

/**
 * quick_sort_hoare - quick sort algo
 * @array: integer array
 * @size: size_t
 * Return: Nothing
 */
void quick_sort_hoare(int *array, size_t size)
{
	int limit  = size - 1;

	if (size < 2)
		return;

	partition_hoare(array, size, 0, limit);
}

/**
 * partition_hoare - quick sort recursive
 * @arr: array
 * @size: size of array
 * @lower_limit: lower limit
 * @limit: upper limit
 * Return: nothing
 */
void partition_hoare(int *arr, size_t size, int lower_limit, int limit)
{
	int pivot;

	if (lower_limit < limit)
	{
		pivot = sort_hoare(arr, size, lower_limit,  limit);
		partition_hoare(arr, size, lower_limit, pivot);
		partition_hoare(arr, size, pivot + 1, limit);
	}
}

/**
 * sort_hoare - sorts an array according to quick sort algo
 * @arr: array
 * @lower_limit: lower limit
 * @limit: upper limit
 * @size: size of array
 * Return: swap_index
 */
int sort_hoare(int *arr, size_t size, int lower_limit, int limit)
{
	int pivot = arr[limit], swap_index = lower_limit - 1;

	limit += 1;
	while (1)
	{
		do {
			swap_index++;
		} while (arr[swap_index] < pivot);

		do {
			limit--;
		} while (arr[limit] > pivot);

		if (swap_index > limit)
			return (limit);

		swap(&arr[swap_index], &arr[limit], size, arr);
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
