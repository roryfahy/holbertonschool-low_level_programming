#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to root node of tree
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_left, max_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	max_left = binary_tree_height(tree->left);
	max_right = binary_tree_height(tree->right);
	if (max_right > max_left)
		return (max_right + 1);
	return (max_left + 1);
}
