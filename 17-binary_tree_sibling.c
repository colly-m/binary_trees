#include "binary_trees.h"

/**
 * Locates a node's sibling within the tree.
 * @node: The node whose sibling is sought.
 * @return: Pointer to the sibling, NULL if none or invalid input.
 */
void traverse_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    traverse_inorder(tree->left, func);
    func(tree->n);
    traverse_inorder(tree->right, func);
}
