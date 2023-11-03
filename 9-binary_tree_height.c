#include "binary_trees.h"
/**
 * binary_tree_height -  Measures the height of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the height.
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);
	if (left > right)
	{
		return (1 + left);
	}
	return (1 + right);
}
