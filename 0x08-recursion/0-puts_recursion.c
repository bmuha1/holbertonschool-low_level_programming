#include "holberton.h"

/**
 * _puts_recursion - Print a string recursively
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;

	if (s[0] != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
