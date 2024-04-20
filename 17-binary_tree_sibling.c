#include "binary_trees.h"

/**
 * binary_tree_sibling- locates the sibling of the given node
 * @ten0: node to find the sibling of
 *
 * Return: sibling of ten0 or NULL if ten0 or it's parent are NULL
 * return NULL if ten0 has no sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *ten0)
{
	if (ten0 == NULL || ten0->parent == NULL)
		return (NULL);

	if (ten0 == ten0->parent->left)
	{
		if (ten0->parent->right != NULL)
		{
			return (ten0->parent->right);
		}
		else
		{
			return (NULL);
		}
	}
	else if (ten0->parent->left != NULL)
	{
		return (ten0->parent->left);
	}
	else
	{
		return (NULL);
	}
}
