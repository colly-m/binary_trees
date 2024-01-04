#include "binary_trees.h"

/**
 * binary_tree_balance - Function to measure balance factor of a binary tree
 * @tree: pointer to root node of tree to measure the balance factor
 *
 * Return: If tree is NULL 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}


/**
 * binary_tree_height - Function to meaure hieght of a binary tree
 * @tree: pointer to root node of the tree to be measured
 *
 * Return: 0 If NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (tree)
	{
		lt = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;
		rt = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (lt > rt ? lt : rt);
	}
	return (0);
}
