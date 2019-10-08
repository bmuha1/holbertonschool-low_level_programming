#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	if (!new)
		return NULL;

	new->array = malloc(size * sizeof(hash_node_t *));
	if (!new)
	{
		free(new);
		return NULL;
	}

	return (new);
}
