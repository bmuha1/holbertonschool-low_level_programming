#include "binary_trees.h"

/**
 * binary_tree_is_bst - Check if a binary tree is a binary search tree
 * @tree: Pointer to the root node
 *
 * Return: 1 if it's a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *prev = NULL;

	if (!tree)
		return (0);

	return (binary_tree_is_bst_helper((binary_tree_t *)tree, prev));
}

/**
 * binary_tree_is_bst_helper - Check if a binary tree is a binary search tree
 * @tree: Pointer to the root node
 * @prev: Pointer to the previous node
 *
 * Return: 1 if it's a valid BST, 0 otherwise
 */
int binary_tree_is_bst_helper(binary_tree_t *tree, binary_tree_t *prev)
{
	if (tree)
	{
		if (tree->left)
			if (tree->n == tree->left->n)
				return (0);
		if (tree->right)
			if (tree->n == tree->right->n)
				return (0);
		if (!binary_tree_is_bst_helper(tree->left, prev))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);
		prev = tree;

		return (binary_tree_is_bst_helper(tree->right, prev));
	}

	return (1);
}
