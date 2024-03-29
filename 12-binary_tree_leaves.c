#include "binary_trees.h"

/**
 * binary_tree_leaves - Function to count leaves in a binary tree
 * @tree: pointer to the root node of the tree leaves to be counted
 *
 * Return: If tree is NULL 0, else number of the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	if (!tree)
	{
		return (0);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (left_leaves + right_leaves);
}
