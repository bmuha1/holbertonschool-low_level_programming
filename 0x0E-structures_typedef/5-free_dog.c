#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free a dog
 * @d: The dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
