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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);

	if (s[i] == c)
		return (&s[i]);

	return ('\0');
}
