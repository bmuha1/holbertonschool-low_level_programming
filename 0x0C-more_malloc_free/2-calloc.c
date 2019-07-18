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
	unsigned int i;
	void *p;
	char *p2;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	p2 = p;
	for (i = 0; i < nmemb; i++)
		p2[i] = 0;

	return (p);
}
