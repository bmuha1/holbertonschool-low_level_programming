#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Reallocate a memory block
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new);

	if (new_size > old_size)
		_memcpy(new, ptr, old_size);
	else
		_memcpy(new, ptr, new_size);

	free(ptr);
	return (new);
}

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: The destination to copy to
 * @src: The source to copy from
 * @n: The number of bytes to copy
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
