#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a new node into the tree to
 * the left of it's parent
 * @lotus: pointer to the parent node of the new node
 * @value: the value we wish to add to the tree in our new node
 * 
 * Return: a pointer to the newly created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *lotus, int value)
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
		if (lotus->left != NULL)
		{
			ten0->left = lotus->left;
			lotus->left->parent = ten0;
		}
		lotus->left = ten0;
		return (ten0);
	}
}
