#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - Concatenate all the command line arguments
 * @ac: The number of arguments
 * @av: The arguments
 *
 * Return: Pointer to newly allocated space containing the string,
 * or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int position = 0, length = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);

	cat = malloc(sizeof(char) * (length + ac + 1));
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cat[position++] = av[i][j];

		cat[position++] = '\n';
	}
	cat[position] = '\0';

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
