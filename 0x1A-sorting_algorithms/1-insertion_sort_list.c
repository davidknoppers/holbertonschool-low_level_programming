#include "sort.h"
/**
 * insertion_sort_list - sorts a dll using the classic sort
 * @list: double ptr to header of dll
 */
void insertion_sort_list(listint_t **list)
{
	size_t length, i, hole;
	listint_t *right;
	int temp;

	length = listint_len(*list);
	for (i = 1; i < length; i++)
	{
		temp = (get_node_at_index(*list, i))->n;
		hole = i;
		right = get_node_at_index(*list, hole - 1);
		while (hole > 0 && right->n > temp)
		{
			swap_values(right, right->prev);
			hole--;
			right = right->prev;
		}
	}
}

/**
	for (i = 1; i < array_length; i++)
	{
		temp = array[i];
		hole = i;
		while (hole > 0 && array[hole - 1] > temp)
		{
			array[hole] = array[hole - 1];
			hole--;
		}
		array[hole] = temp;
	}
	return (0);
*/
