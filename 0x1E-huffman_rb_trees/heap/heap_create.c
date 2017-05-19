#include "heap.h"

/**
* heap_create - creates a heap data structure
* @data_cmp: a pointer to a comparison function
* Return: a pointer to the created heap_t structure, or NULL if it fails
**/
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *heap_ptr;

	heap_ptr = malloc(sizeof(heap_t));
	if (!heap)
		return (NULL);
	heap_ptr->size = 0;
	heap_ptr->data_cmp = data_cmp;
	heap_ptr->root = NULL;
	return (heap_ptr);
}
