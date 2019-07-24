#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: ptr to node
 * Return: ptr to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *ma, *grandma;

	ma = node->parent;
	grandma = ma->parent;
	if (node == NULL || ma == NULL || grandma == NULL)
		return (NULL);
	if (grandma->left != ma)
		return (grandma->left);
	return (grandma->right);
}
