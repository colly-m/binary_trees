#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: If tree is NULL 0, else the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	size_t l_height = 0;
	size_t r_height = 0;

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((l_height > r_height) ? l_height : r_height);
}
