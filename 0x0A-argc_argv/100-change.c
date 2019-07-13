#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Print the minimum number of coins to make change
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if number of arguments is not 1
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (!is_positive_number(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", number_of_coins(cents));

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

/**
 * number_of_coins - Determine the minimum number of coins to make change
 * @cents: The amount of change
 *
 * Return: The minimum number of coins
 */
int number_of_coins(int cents)
{
	int coins = 0;

	coins += (cents / 25);
	cents %= 25;

	coins += (cents / 10);
	cents %= 10;

	coins += (cents / 5);
	cents %= 5;

	coins += (cents / 2);
	cents %= 2;

	coins += cents;

	return (coins);
}
