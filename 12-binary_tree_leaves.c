#include "binary_trees.h"
/**
 * binary_tree_leaves -  Counts the leaves in a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: return the number of leaves otherwise NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftL = 0;
	size_t rightL = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leftL = binary_tree_leaves(tree->left);
	rightL = binary_tree_leaves(tree->right);
	return (leftL + rightL);
}
