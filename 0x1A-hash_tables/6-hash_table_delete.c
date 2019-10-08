#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				temp = ht->array[index]->next;
				free(ht->array[index]->key);
				free(ht->array[index]->value);
				free(ht->array[index]);
				ht->array[index] = temp;
			}
			free(ht->array[index]);
		}
	}

	free(ht->array);
	free(ht);
}
