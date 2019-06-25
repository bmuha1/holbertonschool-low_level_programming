#include <stdio.h>

/**
 * main - Print the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fib[32];
	long sum;
	int i;

	fib[0] = 1;
	fib[1] = 2;
	sum = 0;

	for (i = 2; i < 32; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	for (i = 0; i < 32; i++)
	{
		if (fib[i] % 2 == 0)
			sum += fib[i];
	}

	printf("%li\n", sum);

	return (0);
}
