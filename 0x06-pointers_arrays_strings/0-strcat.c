#include "holberton.h"

/**
 * _strcat -  Concatenate two strings
 * @dest: The destination string
 * @src: The string to append
 *
 * Return: pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, src_length, dest_length;

	src_length = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;

	dest_length = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_length++;

	for (i = 0; i <= src_length; i++)
		dest[dest_length + i] = src[i];

	return (dest);
}
