#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node = NULL;

	tree_node = malloc(sizeof(binary_tree_t));
	if (tree_node == NULL)
		return (NULL);

	tree_node->n = value;
	tree_node->right = NULL;
	tree_node->left = NULL;
	
	if (parent == NULL)
	{
		parent = tree_node;
	}
	else
		tree_node->parent = parent;

	return (tree_node);
}

