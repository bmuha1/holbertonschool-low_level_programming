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
/*	char letters[] = "BMTc";*/

	srand(time(NULL));

	total = 0;
	for (i = 0; total < (2772 - 100); i++)
	{
		offset = 33 + rand() % 94;
		c[i] = offset;
		total += c[i];
	}
	c[i] = 2772 - total;
	i++;
	c[i] = '\0';
	printf("%s", c);

	return (0);
}
