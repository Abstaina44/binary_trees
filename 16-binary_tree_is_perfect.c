#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	return (is_perfect(tree, &depth));
}

/**
 * node_depth - helper function to measure the tree height
 * @node: pointerr to the tree
 * Return: depth
 */
int node_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (0);

	return (node_depth(node->parent) + 1);
}
/**
 * is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 for true and 0 otherwise
 */
int is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
/**
 * is_perfect - checks is a tree is perfect
 * @tree: The tree to check
 * @depth: depth of the tree
 * Return: 1 for true and 0 for no
 */
int is_perfect(const binary_tree_t *tree, int *depth)
{
	int left_perf, right_perf;

	if (tree == NULL)
		return (0);
	if (is_leaf(tree) == 1)
	{
		if (*depth == 0)
			*depth = node_depth(tree);
		if (*depth == node_depth(tree))
			return (1);
		return (0);
	}
	left_perf = is_perfect(tree->left, depth);
	right_perf = is_perfect(tree->right, depth);
	return (left_perf && right_perf);
}
