#include "binary_trees.h"

/**
 * binary_tree_delete- deletes entire binary tree
 * @root: pointer to the root node of the tree we wish to delete
*/

void binary_tree_delete(binary_tree_t *root)
{
	if (root == NULL)
	{
		return;
	}
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(root);
}
