#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Select the correct function to perform the operation
 * @s: The operator passed as argument to the program
 *
 * Return: Pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
