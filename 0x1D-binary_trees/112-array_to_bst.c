#include "binary_trees.h"

/**
 * array_to_bst - Built a binary search tree from an array
 * @array: Pointer to the array
 * @size: The number of elements in the array
 *
 * Return: A pointer to the new root node, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
