#include "holberton.h"

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length;

	if (s[0] == '\0')
		return (1);

	length = _strlen_recursion(s);

	return (check_palindrome(s, length, 0, length - 1));
}

/**
 * check_palindrome - Recursively check if a string is a palindrome
 * @s: The string
 * @length: The length of the string
 * @c1: The first character to check
 * @c2: The second character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int length, int c1, int c2)
{
	if (c1 >= c2)
		return (1);

	if (s[c1] != s[c2])
		return (0);
	else
		return (check_palindrome(s, length, c1 + 1, c2 - 1));
}

/**
 * _strlen_recursion - Determine the length of a string recursively
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
