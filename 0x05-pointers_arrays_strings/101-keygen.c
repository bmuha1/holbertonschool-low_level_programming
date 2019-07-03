#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate the password to 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, offset, total;
	char c[50] = "";
	char letters[] = "BMTc";

	srand(time(NULL));

	total = 0;
	offset = rand() % 4;

	for (i = 0; total < 2772; i++)
	{
		c[i] = letters[offset];
		total += c[i];
	}
	c[i] = '\0';
	printf("%s", c);

	return (0);
}
