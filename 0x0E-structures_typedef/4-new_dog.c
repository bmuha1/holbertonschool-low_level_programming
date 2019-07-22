#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Create a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
