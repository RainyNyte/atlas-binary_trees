#include "binary_trees.h"

/**
 *binary_tree_node- create a node in a binary tree
 *@lotus: pointer to the parent node of the node we want to create
 *@value: value w will assign to the node
 *
 *Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *lotus, int value)
{
	binary_tree_t *ten0 = malloc(sizeof(binary_tree_t));

	if (ten0 == NULL)
	{
		return (NULL);
	}
	else
	{
		ten0->n = value;
		ten0->parent = lotus;
		ten0->right = NULL;
		ten0->left = NULL;
		return (ten0);
	}
}
