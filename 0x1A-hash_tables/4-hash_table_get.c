#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value associated with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (ht->array[index]->key == key)
			return (ht->array[index]->value);
		(ht->array[index])++;
	}

	return (NULL);
}
