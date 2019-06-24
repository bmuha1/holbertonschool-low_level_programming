#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Print all numbers from n to 98
 * @n: The number to start from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("98\n");
}
