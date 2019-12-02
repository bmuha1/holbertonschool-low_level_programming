#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = (1 + binary_tree_height(tree->left));
	right_height = (1 + binary_tree_height(tree->right));

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
