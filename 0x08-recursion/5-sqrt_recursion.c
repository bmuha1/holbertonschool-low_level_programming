#include "holberton.h"

/**
 * _sqrt_recursion - Determine the natural square root of a number
 * @n: The number
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (n);

	return (find_sqrt(n, n));
}

/**
 * find_sqrt - Find the natural square root of a number
 * @n: The number
 * @i: The number to check
 *
 * Return: The square root if it exists, otherwise -1
 */
int find_sqrt(int n, int i)
{
	if (i * i < n)
		return (-1);

	if (i * i == n)
		return (i);
	else
		return (find_sqrt(n, i - 1));
}
