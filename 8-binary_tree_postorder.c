#include "binary_trees.h"

/**
 * binary_tree_postorder- navigates a tree using postorder traversal
 * @root: pointer to root node of the tree
 * @func: pointer to function to be called on each node of the tree
*/

void binary_tree_postorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL || func == NULL)
		return;

	binary_tree_postorder(root->left, func);
	binary_tree_postorder(root->right, func);
	func(root->n);
}
