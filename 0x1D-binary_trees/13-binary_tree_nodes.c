#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + left_nodes + right_nodes);
	return (left_nodes + right_nodes);
}
