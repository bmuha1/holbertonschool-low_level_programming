#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: The number of elements
 * @size: The number of bytes for each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	return (p);
}

/**
 * _memset - Fill n bytes of memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
