This project is for learning how to create our own static libraries

create_static_lib.sh<br>
Creates a static library from all .c files in the current directory

holberton.h<br>
Contains prototypes of all the functions used in my static library

libholberton.a<br>
My custom static library containing the functions listed below

Functions contained in my static library:<br>
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
