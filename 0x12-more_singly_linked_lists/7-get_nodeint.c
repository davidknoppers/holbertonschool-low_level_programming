#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at a given index
 * @head: ptr to head
 * @index: index of node
 * Return: ptr to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

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
