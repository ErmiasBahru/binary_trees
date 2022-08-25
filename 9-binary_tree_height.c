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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the binary tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	max = left_height >= right_height ? left_height : right_height;
	return (max + 1);
}

