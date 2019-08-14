#include <stdio.h>
#include <string.h>
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
	Elf64_Ehdr *header;
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
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}
	size = read(fd, header, sizeof(Elf64_Ehdr));
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	if (memcmp((*header).e_ident, ELFMAG, SELFMAG) == 0)
		print_elf();
	else
	{
		dprintf(STDERR_FILENO, "Error: not a valid ELF file");
		exit(98);
	}
	close(fd);
	return (0);
}

/**
 * print_elf - Print ELF header information
 */
void print_elf(void)
{
	printf("ELF Header:\n");
	printf("  Magic:\n  Class:\n  Data:\n  Version:\n  OS/ABI:\n");
	printf("  ABI Version:\n  Type:\n  Entry point address:\n");
}
