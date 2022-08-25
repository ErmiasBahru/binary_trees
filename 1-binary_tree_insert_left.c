#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a new node as the left-child of another node
 * @parent:  pointer to the node to insert the left-child
 * @value: integer to store to the newly created node
 * Return: (NULL) if @parent is NULL or not possible to create new node
 * otherwise returns (new_node)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		tmp->parent = new_node;
		new_node->left = tmp;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}

