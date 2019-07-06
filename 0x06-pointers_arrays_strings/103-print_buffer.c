#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Print a buffer
 * @b: The pointer to the buffer
 * @size: The size to print
 */
void print_buffer(char *b, int size)
{
	int i, position, tens;
	char tmp[10];

	if (size <= 0)
		putchar('\n');

	position = 0;
	tens = 0;
	for (i = 0; i < size; i++)
	{
		tmp[i - (tens * 10)] = b[i];
		position++;

		if ((i % 10 == 9) || (i + 1 == size))
		{
			print_line(tmp, position - (i % 10 + 1), i % 10 + 1);
			tens++;
		}
	}
}

/**
 * print_line - Print one line of the buffer
 * @b: The pointer to the buffer
 * @position: The position of the buffer
 * @n: The number of elements to print
 */
void print_line(char *b, int position, int n)
{
	int i;

	printf("%08x: ", position);

	for (i = 0; i < 10; i++)
	{
		if (i < n)
			printf("%02x", b[i]);
		else
			printf("  ");

		if (i % 2)
			putchar(' ');
	}

	for (i = 0; i < n; i++)
	{
		if (isprint(b[i]))
			putchar(b[i]);
		else
			putchar('.');
	}

	putchar('\n');
}
