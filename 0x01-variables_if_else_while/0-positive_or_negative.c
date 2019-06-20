#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Check if a number if positive, negative, or zero
 * @number: The number to be checked
 */
void positive_or_negative(int number)
{
	if (number > 0)
		printf("%d is positive\n", number);
	else if (number == 0)
		printf("%d is zero\n", number);
	else
		printf("%d is negative\n", number);
}

/**
 * main - Generate a random number and check its value
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	positive_or_negative(n);
	return (0);
}
