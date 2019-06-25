#include <stdio.h>

/**
 * main - Print the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib[98];
	unsigned long large[98];
	unsigned long small[98];

	int i;
	const long big = 1000000000000;

	fib[0] = 1;
	fib[1] = 2;
	large[0] = 1 / big;
	small[0] = 1 % big;
	large[1] = 2 / big;
	small[1] = 2 % big;

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

		if (large[i - 2] != 0)
			large[i] = large[i - 1] + large[i - 2] +
				((small[i - 1] % big) + (small[i - 2] % big)) /
				big;
		else
			large[i] = (fib[i - 1] + fib[i - 2]) / big;

		small[i] = ((small[i - 1] % big) + (small[i - 2] % big)) % big;
	}

	for (i = 0; i < 97; i++)
	{
		if (large[i] != 0)
			printf("%lu", large[i]);
		printf("%lu, ", small[i]);
	}
	printf("%lu%lu\n", large[i], small[i]);

	return (0);
}
