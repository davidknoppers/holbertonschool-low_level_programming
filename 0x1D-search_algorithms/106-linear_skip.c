#include "search_algos.h"
/**
 * linear_skip - jump search for skip lists
 * @list: ptr to first element in LL of ints
 * @value: the int value that we hope to find
 * Return: the index of the value if found, -1 otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *previous_step;

	if (!list)
		return (NULL);
	current = list;
	while (current != NULL && current->n < value)
	{
		previous_step = current;
		current = current->express;
		if (current == NULL)
			break;
		printf("Value checked at index [%ld] = [%d]\n",
		       current->index, current->n);
		if (current->next == NULL)
			break;
	}
	if (current == NULL)
	{
		current = previous_step;
		while (current->next != NULL)
			current = current->next;
	}
	printf("Value found between indexes[%ld] and [%ld]\n",
	       previous_step->index, current->index);
	current = previous_step;
	while (current != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
