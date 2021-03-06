#include "binary_trees.h"

/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: Pointer to the root node
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size = binary_tree_size(tree);

	if (size == 0)
		return (0);

	return (binary_tree_is_complete_helper(tree, 0, size));
}

/**
 * binary_tree_is_complete_helper - Check if a binary tree is complete
 * @tree: Pointer to the root node
 * @index: The index
 * @size: The size of the tree
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete_helper(const binary_tree_t *tree,
				   unsigned int index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);

	return (binary_tree_is_complete_helper(tree->left, 2 * index + 1, size)
		&& binary_tree_is_complete_helper(tree->right, 2 * index + 2,
						  size));
}

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
