#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void args_error(void);
void file_from_error(char *file);
void file_to_error(char *file);
void close_error(int fd);
void print_elf(void);

int _putchar(char c);
int _strlen(char *s);

#endif
