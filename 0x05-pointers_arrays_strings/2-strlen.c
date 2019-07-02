#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
		length++;

	return (length);
}
