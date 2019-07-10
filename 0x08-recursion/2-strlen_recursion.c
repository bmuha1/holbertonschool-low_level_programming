#include "holberton.h"

/**
 * _strlen_recursion - Determine the length of a string recursively
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
