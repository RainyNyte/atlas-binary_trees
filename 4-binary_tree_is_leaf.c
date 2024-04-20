#include "binary_trees.h"

/**
 * binary_tree_is_leaf- checks to see if a given node in a tree is a leaf
 * @node: the node to check
 * 
 * Return: 1 if the node is a leaf or 0 otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL) ? 1 : 0;
}
