#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if a node is childless (leaf).
 * @node: Node check
 *
 * Return: 1 if leaf, 0 otherwise
 *         or if  node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);

    if (node->left || node->right)
        return (0);
    else
        return (1);
}
