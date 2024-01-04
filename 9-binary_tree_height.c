#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: If tree is NULL 0, else the height
 */
size_t calculate_tree_height(const binary_tree_t *current_node)
{
<<<<<<< HEAD
    size_t left_height = 0;
    size_t right_height = 0;

    if (!current_node)
        return (0);

    left_height = current_node->left ? 1 + calculate_tree_height(current_node->left) : 0;
    right_height = current_node->right ? 1 + calculate_tree_height(current_node->right) : 0;
=======
	size_t l_height = 0;
	size_t r_height = 0;

	if (!tree)
	{
		return (0);
	}

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
>>>>>>> 598edca1a175210456f3fad8d5a0a5583eba857b

    return (left_height > right_height ? left_height : right_height);
}
