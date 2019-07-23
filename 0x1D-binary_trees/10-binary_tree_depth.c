#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of node
 * @tree: ptr to node to measure depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);
	for (i = 0; tree->parent != NULL; i++)
		tree = tree->parent;
	return (i);
}
