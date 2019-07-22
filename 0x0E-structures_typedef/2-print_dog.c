#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print a struct dog
 * @d: The name of the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (!(d->age))
		d->age = -1;
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: ", d->name);
	if (d->age == -1)
		printf("(nil)");
	else
		printf("%f", d->age);
	printf("\nOwner: %s\n", d->owner);
}
