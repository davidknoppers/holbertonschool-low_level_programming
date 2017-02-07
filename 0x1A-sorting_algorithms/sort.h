#ifndef SORT_EM
#define SORT_EM
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * dlistint_len - iterates through a linked list and returns # of elements
 * @h: pointer to first element in list
 * Return: # of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * swap_values - swaps values of two adjacent dll nodes
 * @node1: ptr to first node
 * @node2: ptr to second node
 */
void swap_values(listint_t *left, listint_t *right)
{
        listint_t *temp;

	if (left->prev)
		(left->prev)->next = right;
	if (right->next)
		(right->next)->prev = left;
	left->next = right->next;
	right->prev = left->prev;

	left->prev = right;
	right->next = left;
}

void print_array(const int *array, size_t size);

void print_list(const listint_t *list);

/* 0-bubble_sort.c, 0-O */
void bubble_sort(int *array, size_t size);

/* 1-insertion_sort_list.c, 1-O */
void insertion_sort_list(listint_t **list);

/* 2-selection_sort.c, 2-O */
void selection_sort(int *array, size_t size);

/* 3-quick_sort.c, 3-O */
void quick_sort(int *array, size_t size);

/* 100-shell_sort.c */
void shell_sort(int *array, size_t size);

/* 101-cocktail_sort_list.c, 101-O */
void cocktail_sort_list(listint_t **list);

/* 102-counting_sort.c, 102-O */
void counting_sort(int *array, size_t size);

/* 103-merge_sort.c, 103-O */
void merge_sort(int *array, size_t size);

/* 104-heap_sort.c, 104-O */
void heap_sort(int *array, size_t size);

/* 105-radix_sort.c, 105-O */
void radix_sort(int *array, size_t size);

/* 106-bitonic_sort.c, 106-O */
void bitonic_sort(int *array, size_t size);

#endif
