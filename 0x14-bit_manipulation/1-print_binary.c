#include "holberton.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = n; i > 0; i >>= 2)
		{
			if (n & i)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
