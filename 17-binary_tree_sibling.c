#include "binary_trees.h"

/**
 * binary_tree_sibling - Locates a node's sibling within the tree.
 * @node: The node whose sibling is sought.
 * Return: Pointer to the sibling, NULL if none or invalid input.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
