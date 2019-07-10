#include "holberton.h"

/**
 * is_prime_number - Determine if a number is prime
 * @n: The number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (check_prime(n, n - 1));
}

/**
 * check_prime - Recursively check if a number is prime
 * @n: The number
 * @i: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i - 1));
}
