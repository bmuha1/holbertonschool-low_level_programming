#include "holberton.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number if successful, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, base = 1;
	int length, i;

	if (!b)
		return (0);

	length = _strlen(b);

	for (i = 0; i < length; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			uint += base;
		base *= 2;
	}

	return (uint);
}

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
