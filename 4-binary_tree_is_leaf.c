#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a certain node is a leaf node
 * @node: node to check
 * Return: (1) if node is a leaf else (0)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right && node)
		return (1);
	return (0);
}

