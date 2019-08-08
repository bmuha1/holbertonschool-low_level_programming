#include "holberton.h"

/**
 * flip_bits - Return how many bits to flip to go to from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_flipped_bits(n ^ m));
}

/**
 * count_flipped_bits - Return number of bits to flip
 * @n: The first number XOR the second number
 *
 * Return: The number of bits you need to flip
 */
unsigned int count_flipped_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}

	return (count);
}
