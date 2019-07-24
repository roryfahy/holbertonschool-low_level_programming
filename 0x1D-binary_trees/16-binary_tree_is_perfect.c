#include "binary_trees.h"
#define True 1
#define False 0
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
/**                                                                      
 * binary_tree_balance - measure balance factor of binary tree           
 * @tree: ptr to root node of tree                                       
 * Return: balance factor                                                
 */
int binary_tree_balance(const binary_tree_t *tree)
{
        size_t h_left, h_right;

        if (tree == NULL)
                return (0);
        if (tree->left == NULL)
                h_left = -1;
        else
                h_left = binary_tree_height(tree->left);
        if (tree->right == NULL)
                h_right = -1;
        else
                h_right = binary_tree_height(tree->right);
        return (h_left - h_right);
}

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: ptr to root of binary tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	l = tree->left;
	r = tree->right;

	if (tree == NULL)
		return (False);
	if ((l == NULL || r == NULL) && !(l == NULL && r == NULL))
		return (False);
	if (binary_tree_balance(tree) != 0)
		return (False);
	if (l != NULL && binary_tree_is_perfect(tree->left) == False)
		return (False);
	if (r != NULL && binary_tree_is_perfect(tree->right) == False)
		return (False);
	return (True);
}
