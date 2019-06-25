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

	tmp = n % 10;

	if (tmp < 0)
		tmp = -tmp;

	_putchar(tmp + '0');
	return (tmp);
}
