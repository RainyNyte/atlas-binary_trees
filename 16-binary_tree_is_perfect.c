#include "binary_trees.h"

/**
 * height- helper that calculates height of a tree
 * @root: pointer to root of tree to measure
 *
 * Return: height of the tree
*/
int height(const binary_tree_t *root)
{
	if (root == NULL)
		return 0;

	int left_height = height(root->left);
	int right_height = height(root->right);
	return (1 + ((left_height > right_height) ? left_height : right_height));
}

/**
 * size- helper that calculates the size of a tree
 * @root: pointer to the root of the tree to be measured
 *
 * Return: size of the tree
*/
int size(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);

	return (1 + size(root->left) + size(root->right));
}

/**
 * binary_tree_is_perfect- determines if a tree is perfect
 * @root: pointer to root of the tree to be checked
 *
 * Return: 1 if tree is perfect or 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);

	int height = height(root);
	int size = size(root);
	return (size == (1 << height) - 1);
}
