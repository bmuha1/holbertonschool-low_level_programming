#include "holberton.h"

/**
 * print_rev - Print a string in reverse
 * @s: The string to print
 */
void print_rev(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
