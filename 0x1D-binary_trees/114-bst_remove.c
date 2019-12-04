#include "binary_trees.h"
#include <stdio.h> /* TEMP */

/**
 * bst_remove - Remove a node from a binary search tree
 * @root: Pointer to the root of the tree
 * @value: The value to remove
 *
 * Return: A pointer to the new root node
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);

	if (root->n > value)
		root->left = bst_remove(root->left, value);
	else if (root->n < value)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left && root->right)
		{
			temp = root->right;
			while (temp->left)
				temp = temp->left;
			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
		}
		else
		{
			if (!root->left && !root->right)
			{
				free(root);
				return (NULL);
			}
			temp = root;
			if (!root->left)
				root = root->right;
			else if (!root->right)
				root = root->left;
			if (temp->parent->left == temp)
				temp->parent->left = root;
			else
				temp->parent->right = root;
			root->parent = temp->parent;
			free(temp);
		}
	}
	return (root);
}
