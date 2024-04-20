#include "binary_trees.h"

/**
 * binary_tree_nodes- counts how many nodes have at least 1 child
 * @root: pointer to the root of the tree to count
 *
 * Return: number of nodes with at least 1 child or 0 if root is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);

	if (root->left != NULL || root->right != NULL)
	{
		return (1 + binary_tree_nodes(root->left) + binary_tree_nodes(root->right));
	}
	else
	{
		return (binary_tree_nodes(root->left) + binary_tree_nodes(root->right));
	}
}
