#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - iterates through a linked list and prints its elements
 * @h: pointer to a struct, not that the compiler agrees with me
 * Return: # of elements in the list
 */
size_t print_listint(const listint_t *h)
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
