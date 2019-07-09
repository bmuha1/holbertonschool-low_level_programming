#include "holberton.h"

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}

	return ('\0');
}
