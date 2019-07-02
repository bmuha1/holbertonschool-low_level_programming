#include "holberton.h"

/**
 * puts2 - Prints out every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
