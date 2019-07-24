#include "binary_trees.h"
#define True 1
#define False 0
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: ptr to root of binary tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	l = tree->left;
	r = tree->right;

	if (tree == NULL)
		return (False);
	if ((l == NULL || r == NULL) && !(l == NULL && r == NULL))
		return (False);
	if (l != NULL && binary_tree_is_full(tree->left) == False)
		return (False);
	if (r != NULL && binary_tree_is_full(tree->right) == False)
		return (False);
	return (True);
}
