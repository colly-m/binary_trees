#include "binary_trees.h"

/**
 * find_uncle - Locates the uncle of a speified node in the tree.
 * @node: The node whose uncle is being sought.
 * Return: Pointer to the uncle node, NULL if none or invalid input.
 */
binary_tree_t *find_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);
}

/**
 * find_sibling - Retrieves a node's sibling pointer, handling edge cases.
 * @node: Target node for sibling search.
 * Return: Sibling's pointer, or NULL if not found or invalid input.
 */
binary_tree_t *find_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
