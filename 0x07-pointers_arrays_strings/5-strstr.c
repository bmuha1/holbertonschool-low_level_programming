#include "holberton.h"

/**
 * _strstr - Locate a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of the substring needle
 * in the string haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, size_haystack, size_needle;
	char *p = '\0';

	if (needle[0] == '\0')
		return (haystack);

	size_haystack = _strlen(haystack);
	size_needle = _strlen(needle);

	for (i = 0; i < size_haystack; i++)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			for (j = 0; j < size_needle; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					p = '\0';
					break;
				}

				if (j == size_needle - 1)
					i = size_haystack;
			}
		}
	}

	return (p);
}

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
