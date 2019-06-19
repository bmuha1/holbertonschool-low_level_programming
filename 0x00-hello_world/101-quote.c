/**
 * main - Print string to standard error
 *
 * Return: Always 1 (Error)
 */
#include <unistd.h>

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n"));
	return (1);
}
