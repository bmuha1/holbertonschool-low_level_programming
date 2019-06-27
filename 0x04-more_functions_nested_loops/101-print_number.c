#include "holberton.h"

/**
 * print_number - Print an integer
 * @n: The number to print
 */
void print_number(int n)
{
	int min_flag;

	min_flag = 0;

	if (n < 0)
	{
		_putchar('-');
		if ((n < 1000000000) && (n % 10 != 0))
		{
			n++;
			min_flag = 1;
		}
		n = -n;
	}

	if (n / 1000000000 > 0)
		_putchar((n / 1000000000 % 10) + '0');
	if (n / 100000000 > 0)
		_putchar((n / 100000000 % 10) + '0');
	if (n / 10000000 > 0)
		_putchar((n / 10000000 % 10) + '0');
	if (n / 1000000 > 0)
		_putchar((n / 1000000 % 10) + '0');
	if (n / 100000 > 0)
		_putchar((n / 100000 % 10) + '0');
	if (n / 10000 > 0)
		_putchar((n / 10000 % 10) + '0');
	if (n / 1000 > 0)
		_putchar((n / 1000 % 10) + '0');
	if (n / 100 > 0)
		_putchar((n / 100 % 10) + '0');
	if (n / 10 > 0)
		_putchar((n / 10 % 10) + '0');

	if (min_flag == 0)
		_putchar(n % 10 + '0');
	else
		_putchar(n % 10 + 1 + '0');
}
