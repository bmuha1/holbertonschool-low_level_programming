#include <stdio.h>

/**
 * main - Print combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1;
	int ones1;
	int tens2;
	int ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = 0; tens2 <= 9; tens2++)
			{
				for (ones2 = 0; ones2 <= 9; ones2++)
				{
					if ((tens1 == 0 && ones1 == 0) ||
					    (tens2 >= tens1 && ones2 > ones1))
					{
						putchar(tens1 + '0');
						putchar(ones1 + '0');
						putchar(' ');
						putchar(tens2 + '0');
						putchar(ones2 + '0');

						if (!(tens1 == 9 &&
						      ones1 > 7))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
