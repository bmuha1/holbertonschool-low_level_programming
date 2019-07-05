#include "holberton.h"

/**
 * string_toupper - Change lowercase letters of a string to uppercase
 * @s: The string to change
 *
 * Return: The pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}

	return (s);
}
