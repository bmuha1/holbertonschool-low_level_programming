#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of main function
 * @argc: The number of command line arguments (must be 2)
 * @argv: The command line arguments
 *
 * Return: 0 for success, 1 if argc != 2, 2 if number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++, p++)
		printf("%02x ", *p);
	printf("%02x\n", *p);

	return (0);
}
