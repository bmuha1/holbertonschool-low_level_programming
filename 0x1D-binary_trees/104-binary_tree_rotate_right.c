#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Perform a right-rotation on a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x, *y;

	if (!tree || !tree->left)
		return (tree);

	x = tree;
	y = tree->left;

	x->left = y->right;
	if (y->right != NULL)
		y->right->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		tree = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;
	y->right = x;
	x->parent = y;

	return (tree);
}
