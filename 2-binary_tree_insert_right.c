#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts new node to the right
 * of the parent node
 * @lotus: pointer to the parent node of our new node
 * @value: value we wish to add to the tree in our new node
 *
 * Return: pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *lotus, int value)
{

	binary_tree_t *ten0;

	if (lotus == NULL)
	{
		return (NULL);
	}
	else
	{
		ten0 = malloc(sizeof(binary_tree_t));
	}

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
		if (lotus->right != NULL)
		{
			ten0->right = lotus->right;
			lotus->right->parent = ten0;
		}
		lotus->right = ten0;
		return (ten0);
	}
}
