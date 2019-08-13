#include "holberton.h"

/**
 * read_textfile - Read a text file and print it to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t size, size2;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(*buf));
	if (!buf)
	{
		close(fd);
		return (0);
	}

	size = read(fd, buf, letters);
	if (size == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[size] = '\0';

	close(fd);

	size2 = write(STDOUT_FILENO, buf, size);
	free(buf);
	if (size2 != size)
		return (0);

	return (size);
}
