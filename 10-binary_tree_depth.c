#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a certain node is root node
 * @node: node to check
 * Return: nothing
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: depth of binary tree or (0) if binary tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_root(tree))
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}

