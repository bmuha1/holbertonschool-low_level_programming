#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: Pointer to newly allocated space containing an array of words,
 * or NULL if failure
 */
char **strtow(char *str)
{
	int i, j, k, wordcount, strlength;
	char **words;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	strlength = _strlen(str);
	wordcount = count_words(str);
	if (wordcount == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wordcount + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; i < strlength; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; str[k] != '\0' && str[k] != ' '; k++)
				k++;
			words[j] = malloc(sizeof(char) * (k + 1));
			if (words[j] == NULL)
			{
				free(words);
				for (k = 0; k <= j; k++)
					free(words[k]);
				return (NULL);
			}
			k = 0;
			while (str[i] != ' ')
			{
				words[j][k] = str[i];
				i++;
				k++;
			}
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}

/**
 * count_words - Count the number of words in a string
 * @str: The string
 *
 * Return: The number of words (any characters separated by spaces)
 */
int count_words(char *str)
{
	int i;
	int count = 0, word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && word == 0)
		{
			count++;
			word = 1;
		}
		else if (str[i] == ' ')
		{
			word = 0;
		}
	}

	return (count);
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
