#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *ten0)
{
	binary_tree_t *lotus;
	binary_tree_t *margulis;

	if (ten0 == NULL || ten0->parent == NULL || ten0->parent->parent == NULL)
		return (NULL);

	lotus = ten0->parent;
	margulis = parent->parent;
	if (margulis->left == lotus)
	{
		return (margulis->right);
	}
	else
	{
		return (margulis->left);
	}
}
