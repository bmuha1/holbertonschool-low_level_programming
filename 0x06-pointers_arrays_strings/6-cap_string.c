#include "holberton.h"

/**
 * cap_string - Capitalize all the words of a string
 * @s: The string to capitalize
 *
 * Return: The pointer to the string
 */
char *cap_string(char *s)
{
	int i, new_word;

	new_word = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			new_word = 0;
		else if (s[i] >= '0' && s[i] <= '9')
			new_word = 0;
		else if ((s[i] >= 'a' && s[i] <= 'z') && new_word == 1)
		{
			s[i] -= 32;
			new_word = 0;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
		    || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
		    || s[i] == '\"' || s[i] == '(' || s[i] == ')'
		    || s[i] == '{' || s[i] == '}')
			new_word = 1;
	}

	return (s);
}
