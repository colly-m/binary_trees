#include "binary_trees.h"

/**
 * binary tree_uncle - Locates the uncle of a speified node in the tree.
 * @node: The node whose uncle is being sought.
 * Return: Pointer to the uncle node, NULL if none or invalid input.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);
}
