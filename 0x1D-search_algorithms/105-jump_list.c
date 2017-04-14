#include "search_algos.h"
/**
 * jump_list - improvement on linear search that "jumps"
 * by sqrt(n), then loops through subarray
 * @list: ptr to head of LL
 * @size: number of nodes in LL
 * @value: the int we hope to find in the LL
 * Return: node with the desired value if found, NULL otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current;
	int step, index, i;

	if (list == NULL || size < 1)
		return (NULL);
	current = list;
	step = sqrt(size);
	index = 0;
	while (current != NULL && current->n < value)
	{
		index += step;
		while (current->next != NULL && (int) current->index != index)
			current = current->next;
		printf("Value checked at index [%ld] = [%d]\n",
		       current->index, current->n);
		if (current->next == NULL)
			break;
	}
	if (index >= (int) size)
	{
		current = list;
		while (current->next != NULL)
			current = current->next;
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       index - step, index);
	index -= step;
	for (i = 0, current = list; i < index; i++, current = current->next)
		;
	while (current != NULL && index < (int) size)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index,
		       current->n);
		if (current->n == value)
			return (current);
		current = current->next;
		index++;
	}
	return (NULL);
}
