#include "holberton.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: The number
 * @index: The index
 *
 * Return: The value of the bit at index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
		return ((n >> index) & 1);
	else
		return (-1);
}
