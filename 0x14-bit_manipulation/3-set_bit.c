#include "holberton.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: The number
 * @index: The index
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= 1UL << index;

	return (1);
}
