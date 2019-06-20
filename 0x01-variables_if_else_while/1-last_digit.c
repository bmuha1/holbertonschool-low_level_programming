#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * last_digit - Print the last digit and classify it
 * @number: The number to be checked
 *
 */
void last_digit(int number)
{
	int last;

	last = number;

	do {
		last %= 10;
	} while ((last >= 10) || (last <= -10));

	printf("Last digit of %i is %i and ", number, last);

	if (last > 5)
		printf("is greater than 5\n");
	else if (last == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");

}

/**
 * main - Generate a random number and print the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit(n);
	return (0);
}
