#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to be checked
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar((-n) % 10 + '0');
		return ((-n) % 10);
	}
	else
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
