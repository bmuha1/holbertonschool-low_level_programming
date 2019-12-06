#include "binary_trees.h"

/**
 * binary_tree_is_bst - Check if a binary tree is a binary search tree
 * @tree: Pointer to the root node
 *
 * Return: 1 if it's a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_is_bst_helper((binary_tree_t *)tree, INT_MIN,
					  INT_MAX));
}

/**
 * binary_tree_is_bst_helper - Check if a binary tree is a binary search tree
 * @tree: Pointer to the root node
 * @min: The minimum for the current node
 * @max: The maximum for the current node
 *
 * Return: 1 if it's a valid BST, 0 otherwise
 */
int binary_tree_is_bst_helper(binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (binary_tree_is_bst_helper(tree->left, min, tree->n - 1) &&
		binary_tree_is_bst_helper(tree->right, tree->n + 1, max));
}
