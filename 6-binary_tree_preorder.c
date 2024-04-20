#include "binary_trees.h"

/**
 * binary_tree_preorder- navigates a tree using preorder traversal
 * @root: pointer to root of the tree
 * @func: pointer to a function to be called on the nodes in the tree
*/

void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	func(root->n);

	binary_tree_preorder(root->left, func);
	binary_tree_preorder(root->right, func);
}
