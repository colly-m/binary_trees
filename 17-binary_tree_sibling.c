#include "binary_trees.h"

/**
 * Locates a node's sibling within the tree.
 * @node: The node whose sibling is sought.
 * @return: Pointer to the sibling, NULL if none or invalid input.
 */
binary_tree_t *find_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (NULL);

    if (node == node->parent->left)
        return (node->parent->right);
    else if (node == node->parent->right)
        return (node->parent->left);
    else
        return (NULL);
}
