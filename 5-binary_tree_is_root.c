#include "binary_trees.h"

/**
 * binary_tree_is_root - Assesses node root status
 * @node: Node in question
 *
 * Return: 1 if root, 0 if not or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	(return 0);

	if (node->parent)
	(return 0);
	else
	(return 1);
}
