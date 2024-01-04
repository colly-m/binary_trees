#include "binary_trees.h"

/**
 * find_sibling - Locates a node's sibling within the tree.
 * @node: The node whose sibling is sought.
 * Return: Pointer to the sibling, NULL if none or invalid input.
 */
void traverse_inorder(const binary_tree_t *tree, void (*func)(int))
{
<<<<<<< HEAD
    if (!tree || !func)
        return;

    traverse_inorder(tree->left, func);
    func(tree->n);
    traverse_inorder(tree->right, func);
=======
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	else
		return (NULL);
>>>>>>> 598edca1a175210456f3fad8d5a0a5583eba857b
}
