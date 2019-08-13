#include "holberton.h"

/**
 * create_file - Create a file
 * @filename: The name of the file to create
 * @text_content: The NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size, size2;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	size = _strlen(text_content);
	size2 = write(fd, text_content, size);
	close(fd);

	if (size2 != size)
		return (-1);

	return (1);
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
