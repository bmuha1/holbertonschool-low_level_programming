#include "holberton.h"

/**
 * print_times_table - Print the n times table
 * @n: The times table to print
 */
void print_times_table(int n)
{
	int i;
	int j;

	if ((n > 15) || (n < 0))
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');

				if (n != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('\n');
				}
			}
			else
			{
				if ((i * j) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(i * j / 10 + '0');
				}
				else
				{
					_putchar(i * j / 100 + '0');
					_putchar((i * j / 10) % 10 + '0');
				}

				_putchar(i * j % 10 + '0');

				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
