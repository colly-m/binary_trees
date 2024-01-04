#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measure the depth of node in binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL 0, else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}
