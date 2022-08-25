#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds new node as the right-child of another node
 * @parent:  pointer to the node to insert the right-child
 * @value: integer to store to the newly created node
 * Return: (NULL) if @parent is NULL or not possible to create new node
 * otherwise returns (new_node)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_node;
		tmp->parent = new_node;
		new_node->right = tmp;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}

