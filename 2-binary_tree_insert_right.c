#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts as fresh node as the right-child
 *
 * @parent: Node to insert the fresh child into
 * @value: Value to be store in the fresh node
 *
 * Return: Pointer to the fresh node , NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;

	if (new_node->right)
	new_node->right->parent = new_node;

	return (new_node);
}

