#include <stdio.h>
#include "holberton.h"

/**
 * main - Print the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, largest;
	const long num = 612852475143;

	for (i = 1; i <= 100000000; i++)
	{
		if (num % i == 0)
		{
			if (prime(i))
				largest = i;
		}
	}

	printf("%li\n", largest);

	return (0);
}

/**
 * prime - Check if a number is prime
 * @p: The number to be checked
 *
 * Return: 1 if prime, 0 if not prime
 */
int prime(int p)
{
	int i;

	if (p < 2)
		return (0);
	else if (p == 2)
		return (1);

	for (i = 2; i < p; i++)
	{
		if (p % i == 0)
			return (0);
	}

	return (1);
}
