#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes in binary tree with at least 1 child
 * @tree: ptr to root node of tree to measure
 * Return: number of nodes with >= 1 children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left, nodes_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return ();

	return (nodes_left + nodes_right);
}
