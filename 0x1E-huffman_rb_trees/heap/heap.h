#ifndef HEAP_HUFFMAN
#define HEAP_HUFFMAN

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_node_s - Binary tree node data structure
 *
 * @data: Data stored in a node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 * @parent: Pointer to the parent node
 */
typedef struct binary_tree_node_s
{
	void *data;
	struct binary_tree_node_s *left;
	struct binary_tree_node_s *right;
	struct binary_tree_node_s *parent;
} binary_tree_node_t;

/**
 * struct heap_s - Heap data structure
 *
 * @size: Size of the heap (number of nodes)
 * @data_cmp: Function to compare two nodes data
 * @root: Pointer to the root node of the heap
 */
typedef struct heap_s
{
	size_t size;
	int (*data_cmp)(void *, void *);
	binary_tree_node_t *root;
} heap_t;

/**
 * struct queue_s - simple queue
 * @node: binary tree node
 * @next: pointer to next queue element
 */
typedef struct queue_s
{
	binary_tree_node_t *node;
	struct queue_s *next;
} queue_t;

/* problem 0, file heap_create */
heap_t *heap_create(int (*data_cmp)(void *, void *));
/* problem 1, file binary_tree_node.c */
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data);
/* problem 2, file heap_insert */
binary_tree_node_t *heap_insert(heap_t *heap, void *data);
/*problem 3, file heap_extract */
void *heap_extract(heap_t *heap);
/*problem 4, file heap_delete */
void heap_delete(heap_t *heap, void (*free_data)(void *));

#endif
