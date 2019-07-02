#include "holberton.h"

/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to the string to convert
 *
 * Return: The integer that was converted
 */
int _atoi(char *s)
{
	int i, start, negative, number;

	start = -1;
	negative = 0;
	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			start = i;

		if (s[i] == '-' && start == -1)
		{
			if (negative)
				negative = 0;
			else
				negative = 1;
		}
	}

	if (start != -1)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				number = number * 10 + s[i] - '0';

			if ((s[i] < '0' || s[i] > '9') &&
			    (s[i - 1] >= '0' && s[i - 1] <= '9'))
				break;
		}
	}

	if (negative)
		return (-number);
	else
		return (number);
}
