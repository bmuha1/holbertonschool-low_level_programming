#include <stdlib.h>
#include "holberton.h"

/**
 * main - Multiply two numbers using algorithm taught by Laura Roudge
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, length1, length2;
	int *mul;

	if (argc != 3)
		error(98);

	for (i = 1; i < argc; i++)
		if (!(is_positive_number(argv[i])))
			error(98);

	length1 = _strlen(argv[1]);
	length2 = _strlen(argv[2]);

	mul = _calloc(length1 + length2 + 1, sizeof(int));
	if (mul == NULL)
		error(98);

	multiply(mul, argv[1], length1, argv[2], length2);
	free(mul);

	return (0);
}

/**
 * is_positive_number - Check if a string contains only digits
 * @number: The string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_positive_number(char *number)
{
	int i;

	for (i = 0; number[i] != '\0'; i++)
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
			return (0);
	}

	return (1);
}

/**
 * error - Print "Error" and exit
 * @status: Error number
 */
void error(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
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

/**
 * _calloc - Allocate memory for an array
 * @nmemb: The number of elements
 * @size: The number of bytes for each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	return (p);
}

/**
 * _memset - Fill n bytes of memory with a constant byte
 * @s: The memory area to fill
 * @b: The constant byte
 * @n: The number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * multiply - Multiply two numbers and print the result
 * @mul: Pointer to store the product
 * @s1: Pointer to the first multiple
 * @length1: String length of s1
 * @s2: Pointer to the second multiple
 * @length2: String length of s2
 */
void multiply(int *mul, char *s1, int length1, char *s2, int length2)
{
	int i, j, l1, l2, p1, p2, c;

	l1 = length1 - 1;
	l2 = length2 - 1;

	for (i = l1; i >= 0; i--)
	{
		c = 0;
		p1 = s1[i] - '0';
		for (j = l2; j >= 0; j--)
		{
			p2 = s2[j] - '0';
			c += mul[i + j + 1] + (p1 * p2);
			mul[i + j + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			mul[i + j + 1] += c;
	}

	i = 0;
	while (mul[i] == 0)
		i++;
	if (i >= length1 + length2 + 1)
		_putchar('0');

	for (; i < (length1 + length2); i++)
		_putchar(mul[i] + '0');
	_putchar('\n');
}
