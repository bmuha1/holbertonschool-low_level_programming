#include "binary_trees.h"

/**
 * binary_tree_levelorder - Go through a binary tree with level-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
		binary_tree_level_helper(tree, func, i);
}

/**
 * binary_tree_level_helper - Call a function for all nodes at a certain level
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 * @level: The level
 */
void binary_tree_level_helper(const binary_tree_t *tree, void (*func)(int),
			     int level)
{
	if (!tree || !func)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		binary_tree_level_helper(tree->left, func, level - 1);
		binary_tree_level_helper(tree->right, func, level - 1);
	}
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
