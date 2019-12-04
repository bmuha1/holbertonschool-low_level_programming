#include "binary_trees.h"

/**
 * bst_insert - Insert a value in a binary search tree
 * @tree: Pointer to the root node of the binary search tree
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;
	bst_t *x = NULL;
	bst_t *y = NULL;

	if (!tree)
		return (NULL);

	new = bst_node(value);
	if (!new)
		return (NULL);
	if (*tree)
		x = *tree;
	while (x)
	{
		y = x;
		if (value < x->n)
			x = x->left;
		else if (value > x->n)
			x = x->right;
		else
		{
			free(new);
			return (NULL);
		}
	}

	if (!y)
		y = *tree = new;
	else if (value < y->n)
	{
		y->left = new;
		new->parent = y;
	}
	else
	{
		y->right = new;
		new->parent = y;
	}
	return (new);
}
