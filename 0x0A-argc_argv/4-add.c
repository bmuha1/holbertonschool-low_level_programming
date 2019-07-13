#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Add positive numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if any arguments are not positive numbers
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%u\n", sum);

	return (0);
}

/**
 * is_positive_number - Check if a string contains only digits
 * @number: The string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_positive_number(char *number)
{
	int i;

	for (i = 0; number[i] != '\0'; i++)
	{
		if (!isdigit(number[i]))
			return (0);
	}

	return (1);
}
