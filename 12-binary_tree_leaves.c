#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the number of leaves a tree has
 * @root: pointer to the root of the tree to be counted
 *
 * Return: number of leaves in a tree or 0 if root is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *root)
{
	size_t left_leaves, right_leaves;

	if (root == NULL)
		return (0);

	if (root->left == NULL && root->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(root->left);
	right_leaves = binary_tree_leaves(root->right);
	return (left_leaves + right_leaves);
}