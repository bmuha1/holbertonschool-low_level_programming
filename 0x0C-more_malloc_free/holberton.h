#ifndef HOLBERTON_H
#define HOLBERTON_H

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);
int _putchar(char c);
int is_positive_number(char *number);
void error(int status);
void multiply(int *mul, char *s1, int length1, char *s2, int length2);

#endif
