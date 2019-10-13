#include "sort.h"

/**
 * heap_sort - heap sort algorithm
 * @array: array
 * @size: size
 * Return: Nothing
 */
void heap_sort(int *array, size_t size)
{
	size_t end = 0;

	if (size < 2)
		return;

	heapify_array(array, size);
	end = size - 1;
	while (end)
	{
		if (end)
			swap(&array[0], &array[end], size, array);
		end--;
		shakedown(array, 0, end, size);
	}
}

/**
 * heapify_array - turns the array into a heap
 * @arr: the array
 * @size: size of the array
 * Return: Nothing
 */
void heapify_array(int *arr, size_t size)
{
	ssize_t start = 0;

	start = (size - 2) / 2;
	while (start >= 0)
	{
		shakedown(arr, (size_t)start, size - 1, size);
		if (start)
			start--;
		else
			break;
	}
}

/**
 * shakedown - shift the values around based on the heap
 * @arr: the array
 * @start: the start index
 * @end: the end index
 * @size: full size of array
 * Return: Nothing
 */
void shakedown(int *arr, size_t start, size_t end, size_t size)
{
	size_t root = 0, child = 0, swapper = 0;

	root = start;
	while (2 * root + 1 <= end)
	{
		child = 2 * root + 1;
		swapper = root;
		if (arr[swapper] < arr[child])
			swapper = child;
		if (child + 1 <= end && arr[swapper] < arr[child + 1])
			swapper = child + 1;
		if (swapper == root)
			return;
		else if (root != swapper)
		{
			swap(&arr[root], &arr[swapper], size, arr);
			root = swapper;
		}
	}
}

/**
 * swap - swaps to integers.
 * @a: fisr integer
 * @b: second integer
 * @size: size of array
 * @arr: array
 * Return: nothing
 */
void swap(int *a, int *b, size_t size, int *arr)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	print_array(arr, size);
}
