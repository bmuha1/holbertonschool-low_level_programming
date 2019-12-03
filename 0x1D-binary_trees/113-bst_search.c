#include "binary_trees.h"

/**
 * bst_search - Search for a value in a binary search tree
 * @tree: Pointer to the root node
 * @value: The value to search for
 *
 * Return: A pointer to the node, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *curr = (bst_t *)tree;

	if (!tree)
		return (NULL);

	while (curr->n != value)
	{
		if (curr->n > value && curr->left)
			curr = curr->left;
		else if (curr->n < value && curr->right)
			curr = curr->right;
		else
			return (NULL);
	}

	return (curr);
}
