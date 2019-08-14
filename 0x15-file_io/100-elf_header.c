#include <stdio.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * main - Display the information contained in the ELF header
 * @argc: The number of command line arguments (must be 2)
 * @argv: The command line argument: the name of an ELF file
 *
 * Return: 0 if successful, 98 otherwise
 */
int main(int argc, char *argv[])
{
	int fd;
	char buf[1024];
	ssize_t size;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	size = read(fd, buf, 1024);
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:\n  Class:\n  Data:\n  Version:\n  OS/ABI:\n");
	printf("  ABI Version:\n  Type:\n  Entry point address:\n");

	return (0);
}
