#include <stdlib.h>
#include "lists.h"
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
