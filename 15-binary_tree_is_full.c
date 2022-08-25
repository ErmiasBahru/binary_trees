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
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: (1) if tree is full else (0)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left && right);
}

