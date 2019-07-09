#include "holberton.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search
 * @accept: The bytes to to search for
 *
 * Return: Pointer to the first occurrence in the string s of any of the
 * bytes in the string accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (0);
}
