#include "holberton.h"

/**
 * wildcmp - Check if two strings can be considered identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the two strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int l1, l2;

	l1 = _strlen_recursion(s1);
	l2 = _strlen_recursion(s2);

	return (check_wildcmp(s1, s2, l1, l2, 0, 0));
}

/**
 * check_wildcmp - Recursively check if a string is a palindrome
 * @s1: The first string
 * @s2: The second string
 * @l1: The length of the first string
 * @l2: The length of the second string
 * @c1: Position of the first character to check
 * @c2: Position of the second character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_wildcmp(char *s1, char *s2, int l1, int l2, int c1, int c2)
{
	if (c1 > l1 && c2 > l2)
		return (1);
	else if (s1[c1] == s2[c2])
		return (check_wildcmp(s1, s2, l1, l2, c1 + 1, c2 + 1));
	else if ((s1[c1] == '\0') && s2[c2] != '*')
		return (0);
	else if ((s2[c2] == '\0') && s1[c1] != '*')
		return (0);
	else if (s2[c2] == '*')
	{
		if (s2[c2 + 1] == '*')
			return (check_wildcmp(s1, s2, l1, l2, c1, c2 + 1));
		else
			return (check_wildcmp(s1, s2, l1, l2, c1 + 1, c2) ||
				check_wildcmp(s1, s2, l1, l2, c1, c2 + 1));
	}
	else
		return (0);
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
