#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of another
 * @parent: ptr to parent of node to create
 * @value: value to put in new node
 * Return: a pointer to a new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ret;

	if (parent == NULL)
		return (NULL);

	ret = malloc(sizeof(binary_tree_t));
	if (ret == NULL)
		return (NULL);
	
	ret->n = value;
	ret->parent = parent;
	ret->left = NULL;
	ret->right = parent->right;

	if (parent->right != NULL)
	{
		ret->right = parent->right;
		parent->right->parent = ret;
	}
	parent->right = ret;
	return (ret);
}
