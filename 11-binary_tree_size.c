#include "binary_trees.h"
/**
 *  binary_tree_size -  Measures the size of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the size.
 *
 * Return: return the size of binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;
	if (tree == NULL)
	{
		return (0);
	}
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (l + r + 1);
}
