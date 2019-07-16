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
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
				free(grid[j]);

			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
