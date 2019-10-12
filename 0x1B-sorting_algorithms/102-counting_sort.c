#include "sort.h"

/**
 * counting_sort - sort algorithim using countring sort.
 * @array: int array
 * @size: size of array
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t new_size, i;
	int max, has_zero = 0;

	if (!array || size < 2)
		return;

	max = array[0];
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] == 0)
			has_zero = 1;
	}

	if (has_zero)
	{
		for (i = 0; i < size; i++)
			array[i] += 1;

		max += 1;
	}

	new_size = (size_t)max + 1;
	super_count_sort(array, size, new_size, has_zero);
}

/**
 * super_count_sort - sorts accoding to count algorithm
 * @arr: array
 * @size: size of array
 * @new_size: new_size of new array
 * @has_zero: bool to tell if 0 is present or not.
 * Return: none.
 */
void super_count_sort(int *arr, size_t size, size_t new_size, int has_zero)
{
	int *count_arr, *final, total = 0, count = 0;
	size_t i;

	count_arr = calloc(new_size, sizeof(int));
	final = calloc(size, sizeof(int));

	if (count_arr && final)
	{
		for (i = 0; i < size; i++)
			count_arr[(size_t)arr[i]] += 1;

		for (i = 0; i < new_size; i++)
		{
			count = count_arr[i];
			count_arr[i] = total;
			total += count;
		}
		for (i = 0; i < size; i++)
		{
			final[count_arr[(size_t)arr[i]]] = arr[i];
			count_arr[(size_t)arr[i]]++;
		}
		for (i = 0; i < size; i++)
			arr[i] = final[i];
		if (has_zero)
			for (i = 0; i < size; i++)
				arr[i] += -1;
	}

	print_array(count_arr, new_size);
	free(final);
	free(count_arr);
}
