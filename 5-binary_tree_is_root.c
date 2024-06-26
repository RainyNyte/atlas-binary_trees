#include "binary_trees.h"

/**
 * binary_tree_is_root- checks if the given node is the root of a tree
 * @node: the node to be checked
 *
 * Return: 1 if the node is the root of a tree or 0 otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return ((node->parent == NULL) ? 1 : 0);
}
