#include "holberton.h"

/**
 * times_table - Print the 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((i * j) < 10)
					_putchar(' ');
				else
					_putchar(i * j / 10 + '0');

				_putchar(i * j % 10 + '0');

				if (j == 9)
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
