#include "binary_trees.h"

/**
 * is_full_tree - Confirms full tree structure
 * @tree: Root of the tree to inspec
 *
 * Return:  for full tree, 0 otherwise (null included)
 */
int is_full_tree(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left != NULL && tree->right != NULL)
        return (is_full_tree(tree->left) && is_full_tree(tree->right));

    return (0);
}
