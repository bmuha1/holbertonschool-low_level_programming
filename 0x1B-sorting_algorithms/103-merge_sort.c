#include "sort.h"

/**
 * merge_sort - Sort integers using the top-down Merge sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void merge_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	merge_recursive(array, size, 0, size - 1);
}

void merge_recursive(int *array, size_t size, int l, int r)
{
	int m;

	if (l < r)
	{
		m = (l + r - 1) / 2;
		merge_recursive(array, size, l, m);
		merge_recursive(array, size, m + 1, r);
		merge(array, size, l, m, r);
	}
}

void merge(int *array, size_t size, int l, int m, int r)
{
	int i, j, k;
	int *temp;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return;

	i = l;
	j = m + 1;
	k = 0;

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

	i = l;
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
	free(temp);
}
