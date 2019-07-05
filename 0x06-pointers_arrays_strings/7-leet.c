#include "holberton.h"

/**
 * leet - Encode a string into 1337
 * @s: The string to make 1337
 *
 * Return: The pointer to the string
 */
char *leet(char *s)
{
	int i, j;
	char make1337[] = {'4', '3', '0', '7', '1'};
	char lower1337[] = {'a', 'e', 'o', 't', 'l'};
	char upper1337[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == lower1337[j]) || (s[i] == upper1337[j]))
				s[i] = make1337[j];
		}
	}

	return (s);
}
