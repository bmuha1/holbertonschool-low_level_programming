#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;

	return (new);
}
