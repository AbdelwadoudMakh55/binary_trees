#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree:  pointer to the root node of the tree to measure the balance factor.
 * Return: The balance factor, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_f = 0, height_l = 0, height_r = 0;

	if (tree == NULL)
		return (balance_f);
	if (tree->left != NULL)
		height_l += binary_tree_balance(tree->left);
	if (tree->right != NULL)
		height_r += binary_tree_balance(tree->right);
	if (tree->left != NULL)
		height_l++;
	if (tree->right != NULL)
		height_r++;
	balance_f = height_l - height_r;
	return (balance_f);
}
