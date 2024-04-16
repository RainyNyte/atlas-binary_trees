#include "binary_trees.h"

/**
 *binary_tree_node- create a node in a binary tree
 *@parent: pointer to the parent node of the node we want to create
 *@value: value w will assign to the node
 *
 *Return: pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  if (new_node == NULL)
  {
    return (NULL);
  }
  else
    {
      new_node->n = value;
      new_node->parent = parent;
      return (new_node);
    }
}
