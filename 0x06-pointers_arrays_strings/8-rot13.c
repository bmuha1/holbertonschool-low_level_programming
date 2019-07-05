#include "holberton.h"

/**
 * rot13 - Encode a string using rot13
 * @s: The string to encode
 *
 * Return: The pointer to the string
 */
char *rot13(char *s)
{
	int i, j;
	char normal[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
			 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char rotate[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
			 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
			 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] = rotate[j];
				j = 52;
			}
		}
	}

	return (s);
}
