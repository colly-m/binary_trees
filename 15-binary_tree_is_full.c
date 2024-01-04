#include "binary_trees.h"

/**
 * is_tree_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full
 *         0 if tree is NULL
 */
int is_tree_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	if (tree->left != NULL && tree->right != NULL)
		return (is_tree_full(tree->left) && is_tree_full(tree->right));

	return 0;
}
