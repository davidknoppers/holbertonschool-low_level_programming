#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - iterates through a linked list and prints its elements
 * @h: pointer to a struct, not that the compiler agrees with me
 * Return: # of elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
