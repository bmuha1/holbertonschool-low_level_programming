#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print sums of the diagonals of a square matrix of integers
 * @a: The square matrix
 * @size: The size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
