#include "sort.h"
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
	int flag;
	listint_t *current;

	if (!list || !*list || (*list)->next == NULL)
		return;

	flag = 1, current = *list;
	while (flag)
	{
		flag = 0;
		while (current->next)
		{
			if (current->n > (current->next)->n)
			{
				swap(current, current->next);
				if ((current->prev)->prev == NULL)
					*list = current;
				print_list(*list);
				++flag;
			}
				else
					current = current->next;
		}
		while (current->prev)
		{
			if (current->n < (current->prev)->n)
			{
				swap(current->prev, current);
				if (current->prev == NULL)
					*list = current;
				print_list(*list);
					++flag;
			}
			else
				current = current->prev;
		}
	}
}
