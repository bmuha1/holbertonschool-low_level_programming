#include "holberton.h"

/**
 * get_endianness - Check the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 0x76543210;
	char *c = (char *) &i;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
