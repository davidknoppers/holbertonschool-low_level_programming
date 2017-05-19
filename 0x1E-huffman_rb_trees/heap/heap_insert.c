#include "heap.h"

/**
 * swap_node_values - swaps values of two nodes
 * @new_node: the new node
 * @parent: the parent node
 * Return: 0 on success
 */
int swap_node_values(binary_tree_node_t *new_node, binary_tree_node_t *parent)
{
	void *temp;

	temp = new_node->data;
	new_node->data = parent->data;
	parent->data = temp;
	return (0);
}


/**
 * get_parent_node - get the parent node of the node
 * @root: root of binary tree
 * @height: height of binary tree
 * Return: parent node
 */
binary_tree_node_t *get_parent_node(binary_tree_node_t *root, int *height)
{
	binary_tree_node_t *left, *right;
	int left_height, right_height;

	height++;
	if (root->left == NULL || root->right == NULL)
		return (root);
	left_height = right_height = 0;
	left = get_parent_node(root->left, &left_height);
	right = get_parent_node(root->right, &right_height);
	if (left_height == right_height)
	{
		height += right_height;
		return (left);
	}
	else if (left_height > right_height)
	{
		height += left_height;
		return (right);
	}
	return (NULL);
}

/**
 * heap_insert - insert a node into heap
 * @heap: the pointer to the heap
 * @data: data to insert
 * Return: new node inserted
 */
binary_tree_node_t *heap_insert(heap_t *heap, void *data)
{
	binary_tree_node_t *new_node, *parent, *temp;
	int height;

	height = 0;
	new_node = binary_tree_node(NULL, data);
	if (new_node == NULL)
		return (NULL);
	if (heap->root == NULL)
	{
		heap->size++;
		heap->root = new_node;
		return (new_node);
	}
	parent = get_parent_node(heap->root, &height);
	new_node->parent = parent;
	if (parent->left == NULL)
		parent->left = new_node;
	else
		parent->right = new_node;
	temp = new_node;
	while (temp->parent != NULL)
	{
		if (heap->data_cmp(temp->data, temp->parent->data) < 0)
		{
			swap_node_values(temp, temp->parent);
			new_node = temp->parent;
		}
		temp = temp->parent;
	}
	if (new_node->parent == NULL)
	{
		heap->root = new_node;
	}
	heap->size++;
	return (new_node);
}
