#include <stdio.h>

/**
 * main - Print all the command line arguments
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
