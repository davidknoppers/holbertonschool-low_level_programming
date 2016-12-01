#include "lists.h"
/**
 * listint_len - iterates through a linked list and returns # of elements
 * @h: pointer to first element in list
 * Return: # of elements in the list
 */
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
