#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count the node of atleast 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes number
 *
 * Return: If tree is NULL 0, else node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}

	count += (tree->left || tree->right) ? 1 : 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
