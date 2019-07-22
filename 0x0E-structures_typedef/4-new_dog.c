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
	int n_len, o_len, i;

	for (n_len = 0; name[n_len] != '\0'; n_len++)
		;
	for (o_len = 0; owner[o_len] != '\0'; o_len++)
		;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (n_len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(char) * (o_len + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	for (i = 0; i <= n_len; i++)
		new->name[i] = name[i];

	new->age = age;

	for (i = 0; i <= o_len; i++)
		new->owner[i] = owner[i];

	return (new);
}
