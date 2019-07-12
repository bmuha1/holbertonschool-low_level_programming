#include <stdio.h>

/**
 * main - Print the number of command line arguments
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
