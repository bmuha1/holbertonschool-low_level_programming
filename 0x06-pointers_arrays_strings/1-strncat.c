#include "holberton.h"

/**
 * _strncat -  Concatenate two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The string to append
 * @n: The number of bytes to use from src
 *
 * Return: pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, src_length, dest_length;

	src_length = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;

	dest_length = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;

	if (n > src_length)
		n = src_length;

	for (i = 0; i < n; i++)
		dest[dest_length + i] = src[i];
	dest[dest_length + i] = '\0';

	return (dest);
}
