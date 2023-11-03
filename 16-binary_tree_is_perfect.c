#include "binary_trees.h"

#include "binary_trees.h"
/**
 * binary_tree_height -  Measures the height of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the height.
 *
 * Return: The height of the binary tree
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
/**
 * binary_tree_is_full -  Checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left &&  tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		if (l == 0 || r == 0)
		{
			return (0);
		}
		return (1);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}
/**
 * binary_tree_is_perfect -   checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t l = binary_tree_height(tree->left);
	size_t r = binary_tree_height(tree->right);
	if (l == r)
	{
		return binary_tree_is_full(tree);
	}
	return (0);
}
