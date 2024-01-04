#include "binary_trees.h"

/**
 * binary_tree_size - function rto measure the size of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 *
 * Return: If tree is NULL 0, else the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz = 0;

	if (!tree)
	{
		return (0);
	}

	sz += 1;
	sz += binary_tree_size(tree->left);
	sz += binary_tree_size(tree->right);

	return (sz);
}
