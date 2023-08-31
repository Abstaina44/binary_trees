#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node at the right of a tree
 * @parent: pointer to the node to insert the child in.
 * @value: value tobe stored in the node
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	new_node->right = parent->right;
	parent->right = new_node;

	if (new_node->right != NULL)
		new_node->right->parent = new_node;

	return (new_node);
}
