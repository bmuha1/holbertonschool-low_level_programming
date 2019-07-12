#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: The number of command line arguments (should be 1)
 * @argv: The command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
