#include "binary_trees.h"
/**
 * binary_tree_insert_left - Creates a function
 * to inserts a node as the left-child of another node.
 * @parent: Pointer to parent node
 * @value: Value of parent node
 *
 * Return: Pointer to the created node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;

	if (parent->left != NULL)
	{
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
