#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a certain node is a leaf node
 * @node: node to check
 * Return: nothing
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right && node)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - counts the number with at
 * least 1 child in a binary tree
 *
 * @tree: pointer to the root node of tree to count number of nodes
 * Return: number of nodes with atleast 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	return (1 + binary_tree_nodes(tree->left) +
	binary_tree_nodes(tree->right));
}

