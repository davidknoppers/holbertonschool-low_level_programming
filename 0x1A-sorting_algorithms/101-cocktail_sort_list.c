#include "sort.h"
/**
 * get_node_at_index - gets node at the index, if it exists
 * @head: head of dll
 * @index: index of desired node
 * Return: node at index
 */
listint_t *get_node_at_index(listint_t *head, size_t index)
{
	size_t i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	if (i != index)
		return (NULL);
	return (head);
}
/**
 * swap - subroutine to exchange two dll nodes
 * @left: left node
 * @right: right node
 */
void swap(listint_t *left, listint_t *right)
{
	if (left->prev)
		(left->prev)->next = right;
	if (right->next)
		(right->next)->prev = left;
	left->next = right->next;
	right->prev = left->prev;

	left->prev = right;
	right->next = left;
}
/**
 * listint_len - subroutine to get dll length
 * @h: ptr to head of dll
 * Return: length as an int
 */
int listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
/**
 * cocktail_sort_list - sorts an array using bubble sort, but shakin both ways
 * @list: pointer to head of list
 * Iterates through the entire array, then through the array -1, then -2, etc
 * Return: none
 */
void cocktail_sort_list(listint_t **list)
{
	int i, end, start, flag;

	listint_t *current;

	end = listint_len(*list);
	flag = 0;
	start = 1;
	current = get_node_at_index(*list, end - 1);
	while (end > 0)
	{
		for (i = start, current = get_node_at_index(*list, start);
		     i < end && current != NULL &&
			     current->prev != NULL; i++,
			     current = current->next)
		{
			if (current->n < (current->prev)->n)
			{
				swap(current->prev, current);
				if (current->prev == NULL)
					*list = current;
				current = current->next;
				print_list(*list);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
		for (i = end - start, current = get_node_at_index(*list, i);
		     i > 0 && current != NULL && current->prev != NULL; i--,
			     current = current->prev)
		{
			if (current->n < (current->prev)->n)
			{
				swap(current->prev, current);
				if (current->prev == NULL)
					*list = current;
				current = current->next;
				print_list(*list);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		end--, start++;
	}
}
