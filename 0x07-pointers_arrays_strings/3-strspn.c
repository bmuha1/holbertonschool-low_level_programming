#include "holberton.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to search
 * @accept: The bytes to to search for
 *
 * Return: The number of bytes from the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; (s[i] >= 'A' && s[i] <= 'Z') ||
		     (s[i] >= 'a' && s[i] <= 'z'); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}

	return (count);
}
