#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - Copy the src string to the dest string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
