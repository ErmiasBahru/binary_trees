#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: (NULL) if node is null, parent is null or sibling is null
 * else (sibling)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	if (!sibling)
		return (NULL);
	return (sibling);
}

