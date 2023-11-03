#include "binary_trees.h"
/**
 * helper_balance -  measures the balance factor of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the height.
 *
 * Return: The height of the tree
*/
size_t helper_balance(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l = helper_balance(tree->left);
	r = helper_balance(tree->right);
	return (l > r ? l + 1 : r + 1);
}
/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the balance.
 *
 * Return: The balance factor of difference in heights
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l = helper_balance(tree->left);
	r = helper_balance(tree->right);
	return (l - r);
}
