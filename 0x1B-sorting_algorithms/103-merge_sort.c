#include "sort.h"

/**
 * merge_sort - Sort integers using the top-down Merge sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void merge_sort(int *array, size_t size)
{
	int *temp;

	if (!array || size < 2)
		return;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return;

	merge_recursive(array, temp, 0, size - 1);
	free(temp);
}

/**
 * merge_recursive - Merge sort recursively
 * @array: The array of integers
 * @temp: Temporary array
 * @l: The left-most index
 * @r: The right-most index
 */
void merge_recursive(int *array, int *temp, int l, int r)
{
	int i, m;

	if (l < r)
	{
		m = (l + r - 1) / 2;
		merge_recursive(array, temp, l, m);
		merge_recursive(array, temp, m + 1, r);

		printf("Merging...\n[left]: ");
		for (i = l; i <= m; i++)
		{
			printf("%d", array[i]);
			if (i < m)
				printf(", ");
		}
		printf("\n[right]: ");
		for (i = m + 1; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}

		merge(array, temp, l, m, r);
	}
}

/**
 * merge - Merge two lists together
 * @array: The array of integers
 * @temp: Temporary array
 * @l: The left-most index
 * @m: The middle index
 * @r: The right-most index
 */
void merge(int *array, int *temp, int l, int m, int r)
{
	int i, j, k;

	i = l;
	j = m + 1;
	k = 0;

	while (i <= m && j <= r)
	{
		if (array[i] < array[j])
			temp[k++] = array[i++];
		else
			temp[k++] = array[j++];
	}

	while (i <= m)
		temp[k++] = array[i++];
	while (j <= r)
		temp[k++] = array[j++];

	printf("\n[Done]: ");
	for (i = l, j = 0; i <= r; i++, j++)
	{
		array[i] = temp[j];
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}
