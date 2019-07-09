#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Set the value of a pointer to a char
 * @s: The pointer to set to the pointer to a char
 * @to: The pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
