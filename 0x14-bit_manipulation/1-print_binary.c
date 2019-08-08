#include "holberton.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int start_printing = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 1UL << 63; i > 0; i >>= 1)
		{
			if (n & i)
			{
				_putchar('1');
				start_printing = 1;
			}
			else if (start_printing)
				_putchar('0');
		}
	}
}
