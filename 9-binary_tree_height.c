#include "binary_trees.h"
/**
 * binary_tree_height -  Measures the height of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the height.
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH = 0;
	size_t rightH = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftH = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rightH = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((leftH > rightH) ? leftH : rightH);
	}
}
