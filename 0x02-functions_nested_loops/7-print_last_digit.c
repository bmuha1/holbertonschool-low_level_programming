#include "holberton.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to be checked
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int tmp;

	if (n < 0)
		tmp = (-n) % 10;
	else
		tmp = n % 10;

	_putchar(tmp + '0');
	return (tmp);
}
