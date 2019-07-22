#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: ptr to parent of node to create
 * @value: value to put in new node
 * Return: a pointer to a new node or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ret;

	ret = malloc(sizeof(binary_tree_t));
	if (ret == NULL)
		return (NULL);

	ret->left = NULL;
	ret->right = NULL;
	ret->n = value;
	ret->parent = parent;
	return (ret);
}
