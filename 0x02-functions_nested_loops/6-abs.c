#include "holberton.h"

/**
 * _abs - Compute the absolute value of an integer
 * @n: The number to be checked
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
