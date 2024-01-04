#include "binary_trees.h"


/**
 * is_perfect_tree - Verifies perfect binary tree structure (all levels full).
 * @tree: Root node pointer.
 *
 * Return: 1 if perfect, 0 otherwise or if NULL.
 */
int is_perfect_tree(const binary_tree_t *tree)
{
	size_t tree_height = 0, node_count = 0, power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	tree_height = calculate_tree_height(tree);
	node_count = count_nodes(tree);
	power = calculate_power(2, tree_height + 1);

	return (power - 1 == node_count);
}

/**
 * calculate_power - Raises a number to a specified power.
 * @base: The number to be exponentiated.
 * @exponent: The power to raise the base to.
 * Return: The resulting value (base^exponent).
 */
size_t calculate_power(size_t base, size_t exponent)
{
	size_t result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}
	return (result);
}

/**
 * count_nodes - Tallies the nodes within a tree.
 * @tree: The tree to be counted.
 * Return: The total number of nodes.
 */
size_t count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count_nodes(tree->left) + count_nodes(tree->right) + 1);
}

/**
 * calculate_tree_height - Measures the height of a binary tree.
 * @tree: The tree to be measured.
 * Return: The calculated height.
 */
size_t calculate_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = tree->left ? 1 + calculate_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + calculate_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}
