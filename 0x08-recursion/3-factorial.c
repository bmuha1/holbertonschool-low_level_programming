#include "holberton.h"

/**
 * factorial - Determine the factorial of a given number
 * @n: The given number
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
