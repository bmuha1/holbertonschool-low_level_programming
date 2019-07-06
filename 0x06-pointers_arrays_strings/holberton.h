#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int _strlen(char *s);
void print_buffer(char *b, int size);
void print_line(char *b, int position, int n);

#endif