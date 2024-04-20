#include "binary_trees.h"

/**
 * binary_tree_depth- measures the depth of a node within a tree
 * @ten0: the node to be measured
 *
 * Return: depth of the node or 0 if the node is NULL
*/

size_t binary_tree_depth(const binary_tree_t *ten0)
{
	size_t depth = 0;
	const binary_tree_t *drifter = ten0;

	if (ten0 == NULL)
		return (0);

	while (drifter->parent != NULL)
	{
		depth++;
		drifter = drifter->parent;
	}
	return (depth);
}
