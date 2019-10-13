#include "sort.h"

/**
 * bitonic_sort - Sort integers using the Bitonic sort algorithm
 * @array: The array of integers
 * @size: The number of elements
 */
void bitonic_sort(int *array, size_t size)
{
	bitonic_recursive(array, size, size, 0, 1);
}

void bitonic_recursive(int *array, size_t now, size_t size, int low, int dir)
{
	int i;

	if (now > 1)
	{
		printf("Merging [%lu/%lu] (", (unsigned long) now, (unsigned long) size);
		if (dir)
			printf("UP):\n");
		else
			printf("DOWN):\n");
		print_array(array, now);

		i = now / 2;
		bitonic_recursive(array, i, size, low, 1);
		bitonic_recursive(array, i, size, low + i, 0);
		bitonic_merge(array, now, size, low, dir);
	}
}

void bitonic_merge(int *array, size_t now, size_t size, int low, int dir)
{
	int i, j, temp;

	if (now > 1)
	{
		i = now / 2;
		for (j = low; j < low + i; j++)
		{
			if (dir == (array[j] > array[i + j]))
			{
				temp = array[j];
				array[j] = array[i + j];
				array[i + j] = temp;

				printf("Result [%lu/%lu] (", (unsigned long) now, (unsigned long) size);
				if (dir)
					printf("UP):\n");
				else
					printf("DOWN):\n");
				print_array(array, now);
			}
		}
		bitonic_merge(array, i, size, low, dir);
		bitonic_merge(array, i, size, low + i, dir);
	}
}
