#include "binary_trees.h"

/**
 * height- helper that calculates height of a tree
 * @root: pointer to root of tree to measure
 *
 * Return: height of the tree
*/
int height(const binary_tree_t *root)
{
	int left_height, right_height;

	if (root == NULL)
		return 0;

	left_height = height(root->left);
	right_height = height(root->right);
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
	int h, s;

	if (root == NULL)
		return (0);

	int h = height(root);
	int s = size(root);
	return (s == (1 << h) - 1);
}
