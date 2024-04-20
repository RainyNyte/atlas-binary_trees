#include "binary_trees.h"

/**
 * binary_tree_inorder- navigates a tree using in-order traversal
 * @root: pointer to the root of the tree to traverse
 * @func: pointer to a function to be called on each node in the tree
*/

void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	binary_tree_inorder(root->left, func);
	func(root->n);
	binary_tree_inorder(root->right);
}