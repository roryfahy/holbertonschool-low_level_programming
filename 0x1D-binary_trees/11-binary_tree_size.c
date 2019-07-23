#include "binary_trees.h"
/**
 * binary_tree_size - measure size of a binary tree
 * @tree: ptr to root node of tree to measure
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_left, num_right;

	if (tree == NULL)
		return (0);
	num_left = binary_tree_size(tree->left);
	num_right = binary_tree_size(tree->right);
	return (num_left + num_right + 1);
}
