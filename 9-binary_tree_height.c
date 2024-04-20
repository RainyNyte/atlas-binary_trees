#include "binary_trees.h"

/**
 * binary_tree_height- measures the height of a binary tree
 * @root: pointer to the root node of the tree to measure
 *
 * Return: height of the tree or 0 if root is NULL
*/

size_t binary_tree_height(const binary_tree_t *root)
{
	size_t height_l;
	size_t height_r;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		height_l = root->left ? 1 + binary_tree_height(root->left) : 0;
		height_r = root->right ? 1 + binary_tree_height(root->right) : 0;
		return (height_l > height_r ? height_l : height_r);
	}
}
