#include "sort.h"
/**
 *
 *
 *
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
 *
 *
 *
 */
void swap_values(listint_t *left, listint_t *right)
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
size_t listint_len(const listint_t *h)
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
 * insertion_sort_list - sorts a dll using the classic sort
 * @list: double ptr to header of dll
 * deprecated code from end of sort
 *	while ((*list)->prev)
 *		(*list) = (*list)->prev
 */
void insertion_sort_list(listint_t **list)
{
	size_t length, i, j;
	listint_t *temp1;

	length = listint_len(*list);
	if (length <= 1)
		return;
	for (i = 1; i < length; i++)
	{
		temp1 = (get_node_at_index(*list, i));
		j = i;
		while (j > 0 && temp1->prev && (temp1->prev)->n > temp1->n)
		{
			swap_values(temp1->prev, temp1);
			j--;
			if (temp1->prev == NULL)
				*list = temp1;
			print_list(*list);
		}
	}
}
