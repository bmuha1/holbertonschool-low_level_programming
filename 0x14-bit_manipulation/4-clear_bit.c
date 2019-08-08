#include "holberton.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: The number
 * @index: The index
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
