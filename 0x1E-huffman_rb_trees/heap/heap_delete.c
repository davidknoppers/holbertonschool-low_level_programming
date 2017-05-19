#include "heap.h"


/**
 * free_binary_tree - free a binary tree
 * @node: ptr to node of binary tree
 * @free_data: function ptr that states if the data must be freed
 * (NULL means no)
 */
void free_binary_tree(binary_tree_node_t *node, void (*free_data)(void *))
{
	if (!node)
		return;
	free_binary_tree(node->left, free_data);
	free_binary_tree(node->right, free_data);
	if (free_data != NULL)
		free_data(node->data);
	free(node);
}

/**
 * heap_delete - frees a heap struct
 * @heap: ptr to heap
 * @free_data: function to state if the data must be freed (NULL means no)
 */
void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	if (!heap)
		return;

	free_binary_tree(heap->root, free_data);
	free(heap);
}
