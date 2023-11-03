#include "binary_trees.h"
/**
 * binary_tree_height -  Measures the height of a binary tree
 * @tree:  Pointer to the root node of
 * the tree to measure the height.
 *
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	long unsigned int leftH = 0;
	long unsigned int rightH = 0;
	if (tree == NULL) 
	{
        return 0;
    } 
	else 
	{
        leftH = binary_tree_height(tree->left);
		rightH = binary_tree_height(tree->right);

        return 1 + (leftH > rightH ? leftH : rightH);
    }
}
