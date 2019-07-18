#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to use
 *
 * Return: Pointer to the allocated memory containing new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n > size2)
		n = size2;

	cat = malloc(sizeof(char) * (size1 + n + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		cat[i] = s1[i];
	for (; i < size1 + n; i++)
		cat[i] = s2[i - size1];
	cat[size1 + n] = '\0';

	return (cat);
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
