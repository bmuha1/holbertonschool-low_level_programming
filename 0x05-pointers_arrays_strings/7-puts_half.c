#include "holberton.h"

/**
 * puts_half - Print half of a string
 * @str: The string to print
 */
void puts_half(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;

	for (i = (length + 1) / 2; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
