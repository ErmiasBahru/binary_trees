#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: (NULL) if node is null, parent is null, grand_parent
 * or uncle is null else (uncle)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;
	binary_tree_t *uncle;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	grand_parent = node->parent->parent;
	if (!grand_parent)
		return (NULL);
	if (grand_parent->left == node->parent)
		uncle = grand_parent->right;
	else
		uncle = grand_parent->left;
	if (!uncle)
		return (NULL);
	return (uncle);
}

