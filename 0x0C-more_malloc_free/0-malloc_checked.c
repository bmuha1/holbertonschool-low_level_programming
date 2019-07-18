#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The amount of memory to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
