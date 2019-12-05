#include "binary_trees.h"
#include <stdio.h> /* TEMP */

/**
 * binary_tree_is_avl - Check if a binary tree is a valid AVL tree
 * @tree: Pointer to the root node
 *
 * Return: 1 if it's a valid AVL tree, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int diff, left_height, right_height;

	if (!tree)
		return (0);

	if (!binary_tree_is_bst(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (tree->left)
		left_height++;
	if (tree->right)
		right_height++;
	diff = left_height - right_height;
	if (diff > 1 || diff < -1)
		return (0);

	if (tree->left)
		if (!binary_tree_is_avl(tree->left))
			return (0);
	if (tree->right)
		if (!binary_tree_is_avl(tree->right))
			return (0);

	return (1);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

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
		if (!binary_tree_is_bst_helper(tree->left, prev))
			return (0);
		if (prev != NULL && tree->n <= prev->n)
			return (0);
		prev = tree;

		return (binary_tree_is_bst_helper(tree->right, prev));
	}

	return (1);
}
