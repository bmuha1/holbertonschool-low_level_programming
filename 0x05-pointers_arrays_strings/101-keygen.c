#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	char c[10];
	srand(time(NULL));

	for (i = 0; i < 10; i++)
		c[i] = 33 + rand() % 94;

	printf("%s\n", c);

	return (0);
}
