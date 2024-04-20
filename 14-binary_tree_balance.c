#include "binary_trees.h"

/**
 * binary_tree_balance- returns the balance factor of a tree
 * @root: pointer to the root of the tree to be checked
 *
 * Return: a negative value if the tree is left heavy
 * positive if right heavy
 * 0 if perfectly balanced or NULL
*/

int binary_tree_balance(const binary_tree_t *root)
{
	int left_height = _height(root->left);
	int right_height = _height(root->right);

	if (root == NULL)
		return (0);
	
	return (left_height - right_height);
}
