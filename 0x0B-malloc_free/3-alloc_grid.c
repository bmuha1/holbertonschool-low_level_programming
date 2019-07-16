#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Allocate a 2 dimensional array of integers
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: Pointer to newly allocated space containing the array,
 * or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	if (grid == NULL)
		return (NULL);

	return (grid);
}
