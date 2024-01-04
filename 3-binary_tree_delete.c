#include "binary_trees.h"

/**
 * binary_tree_delete - Wipes a binary tree memory
 * @tree: Handle empty tree
 *
 * Description:
 * Liberates memory for each node systematically, preventing leaks
 * Ensures complete erasure of the tree structure
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
