#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Concatenate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to newly allocated space containing both strings,
 * or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	cat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		cat[i] = s1[i];
	for (; i < size1 + size2; i++)
		cat[i] = s2[i - size1];
	cat[size1 + size2] = '\0';

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
