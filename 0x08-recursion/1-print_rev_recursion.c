#include "holberton.h"

/**
 * _print_rev_recursion - Print a string in reverse recursively
 * @s: The string to print
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}
