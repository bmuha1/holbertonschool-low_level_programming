#include "holberton.h"

/**
 * print_triangle - Print a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, spaces, hashes;

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		hashes = size - spaces;

		for (j = 1; j <= spaces; j++)
			_putchar(' ');

		for (j = 1; j <= hashes; j++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
