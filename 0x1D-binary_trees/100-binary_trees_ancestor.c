#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if it doesn't exist
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *root = (binary_tree_t *)first;
	binary_tree_t *root2 = (binary_tree_t *)second;

	if (!first || !second)
		return (NULL);

	while (root->parent)
		root = root->parent;
	while (root2->parent)
		root2 = root2->parent;
	if (root != root2)
		return (NULL);

	return (binary_trees_ancestor_helper(root, first, second));
}

binary_tree_t *binary_trees_ancestor_helper(binary_tree_t *root,
				     const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *left, *right;

	if (!root || !first || !second)
		return (NULL);

	if (root == first || root == second)
		return (root);

	left = binary_trees_ancestor_helper(root->left, first, second);
	right = binary_trees_ancestor_helper(root->right, first, second);
	if (left && right)
		return (root);
	else if (left)
		return (left);
	else if (right)
		return (right);
	else
		return (NULL);
}
