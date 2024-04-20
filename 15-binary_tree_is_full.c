#include "binary_trees.h"

/**
 * binary_tree_is_full- deterimines if a binary tree is full
 * @root: pointer to the root of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
*/

int binary_tree_is_full(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);

	if (root->left == NULL && root->right == NULL)
		return (1);

	if (root->left != NULL && root->right != NULL)
		return (binary_tree_is_full(root->left) && binary_tree_is_full(root->right));

	return (0);
}
