#include "heap.h"

/**
* binary_tree_node - creates a heap node
* @parent: pointer to the parent of the node to be created
* @data: data to be stored in the node
* Return: return a pointer to the created node or NULL if it fails
**/
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data)
{
	binary_tree_node_t *node;

	node = malloc(sizeof(binary_tree_node_t));
	if (!node)
		return (NULL);

	node->data = data;
	node->left = NULL;
	node->right = NULL;

	if (!parent)
	{
		parent = node;
		node->parent = NULL;
	}
	else if (!parent->left)
	{
		parent->left = node;
		node->parent = parent;
	}
	else if (!parent->right)
	{
		parent->right = node;
		node->parent = parent;
	}
	return (node);
}
