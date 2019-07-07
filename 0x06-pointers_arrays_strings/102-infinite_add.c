#include "holberton.h"

/**
 * infinite_add - Add two numbers
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: The pointer to the result if it fits in r, otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, size_n1, size_n2, pos1, pos2, tmp1, tmp2, remainder;

	size_n1 = pos1 = _strlen(n1);
	size_n2 = pos2 = _strlen(n2);

	remainder = 0;
	for (i = size_r; i > 0; i--)
	{
		tmp1 = tmp2 = 0;
		if (n1[pos1] >= '0' && n1[pos1] <= '9' && pos1 >= 0)
			tmp1 = n1[pos1] - '0';
		if (n2[pos2] >= '0' && n2[pos2] <= '9' && pos2 >= 0)
			tmp2 = n2[pos2] - '0';

		r[i - 1] = (tmp1 + tmp2 + remainder) % 10 + '0';

		if (tmp1 + tmp2 + remainder > 9)
			remainder = 1;
		else
			remainder = 0;

		pos1--;
		pos2--;
	}
	r[size_r - 1] = '\0';

	if ((size_r <= size_n1) || (size_r <= size_n2) ||
	    (remainder && (size_r == size_n1 + 1 || size_r == size_n2 + 1)))
		return (0);

	i = 0;
	while (r[i] == '0')
		i++;

	if (r[i] == '\0')
		return (r);
	else
		return (&r[i]);
}

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
