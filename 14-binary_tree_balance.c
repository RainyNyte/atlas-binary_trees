#include "binary_trees.h"

/**
 * max- helper function for height
 * calculates the maximum value between two ints
 * @a: first int to check
 * @b: second int to check
 *
 * Return: value of the larger int
*/

int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height- helper function for binary_tree_balance
 * calculates the height of a tree
 * @root: pointer to the root of the tree to measure
 *
 * Return: height of the tree
*/

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);
	return (1 + max(left_height, right_height));
}

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
	int left_height = height(root->left);
	int right_height = height(root->right);

	if (root == NULL)
		return (0);
	
	return (left_height - right_height);
}
