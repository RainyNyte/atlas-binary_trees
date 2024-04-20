#include "binary_trees.h"

/**
 * binary_tree_uncle- finds the uncle of a node
 * @ten0: the node to check
 *
 * Return: uncle of ten0
 * NULL if ten0, it's parent, or it's grandparent are NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *ten0)
{
	binary_tree_t *lotus;
	binary_tree_t *margulis;

	if (ten0 == NULL || ten0->parent == NULL || ten0->parent->parent == NULL)
		return (NULL);

	lotus = ten0->parent;
	margulis = lotus->parent;
	if (margulis->left == lotus)
	{
		return (margulis->right);
	}
	else
	{
		return (margulis->left);
	}
}
