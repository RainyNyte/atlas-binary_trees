#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *struct binary_tree_s - Binary tree node
 *@n: integer stored in the node
 *@parent: pointer to parent node
 *@right: pointer to right child node
 *@left: pointer to left child node
 */
typedef struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *right;
  struct binary_tree_s *left;
} binary_tree_t;

void binary_tree_print(const binary_tree_t *);
binary_tree_t *binary_tree_node(binary_tree_t *lotus, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *lotus, int value);

#endif
