#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Multiply two numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
		if (!(is_positive_number(argv[i])))
		{
			printf("Error\n");
			exit(98);
		}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

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
