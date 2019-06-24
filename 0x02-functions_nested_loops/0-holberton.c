#include "holberton.h"

/**
 * main - Print the word "Holberton"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	holberton();

	return (0);
}

/**
 * holberton - Print the word "Holberton"
 */
void holberton(void)
{

	char h[] = "Holberton\n";
	int i;

	for (i = 0; h[i] != '\0'; i++)
		_putchar(h[i]);
}
