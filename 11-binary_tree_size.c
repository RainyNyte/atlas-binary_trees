#include "binary_trees.h"

/**
 * binary_tree_size- measures the size of a binary tree
 * @root: pointer to the root node of a tree to be measured
 *
 * Return: size of the tree or 0 if root is NULL
*/

size_t binary_tree_size(const binary_tree_t *root)
{
	size_t size;

	if (root == NULL)
		return (0);
	size = 1;
	size += binary_tree_size(root->left);
	size += binary_tree_size(root->right);
	return (size);
}
