#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete..
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t;

	if (tree == NULL)
		return;
	if (tree->left == NULL and tree->right == NULL)
	{
		free(tree);
	}
	while (tree->parent != NULL)
	{
		binary_tree_delete(tree->parent);
	}
}
