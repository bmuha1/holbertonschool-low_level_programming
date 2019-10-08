#include "hash_tables.h"

/**
 * hash_table_set - Add an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;

	if (!ht || !key)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	if (!(new->key))
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!(new->value))
	{
		free(new);
		free(new->key);
		return (0);
	}

	add_node(ht, new);
	return (1);
}

/**
 * add_node - Add the node to the hash table
 * @ht: The hash table
 * @node: The node to add
 */
void add_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	index = key_index((unsigned char *)node->key, ht->size);
	temp = ht->array[index];

	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp)
		{
			free(temp->value);
			temp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	else
	{
		node->next = NULL;
		ht->array[index] = node;
	}
}
