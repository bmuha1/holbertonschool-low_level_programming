#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Add two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The quotient of the two integers, or error if divide by zero
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Divide two integers and return the remainder
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The remainder of the division of a and b, or error if divide by zero
 */
int op_mod(int a, int b)
{
	return (a % b);
}
