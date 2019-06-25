#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const long big = 1000000000000;
	unsigned long largen;
	unsigned long smalln;
	unsigned long largen1;
	unsigned long smalln1;
	unsigned long largen2;
	unsigned long smalln2;
	int i;

	largen2 = 1 / big;
	smalln2 = 1 % big;
	largen1 = 2 / big;
	smalln1 = 2 % big;

	printf("%lu, %lu, ", smalln2, smalln1);

	for (i = 2; i < 98; i++)
	{
		if (largen2 != 0)
			largen = largen1 + largen2 +
				((smalln1 % big) + (smalln2 % big)) / big;
		else
			largen = ((smalln2 + smalln1) / big) + largen1;

		smalln = ((smalln1 % big) + (smalln2 % big)) % big;

		if (largen != 0)
			printf("%lu", largen);
		if (i == 97)
			printf("%lu\n", smalln);
		else
			printf("%lu, ", smalln);

		largen2 = largen1;
		smalln2 = smalln1;
		largen1 = largen;
		smalln1 = smalln;
	}
	return (0);
}
