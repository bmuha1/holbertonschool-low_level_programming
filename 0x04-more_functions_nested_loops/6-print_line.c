#include "holberton.h"

/**
 * print_line - Print a straight line using underscores
 * @n: The number of underscores to print
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');

	_putchar('\n');
}
