#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - iterates through a linked list and prints its elements
 * @h: pointer to a struct, not that the compiler agrees with me
 * Return: # of elements in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	list_t *temp;

	temp = h;
	i = 0;
	while (temp->str != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	printf("[%d] %s\n", temp->len, temp->str);
	return (i);
}
