# 0x18. C - Dynamic libraries

This project is for learning how to create and use dynamic libraries

holberton.h<br>
Contains prototypes for functions used in this project

libholberton.so<br>
Dynamic library containing the following functions:

```
int _putchar(char c);<br>
int _islower(int c);<br>
int _isalpha(int c);<br>
int _abs(int n);<br>
int _isupper(int c);<br>
int _isdigit(int c);<br>
int _strlen(char *s);<br>
void _puts(char *s);<br>
char *_strcpy(char *dest, char *src);<br>
int _atoi(char *s);<br>
char *_strcat(char *dest, char *src);<br>
char *_strncat(char *dest, char *src, int n);<br>
char *_strncpy(char *dest, char *src, int n);<br>
int _strcmp(char *s1, char *s2);<br>
char *_memset(char *s, char b, unsigned int n);<br>
char *_memcpy(char *dest, char *src, unsigned int n);<br>
char *_strchr(char *s, char c);<br>
unsigned int _strspn(char *s, char *accept);<br>
char *_strpbrk(char *s, char *accept);<br>
char *_strstr(char *haystack, char *needle);<br>
```

1-create_dynamic_lib.sh<br>
Script that creates a dynamic library called liball.so from all the .c files in the current directory

100-operations.so<br>
Dynamic library that contains the following C functions that can be called from Python:

```
int add(int a, int b);<br>
int sub(int a, int b);<br>
int mul(int a, int b);<br>
int div(int a, int b);<br>
int mod(int a, int b);<br>
```
