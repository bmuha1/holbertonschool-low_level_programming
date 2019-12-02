#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (1 + left_size + right_size);
}
