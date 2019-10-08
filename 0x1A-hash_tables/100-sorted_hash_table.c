#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: Pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	new->array = calloc(size, sizeof(shash_node_t *));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	return (new);
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (0);

	new = malloc(sizeof(shash_node_t));
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

	new->sprev = NULL;
	new->snext = NULL;
	add_shash_node(ht, new);
	return (1);
}

/**
 * add_shash_node - Add the node to the sorted hash table
 * @ht: The hash table
 * @node: The node to add
 */
void add_shash_node(shash_table_t *ht, shash_node_t *node)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

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
			return;
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
	add_shash_order(ht, node);
}

/**
 * add_shash_order - Add the node in the sorted position
 * @ht: The hash table
 * @node: The node to add
 */
void add_shash_order(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = NULL;
	shash_node_t *temp2 = NULL;

	temp = ht->shead;
	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(node->key, temp->key) <= 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		while (temp->snext)
		{
			if (strcmp(node->key, temp->key) > 0)
				temp = temp->snext;
			else
			{
				temp2 = temp;
				temp = temp->sprev;
				temp2->sprev = node;
				break;
			}
		}

		node->snext = temp->snext;
		temp->snext = node;
		node->sprev = temp;
		if (!node->snext)
			ht->stail = node;
	}
}

/**
 * shash_table_get - Retrieve a value associated with a key
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value associated with the element, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (!ht || !ht->array || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Print a sorted hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int counter = 0;

	if (!ht || !ht->array)
		return;

	temp = ht->shead;
	while (temp)
	{
		counter++;
		temp = temp->snext;
	}

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (--counter)
			printf(", ");
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print a sorted hash table in reverse
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int counter = 0;

	if (!ht || !ht->array)
		return;

	temp = ht->stail;
	while (temp)
	{
		counter++;
		temp = temp->sprev;
	}

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (--counter)
			printf(", ");
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a sorted hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (!ht || !ht->array)
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
