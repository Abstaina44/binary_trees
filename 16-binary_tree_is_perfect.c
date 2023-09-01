#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	int left_perf, right_perf;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	left_perf = binary_tree_is_perfect(tree->left);
	right_perf = binary_tree_is_perfect(tree->right);

	if (left == right && left_perf && right_perf)
		return (1);
	return (0);
}

/**
 * tree_height - helper function to measure the tree height
 * @tree: pointerr to the tree
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (-1);
	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	return ((lh > rh ? lh : rh) + 1);
}
