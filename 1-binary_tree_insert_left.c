#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts fresh left child node
 *
 * @parent: Node to insert at
 * @value: Value to fresh node
 *
 * If the parent has a left child, replace it with fresh node and
 * makes old left child the fresh left child.
 * Return: fresh node or NULL on unsuccessful, or parent NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;

	if (new_node->left)
	new_node->left->parent = new_node;

	return (new_node);
}

