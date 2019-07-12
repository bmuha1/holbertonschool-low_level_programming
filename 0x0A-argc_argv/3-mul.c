#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
