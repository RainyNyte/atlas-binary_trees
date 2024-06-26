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
binary_tree_t *binary_tree_insert_right(binary_tree_t *lotus, int value);
void binary_tree_delete(binary_tree_t *root);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *root, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *root, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *root, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *root);
size_t binary_tree_depth(const binary_tree_t *ten0);
size_t binary_tree_size(const binary_tree_t *root);
size_t binary_tree_leaves(const binary_tree_t *root);
size_t binary_tree_nodes(const binary_tree_t *root);
int binary_tree_balance(const binary_tree_t *root);
int binary_tree_is_full(const binary_tree_t *root);
int binary_tree_is_perfect(const binary_tree_t *root);
binary_tree_t *binary_tree_sibling(binary_tree_t *ten0);
binary_tree_t *binary_tree_uncle(binary_tree_t *ten0);

#endif
