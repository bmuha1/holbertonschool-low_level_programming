#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Perform simple operations
 * @argc: The number of command line parameters (must be 4)
 * @argv: The command line parameters
 *
 * Return: 0 if successful, 98 if number of arguments is wrong,
 * 99 if operator is not +, -, *, /, or %, 100 if divide by zero
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n",
	       (*get_op_func)(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
