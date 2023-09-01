#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the tree
 * Return: If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *family = NULL;

	if (node == NULL)
		return (NULL);
	family = node->parent;
	if (family == NULL)
		return (NULL);
	if (family->left && family->right)
	{
		if (family->left == node)
			return (family->right);
		else if (family->right == node)
			return (family->left);
	}
	return (NULL);
}
