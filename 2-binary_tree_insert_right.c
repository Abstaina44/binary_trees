#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_insert_right - Add a new node as the
 * right child of @parent.
 *
 * @parent: The parent for the new node
 * @value: The value for the newly created node
 *
 * Return: A pointer to the newly created node
 * or NULL.
 *
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
=======
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
>>>>>>> f5918584cf9560ebe1d8426b85d98d4fae2e23ec

	if (!parent)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (!node)
	{
		return (NULL);
	}

	if (parent->right)
	{
		parent->right->parent = node;
	}
	node->right = parent->right;
	parent->right = node;

	return (node);

}
