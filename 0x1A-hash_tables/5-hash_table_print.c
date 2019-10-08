#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int counter = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp)
		{
			while (temp)
			{
				counter++;
				temp = temp->next;
			}
		}
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp)
		{
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (--counter)
					printf(", ");
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
