#include "holberton.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: The number of diagonals (\) to print
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
