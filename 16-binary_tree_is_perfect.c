#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: Depth of the tree, 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * @depth: Depth of the tree
 * @level: Current level of the node being checked
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level);
	}
	if (tree->left && tree->right)
	{
		return (is_perfect_recursive(tree->left, depth, level + 1) && is_perfect_recursive(tree->right, depth, level + 1));
	}

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
        {
		return (0);
	}
	depth = binary_tree_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));
}
